<?php
/**
 * @file
 * gardenwalk_special_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gardenwalk_special_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gardenwalk_special_features_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gardenwalk_special_features_node_info() {
  $items = array(
    'special_feature' => array(
      'name' => t('Special Feature'),
      'base' => 'node_content',
      'description' => t('A garden-related location.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
