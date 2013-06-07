<?php
/**
 * @file
 * gardenwalk_gardens.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gardenwalk_gardens_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gardenwalk_gardens_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gardenwalk_gardens_node_info() {
  $items = array(
    'garden' => array(
      'name' => t('Garden'),
      'base' => 'node_content',
      'description' => t('A GardenWalk home garden.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_workflow_default_workflows().
 */
function gardenwalk_gardens_workflow_default_workflows() {
  $workflows = array();

  // Exported workflow: Garden Approval
  $workflows['Garden Approval'] = array(
    'name' => 'Garden Approval',
    'tab_roles' => '2,3,4,8',
    'options' => 'a:3:{s:16:"comment_log_node";i:0;s:15:"comment_log_tab";i:0;s:13:"name_as_title";i:0;}',
    'states' => array(
      0 => array(
        'state' => '(creation)',
        'weight' => '-50',
        'sysid' => '1',
        'status' => '1',
        'name' => 'Garden Approval',
      ),
      1 => array(
        'state' => 'Application',
        'weight' => '0',
        'sysid' => '0',
        'status' => '1',
        'name' => 'Garden Approval',
      ),
      2 => array(
        'state' => 'Approved',
        'weight' => '0',
        'sysid' => '0',
        'status' => '1',
        'name' => 'Garden Approval',
      ),
      3 => array(
        'state' => 'Denied',
        'weight' => '0',
        'sysid' => '0',
        'status' => '1',
        'name' => 'Garden Approval',
      ),
    ),
    'transitions' => array(
      0 => array(
        'roles' => 'workflow_features_author_name,anonymous user,authenticated user,administrator,developer,reimagining editor,editor,guide editor,garden finder',
        'state' => '(creation)',
        'target_state' => 'Application',
      ),
      1 => array(
        'roles' => 'administrator,developer,garden finder',
        'state' => 'Application',
        'target_state' => 'Approved',
      ),
      2 => array(
        'roles' => 'administrator,developer,garden finder',
        'state' => 'Application',
        'target_state' => 'Denied',
      ),
      3 => array(
        'roles' => 'administrator,developer,garden finder',
        'state' => 'Approved',
        'target_state' => 'Application',
      ),
      4 => array(
        'roles' => 'administrator,developer,garden finder',
        'state' => 'Approved',
        'target_state' => 'Denied',
      ),
      5 => array(
        'roles' => 'administrator,developer,garden finder',
        'state' => 'Denied',
        'target_state' => 'Approved',
      ),
      6 => array(
        'roles' => 'administrator,developer,garden finder',
        'state' => 'Denied',
        'target_state' => 'Application',
      ),
    ),
    'node_types' => array(
      0 => 'garden',
    ),
  );

  return $workflows;
}
