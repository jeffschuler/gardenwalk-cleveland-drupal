<?php
/**
 * @file
 * gardenwalk_urban_farms.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gardenwalk_urban_farms_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|urban_farm|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'urban_farm';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'middle' => array(
        0 => 'field_address',
      ),
      'left' => array(
        0 => 'field_neighborhood',
        1 => 'field_gardenwalk_year',
      ),
      'right' => array(
        0 => 'field_gardener_name',
        1 => 'field_phone',
        2 => 'field_gardener_email',
      ),
    ),
    'fields' => array(
      'field_address' => 'middle',
      'field_neighborhood' => 'left',
      'field_gardener_name' => 'right',
      'field_phone' => 'right',
      'field_gardener_email' => 'right',
      'field_gardenwalk_year' => 'left',
    ),
    'classes' => array(),
  );
  $export['node|urban_farm|default'] = $ds_layout;

  return $export;
}
