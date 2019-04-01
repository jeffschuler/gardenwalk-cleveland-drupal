<?php

/**
 * @file
 * gardenwalk_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gardenwalk_home_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gardenwalk_home_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gardenwalk_home_image_default_styles() {
  $styles = array();

  // Exported image style: home_slider.
  $styles['home_slider'] = array(
    'label' => 'home_slider',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 620,
          'height' => 430,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: rotator.
  $styles['rotator'] = array(
    'label' => 'rotator',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 300,
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
  drupal_alter('node_info', $items);
  return $items;
}
