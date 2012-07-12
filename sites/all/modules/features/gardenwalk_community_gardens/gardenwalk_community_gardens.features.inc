<?php
/**
 * @file
 * gardenwalk_community_gardens.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gardenwalk_community_gardens_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
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
function gardenwalk_community_gardens_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gardenwalk_community_gardens_node_info() {
  $items = array(
    'community_garden' => array(
      'name' => t('Community Garden'),
      'base' => 'node_content',
      'description' => t('Summer Sprout Community Garden'),
      'has_title' => '1',
      'title_label' => t('Garden Name'),
      'help' => '',
    ),
  );
  return $items;
}
