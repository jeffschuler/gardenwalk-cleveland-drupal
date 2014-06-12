
<?php

/*
nodequeue_load_subqueues_by_queue
nodequeue_load_subqueue


nodequeue_nids_visible

nodequeue_subqueue_position
nodequeue_subqueue_remove
nodequeue_subqueue_remove_node

nodequeue_queue_swap
*/

$qid = 4; // Neighborhood Queue

//$sqid = 4; // Detroit Shoreway Subqueue
//$sqid = 10; // Slavic Village
$sqid = 11; // Tremont

$order_by_marker = array('E1', 'E31', 'E29', 'E34', 'E24', 'E2', 'E32', 'E43', 'E16', 'E15', 'E44', 'E26', 'E38', 'E30', 'E41', 'E17', 'E18', 'E21', 'E19', 'E37', 'E20', 'E7', 'E40', 'E39', 'E6', 'E28', 'E33', 'E14', 'E36', 'E12', 'E13', 'E11', 'E10', 'E25', 'E9', 'E4', 'E23', 'E22', 'E3');

print_r('$order_by_marker:');
print_r($order_by_marker);

function get_nid_by_marker($marker) {
  return
    db_query("SELECT entity_id FROM {field_data_field_map_marker_label}
        WHERE field_map_marker_label_value = :marker",
      array(':marker' => $marker))->fetchField();
}

//function get_nid_by_position($sqid, $position) {
//  return
//    db_query("SELECT nid FROM {nodequeue_nodes}
//        WHERE sqid = :sqid AND position = :position",
//      array(':sqid' => $sqid, ':position' => $position))->fetchField();
//}

$order_by_nid = array();
foreach ($order_by_marker as $marker) {
  $nid = get_nid_by_marker($marker);
  $order_by_nid[] = $nid;
}
print_r('$order_by_nid:');
print_r($order_by_nid);

$reverse_order_nids = array_reverse($order_by_nid);
print_r('$reverse_order_nids:');
print_r($reverse_order_nids);

$current_positions = array();
$subqueue = nodequeue_load_subqueue($sqid);
print_r($subqueue);
foreach ($reverse_order_nids as $nid) {
  $current_position = nodequeue_subqueue_position($sqid, $nid);
  nodequeue_queue_front($subqueue, $current_position);
  //$current_positions[] = $current_position;
}

//print_r('$current_positions:');
//print_r($current_positions);

//@TODO: Re-save all points in neighborhood to update computed field markers

?>