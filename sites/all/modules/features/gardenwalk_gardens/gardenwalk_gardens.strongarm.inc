<?php
/**
 * @file
 * gardenwalk_gardens.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gardenwalk_gardens_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__garden';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '4',
        ),
        'body' => array(
          'weight' => 0,
        ),
        'path' => array(
          'weight' => '5',
        ),
        'xmlsitemap' => array(
          'weight' => '4',
        ),
        'workflow' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'workflow_current_state' => array(
          'default' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'workflow' => array(
          'default' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__garden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_garden';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_garden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_garden';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_garden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_garden';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_garden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_garden';
  $strongarm->value = '0';
  $export['node_preview_garden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_garden';
  $strongarm->value = 0;
  $export['node_submitted_garden'] = $strongarm;

  return $export;
}
