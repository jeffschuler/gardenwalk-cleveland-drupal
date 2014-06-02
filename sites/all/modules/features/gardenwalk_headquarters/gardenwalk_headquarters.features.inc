<?php
/**
 * @file
 * gardenwalk_headquarters.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gardenwalk_headquarters_ctools_plugin_api() {
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
function gardenwalk_headquarters_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gardenwalk_headquarters_node_info() {
  $items = array(
    'headquarters' => array(
      'name' => t('Headquarters'),
      'base' => 'node_content',
      'description' => t('A neighborhood headquarters'),
      'has_title' => '1',
      'title_label' => t('Location Name'),
      'help' => '',
    ),
  );
  return $items;
}
