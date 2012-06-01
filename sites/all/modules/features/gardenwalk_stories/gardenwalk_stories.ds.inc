<?php
/**
 * @file
 * gardenwalk_stories.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gardenwalk_stories_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|story|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'story';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_neighborhood' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_gardenwalk_year' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
  );
  $export['node|story|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gardenwalk_stories_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|story|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'story';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_images',
        1 => 'field_gardenwalk_year',
        2 => 'field_neighborhood',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_images' => 'ds_content',
      'field_gardenwalk_year' => 'ds_content',
      'field_neighborhood' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|story|default'] = $ds_layout;

  return $export;
}
