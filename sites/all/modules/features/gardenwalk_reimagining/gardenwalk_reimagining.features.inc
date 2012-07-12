<?php
/**
 * @file
 * gardenwalk_reimagining.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gardenwalk_reimagining_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
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
function gardenwalk_reimagining_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gardenwalk_reimagining_node_info() {
  $items = array(
    'reimagining_project' => array(
      'name' => t('Reimagining Project'),
      'base' => 'node_content',
      'description' => t('Reimagining Cleveland Project'),
      'has_title' => '1',
      'title_label' => t('Project Name'),
      'help' => '',
    ),
  );
  return $items;
}
