<?php
/**
 * @file
 * gardenwalk_urban_farms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gardenwalk_urban_farms_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
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
function gardenwalk_urban_farms_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gardenwalk_urban_farms_node_info() {
  $items = array(
    'urban_farm' => array(
      'name' => t('Urban Farm / Market Garden'),
      'base' => 'node_content',
      'description' => t('Urban Farm / Market Garden'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
