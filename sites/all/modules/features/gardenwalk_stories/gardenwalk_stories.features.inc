<?php
/**
 * @file
 * gardenwalk_stories.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gardenwalk_stories_ctools_plugin_api() {
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
function gardenwalk_stories_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gardenwalk_stories_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Gardener Story'),
      'base' => 'node_content',
      'description' => t('Gardener story'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
