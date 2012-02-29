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
