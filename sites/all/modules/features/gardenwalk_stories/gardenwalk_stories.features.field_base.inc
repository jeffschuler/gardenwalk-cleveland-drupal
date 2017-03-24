<?php
/**
 * @file
 * gardenwalk_stories.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gardenwalk_stories_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_garden_ref'.
  $field_bases['field_garden_ref'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_garden_ref',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'community_garden' => 0,
        'garden' => 'garden',
        'headquarters' => 0,
        'page' => 0,
        'printable_map' => 0,
        'reimagining_project' => 0,
        'slideshow_image' => 0,
        'special_feature' => 0,
        'sponsor' => 0,
        'story' => 0,
        'urban_farm' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 1,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_thumbnail'.
  $field_bases['field_thumbnail'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thumbnail',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'image',
  );

  return $field_bases;
}
