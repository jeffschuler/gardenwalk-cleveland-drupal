<?php
/**
 * @file
 * gardenwalk_gardens.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gardenwalk_gardens_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|garden|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'garden';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_gardenwalk_year',
        1 => 'field_neighborhood',
        2 => 'field_gardenwalk_past_year',
      ),
      'middle' => array(
        0 => 'field_map_marker_label',
        1 => 'field_address',
      ),
      'right' => array(
        0 => 'field_yard_areas',
        1 => 'field_description',
        2 => 'field_attractions',
        3 => 'field_ok',
        4 => 'field_handicap_accessible',
        5 => 'field_gardener_name',
        6 => 'field_gardener_addressfield',
        7 => 'field_gardener_phone_home',
        8 => 'field_gardener_phone_cell',
        9 => 'field_gardener_email',
      ),
    ),
    'fields' => array(
      'field_gardenwalk_year' => 'left',
      'field_neighborhood' => 'left',
      'field_gardenwalk_past_year' => 'left',
      'field_map_marker_label' => 'middle',
      'field_address' => 'middle',
      'field_yard_areas' => 'right',
      'field_description' => 'right',
      'field_attractions' => 'right',
      'field_ok' => 'right',
      'field_handicap_accessible' => 'right',
      'field_gardener_name' => 'right',
      'field_gardener_addressfield' => 'right',
      'field_gardener_phone_home' => 'right',
      'field_gardener_phone_cell' => 'right',
      'field_gardener_email' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|garden|default'] = $ds_layout;

  return $export;
}
