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
        2 => 'field_special_feature',
        3 => 'workflow_current_state',
        4 => 'field_past_gardenwalks',
        5 => 'field_yard_areas',
        6 => 'field_description',
      ),
      'middle' => array(
        0 => 'field_garden_name',
        1 => 'field_map_marker_label',
        2 => 'field_address',
      ),
      'right' => array(
        0 => 'field_garden_age',
        1 => 'field_attractions',
        2 => 'field_ok',
        3 => 'field_handicap_accessible',
        4 => 'field_gardener_name',
        5 => 'field_gardener_addressfield',
        6 => 'field_gardener_phone_home',
        7 => 'field_gardener_phone_cell',
        8 => 'field_gardener_email',
      ),
    ),
    'fields' => array(
      'field_gardenwalk_year' => 'left',
      'field_neighborhood' => 'left',
      'field_special_feature' => 'left',
      'workflow_current_state' => 'left',
      'field_past_gardenwalks' => 'left',
      'field_yard_areas' => 'left',
      'field_description' => 'left',
      'field_garden_name' => 'middle',
      'field_map_marker_label' => 'middle',
      'field_address' => 'middle',
      'field_garden_age' => 'right',
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
