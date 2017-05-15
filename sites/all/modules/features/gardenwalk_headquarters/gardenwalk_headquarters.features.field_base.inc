<?php
/**
 * @file
 * gardenwalk_headquarters.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gardenwalk_headquarters_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'.
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 1,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_garden_name'.
  $field_bases['field_garden_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_garden_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_map_marker_label'.
  $field_bases['field_map_marker_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_map_marker_label',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '// Get label prefix
if (isset($entity->field_neighborhood[\'und\'][0][\'tid\'])) {
  $term = taxonomy_term_load($entity->field_neighborhood[\'und\'][0][\'tid\']);
  $prefix = $term->field_map_label_prefix[\'und\'][0][\'value\'];
}

// Get position in nodequeue
$neighborhood_qid = 4;
$neighborhood_tid = $entity->field_neighborhood[\'und\'][0][\'tid\'];
$queue = array_shift(nodequeue_load_subqueues_by_reference(
  array(
    $neighborhood_qid => array(
      $neighborhood_tid
    )
  )
));
if ($queue) {
  $position = nodequeue_get_subqueue_position($queue->sqid, $entity->nid);
}

$entity_field[0][\'value\'] = $prefix . $position;',
      'database' => array(
        'data_default' => 'DEFAULT',
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '// Get position in nodequeue
$neighborhood_qid = 4;
$neighborhood_tid = $entity->field_neighborhood[\'und\'][0][\'tid\'];
$queue = array_shift(nodequeue_load_subqueues_by_reference(
  array(
    $neighborhood_qid => array(
      $neighborhood_tid
    )
  )
));
if ($queue) {
  $position = nodequeue_get_subqueue_position($queue->sqid, $entity->nid);
}

$display_output = $entity_field_item[\'value\'];',
      'recalculate' => FALSE,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  return $field_bases;
}
