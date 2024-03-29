<?php
/**
 * @file
 * Provides drush integration for the Nagios module.
 */

/**
 * Implements hook_drush_command().
 */
function nagios_drush_command() {
  $items['nagios-list'] = array(
    'description' => dt('List all available nagios commands.'),
    'arguments' => array(),
    'aliases' => array('nagios-ls'),
  );
  $items['nagios-check'] = array(
    'description' => dt('Run a nagios command.'),
    'arguments' => array('command' => 'The command to run'),
    'aliases' => array('nagios'),
  );
  $items['nagios-updates'] = array(
    'description' => dt('Return a space delimited string of all monitored projects with available updates.'),
    'arguments' => array('update type' => 'Type of update available, accepts either all or security.', 'nagios flag' => 'Send \'nagios\' as a flag to enable Nagios prefixes to the output.'),
    'aliases' => array('nagios-up'),
  );
  return $items;
}

/**
 * Drush command callback: nagios-list.
 */
function drush_nagios_list() {
  // Invoke hook_nagios_checks() here so people can add in their own checks.
  $commands = array_merge(module_invoke_all('nagios_checks'), drush_command_invoke_all('nagios_checks'));
  foreach ($commands as $cmd => $desc) {
    $rows[] = array($cmd, $desc);
  }
  return drush_print_table($rows);
}

/**
 * Drush command callback: nagios-check.
 */
function drush_nagios_check($check = NULL) {
  if (isset($check)) {
    foreach (module_implements('nagios_checks') as $module) {
      if (in_array($check, array_keys(module_invoke($module, 'nagios_checks')))) {
        return nagios_check($module, $check);
      }
    }
    foreach (drush_command_implements('nagios_checks') as $command) {
      $function = $command . '_nagios_checks';
      if (in_array($check, array_keys($function()))) {
        return nagios_check($command, $check);
      }
    }
    drush_set_error(dt('The requested nagios check does not exist: !check.', array('!check' => $check)));
    drush_set_error(dt('Run `drush nagios-list` for valid checks.'));
  }
  else {
    drush_set_error(dt('Missing argument for nagios-check'));
  }
}

/**
 * Helper function for drush_nagios_check().
 */
function nagios_check($module, $check) {
  $function = $module . '_nagios_check_' . $check;
  if (function_exists($function)) {
    $nagios_data = $function();
  }
  else {
    $function = $module . '_nagios_check';
    $nagios_data = $function($check);
  }
  $key = key($nagios_data);
  $status = nagios_status();
  $message = $key . ' ' . $status[$nagios_data[$key]['status']] . ' - ' . $nagios_data[$key]['text'];
  if ($nagios_data[$key]['type'] == 'perf') {
    $message .= '|' . $key . '=' . $nagios_data[$key]['text'];
  }
  // We want to exit with the correct exit status so Nagios knows the outcome
  // of our drush nagios check so set DRUSH_EXECUTION_COMPLETED to true.
  drush_set_context('DRUSH_EXECUTION_COMPLETED', TRUE);
  drush_print($message);
  exit((int) $nagios_data[$key]['status']);
}

/**
 * Drush command callback: nagios-updates.
 *
 * @param string $update_type
 * A string containing:
 * - 'all' to list all updates.
 * - 'security' to list security updates only.
 *
 * @param integer $nagios_flag
 * Send 'nagios' to prefix the output with a Nagios string.
 */
