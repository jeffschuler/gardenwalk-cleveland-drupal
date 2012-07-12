<?php
/**
 * @file
 * gardenwalk_reimagining.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gardenwalk_reimagining_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|reimagining_project|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'reimagining_project';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_html5';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_gardenwalk_year',
        1 => 'field_neighborhood',
      ),
      'middle' => array(
        0 => 'field_address',
      ),
      'right' => array(
        0 => 'field_gardener_name',
        1 => 'field_phone',
        2 => 'field_gardener_email',
        3 => 'field_npi_project_num',
      ),
    ),
    'fields' => array(
      'field_gardenwalk_year' => 'left',
      'field_neighborhood' => 'left',
      'field_address' => 'middle',
      'field_gardener_name' => 'right',
      'field_phone' => 'right',
      'field_gardener_email' => 'right',
      'field_npi_project_num' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|reimagining_project|default'] = $ds_layout;

  return $export;
}
