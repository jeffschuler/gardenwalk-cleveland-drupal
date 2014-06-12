
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
$sqid = 10; // Slavic Village

$order_by_marker = array('D1', 'D33', 'D10', 'D39', 'D11', 'D19', 'D13', 'D34', 'D35', 'D37', 'D30', 'D40', 'D36', 'D4', 'D5', 'D25', 'D3', 'D24', 'D20', 'D12', 'D2', 'D14', 'D15', 'D21', 'D23', 'D29', 'D16', 'D27', 'D31', 'D6', 'D18', 'D8', 'D38', 'D26', 'D9', 'D28', 'D22', 'D17');

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