function drush_nagios_updates($update_type = NULL, $nagios_flag = NULL) {
  $flag_insecure = FALSE;
  $exit_status = NULL;
  $message = '';
  // Need to ensure the Update module was installed before continuing.
  if (db_table_exists('cache_update')) {
    if ($available = _nagios_update_get_available(TRUE)) {
      module_load_include('inc', 'update', 'update.compare');
      $data = update_calculate_project_data($available);
      // Unset any data referencing projects we're not interested in.
      $nagios_ignored_modules = variable_get('nagios_ignored_modules', array());
      $nagios_ignored_themes = variable_get('nagios_ignored_themes', array());
      $nagios_ignored_projects = $nagios_ignored_modules + $nagios_ignored_themes;
      foreach ($nagios_ignored_projects as $key => $value) {
        if ($value == TRUE && isset($data[$key])) {
          unset($data[$key]);
        }
      }

      $module_list = array();

      $updates = nagios_updates($data);
      if (count($updates)) {
        foreach ($updates as $project_name => $update_info) {
          // In any case we need to flag security updates.
          if ($update_info['status'] == UPDATE_NOT_SECURE) {
            $flag_insecure = TRUE;
            $module_list[] = $project_name;
          }
          // If type is 'security' we don't want a full list.
          elseif ($update_type && $update_type == 'all') {
            $module_list[] = $project_name;
          }
        }
        if ($nagios_flag == 'nagios') {
          if ($flag_insecure) {
            // Returning the value didn't work in drush 5.x, so we print it instead.
            $message = 'ADMIN CRITICAL - Updates required for: ' . implode(' ', $module_list);
            $exit_status = 2;
          }
          else {
            if (empty($module_list)) {
              $message = 'ADMIN WARNING - Updates required, but no security updates.';
            }
            else {
              $message = 'ADMIN WARNING - Updates required for: ' . implode(' ', $module_list);
            }
            $exit_status = 1;
          }
        }
        else {
          $message = implode(' ', $module_list);
          // Set $exit_status to zero so any dependent scripts do not get a false failure.
          $exit_status = 0;
        }
      }
    }
    if ($nagios_flag == 'nagios' && is_null($exit_status)) {
      $message = 'OK - No updates';
    }
  }
  else {
    $message = 'The core update module was never installed so we cannot use update check features.';
    // Set a warning, because someone is clearly explicitly trying to use this feature and cannot.
    $exit_status = 1;
  }

  drush_set_context('DRUSH_EXECUTION_COMPLETED', TRUE);
  if (!is_null($exit_status) || $nagios_flag == 'nagios') {
    drush_print($message);
  }
  exit($exit_status);
}

/**
 * Helper function for drush_nagios_updates().
 */
function nagios_updates($data) {
  if (!is_array($data)) {
    return NULL;
  }

  $updates = array();

  // Create an array of status values keyed by module or theme name, since
  // we'll need this while generating the report if we have to cross reference
  // anything (e.g. subthemes which have base themes missing an update).
  foreach ($data as $project) {
    foreach ($project['includes'] as $key => $name) {
      $status[$key] = $project['status'];
    }
  }

  foreach ($data as $project) {
    if ($project['status'] == UPDATE_NOT_SECURE || $project['status'] == UPDATE_NOT_CURRENT) {

      $security_class = array();
      $version_class = array();
      if (isset($project['recommended'])) {
        if ($project['status'] != UPDATE_CURRENT || $project['existing_version'] !== $project['recommended']) {

          // First, figure out what to recommend.
          // If there's only 1 security update and it has the same version we're
          // recommending, give it the same CSS class as if it was recommended,
          // but don't print out a separate "Recommended" line for this project.
          if (!empty($project['security updates']) && count($project['security updates']) == 1 && $project['security updates'][0]['version'] === $project['recommended']) {
            $security_class[] = 'version-recommended';
            $security_class[] = 'version-recommended-strong';
          }
          else {
            $version_class[] = 'version-recommended';
            // Apply an extra class if we're displaying both a recommended
            // version and anything else for an extra visual hint.
            if ($project['recommended'] !== $project['latest_version']
                || !empty($project['also'])
                || ($project['install_type'] == 'dev'
                  && isset($project['dev_version'])
                  && $project['latest_version'] !== $project['dev_version']
                  && $project['recommended'] !== $project['dev_version'])
                || (isset($project['security updates'][0])
                  && $project['recommended'] !== $project['security updates'][0])
                ) {
              $version_class[] = 'version-recommended-strong';
            }
          }
        }
      }

      $row_key = drupal_strtolower($project['name']);
      if (!isset($updates[$row_key])) {
        $updates[$row_key] = array();
      }
      $updates[$row_key]['type'] = $project['project_type'];
      $updates[$row_key]['status'] = $project['status'];
    }
  }

  return $updates;
}

