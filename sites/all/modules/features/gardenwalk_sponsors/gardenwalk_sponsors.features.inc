<?php

/**
 * @file
 * gardenwalk_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gardenwalk_sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gardenwalk_sponsors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gardenwalk_sponsors_image_default_styles() {
  $styles = array();

  // Exported image style: sponsor-page-large.
  $styles['sponsor-page-large'] = array(
    'label' => 'sponsor-page-large',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 280,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sponsor-page-small.
  $styles['sponsor-page-small'] = array(
    'label' => 'sponsor-page-small',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 80,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function gardenwalk_sponsors_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Supporter, donor, or contributor to GardenWalk.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
