<?php
/**
 * @file
 * gardenwalk_community_gardens.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gardenwalk_community_gardens_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community_garden|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community_garden';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_gardenwalk_year',
        1 => 'field_neighborhood',
      ),
      'middle' => array(
        0 => 'field_address',
        1 => 'body',
      ),
      'right' => array(
        0 => 'field_gardener_name',
        1 => 'field_phone',
        2 => 'field_gardener_email',
      ),
    ),
    'fields' => array(
      'field_gardenwalk_year' => 'left',
      'field_neighborhood' => 'left',
      'field_address' => 'middle',
      'body' => 'middle',
      'field_gardener_name' => 'right',
      'field_phone' => 'right',
      'field_gardener_email' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|community_garden|default'] = $ds_layout;

  return $export;
}
