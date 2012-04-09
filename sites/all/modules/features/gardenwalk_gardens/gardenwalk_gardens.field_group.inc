<?php
/**
 * @file
 * gardenwalk_gardens.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gardenwalk_gardens_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|garden|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Additional',
    'weight' => '15',
    'children' => array(
      0 => 'field_handicap_accessible',
      1 => 'field_accessibility_notes',
      2 => 'field_ok',
      3 => 'field_map_label_prefix',
      4 => 'field_map_label',
      5 => 'field_gardenwalk_past_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional|node|garden|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_garden_info|node|garden|form';
  $field_group->group_name = 'group_garden_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Garden info',
    'weight' => '13',
    'children' => array(
      0 => 'body',
      1 => 'field_attractions',
      2 => 'field_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_garden_info|node|garden|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gardener|node|garden|form';
  $field_group->group_name = 'group_gardener';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Gardener info',
    'weight' => '11',
    'children' => array(
      0 => 'field_gardener_name',
      1 => 'field_gardener_email',
      2 => 'field_gardener_phone_home',
      3 => 'field_gardener_phone_cell',
      4 => 'field_gardener_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gardener|node|garden|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|garden|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Garden location',
    'weight' => '12',
    'children' => array(
      0 => 'field_address',
      1 => 'field_yard_areas',
      2 => 'field_neighborhood',
      3 => 'field_gardenwalk_year',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location|node|garden|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|garden|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'garden';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'group_additional',
      1 => 'group_garden_info',
      2 => 'group_gardener',
      3 => 'group_location',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_main|node|garden|form'] = $field_group;

  return $export;
}
