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
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gardenwalk_gardens_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
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
 * Implements hook_workflow_features_default_workflow().
 */
function gardenwalk_gardens_workflow_features_default_workflow() {
  return array(
    'Garden Approval' => array(
      'name' => 'Garden Approval',
      'tab_roles' => '2',
      'options' => 'a:3:{s:16:"comment_log_node";i:0;s:15:"comment_log_tab";i:0;s:13:"name_as_title";i:0;}',
      'states' => array(
        0 => array(
          'state' => '(creation)',
          'weight' => '-50',
          'sysid' => '1',
          'status' => '1',
        ),
        1 => array(
          'state' => 'Application',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
        2 => array(
          'state' => 'Approved',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
        3 => array(
          'state' => 'Declined',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
      ),
      'transitions' => array(
        0 => array(
          'sid' => '(creation)',
          'target_sid' => 'Application',
          'roles' => 'author,1,2,3,4,5,6,7,8',
        ),
        1 => array(
          'sid' => 'Application',
          'target_sid' => 'Approved',
          'roles' => ',3,4,8',
        ),
        2 => array(
          'sid' => 'Application',
          'target_sid' => 'Declined',
          'roles' => ',3,4,8',
        ),
        3 => array(
          'sid' => 'Approved',
          'target_sid' => 'Declined',
          'roles' => '2,3,8',
        ),
        4 => array(
          'sid' => 'Approved',
          'target_sid' => 'Application',
          'roles' => '2,3,8',
        ),
        5 => array(
          'sid' => 'Declined',
          'target_sid' => 'Approved',
          'roles' => '2,3,8',
        ),
        6 => array(
          'sid' => 'Declined',
          'target_sid' => 'Application',
          'roles' => '2,3,8',
        ),
      ),
      'node_types' => array(
        0 => array(
          'type' => 'garden',
          'wid' => '1',
        ),
      ),
    ),
  );
}