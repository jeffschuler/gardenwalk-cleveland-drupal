<?php
/**
 * @file
 * gardenwalk_headquarters.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gardenwalk_headquarters_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|headquarters|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'headquarters';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_gardenwalk_year',
        1 => 'field_neighborhood',
        2 => 'body',
      ),
      'right' => array(
        0 => 'field_address',
        1 => 'field_geofield',
      ),
    ),
    'fields' => array(
      'field_gardenwalk_year' => 'left',
      'field_neighborhood' => 'left',
      'body' => 'left',
      'field_address' => 'right',
      'field_geofield' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|headquarters|default'] = $ds_layout;

  return $export;
}
