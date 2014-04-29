<?php
/**
 * @file
 * gardenwalk_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gardenwalk_home_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
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
function gardenwalk_home_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gardenwalk_home_node_info() {
  $items = array(
    'slideshow_image' => array(
      'name' => t('Rotator Image'),
      'base' => 'node_content',
      'description' => t('Images for the front page image rotator.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
