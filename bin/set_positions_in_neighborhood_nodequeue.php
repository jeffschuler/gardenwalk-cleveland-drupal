
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
$sqid = 4; // Detroit Shoreway Subqueue

$order_by_marker = array('A1', 'A73', 'A30', 'A57', 'A29', 'A39', 'A65', 'A43', 'A41', 'A77', 'A27', 'A9', 'A26', 'A25', 'A24', 'A18', 'A10', 'A8', 'A7', 'A51', 'A23', 'A2', 'A56', 'A68', 'A53', 'A13', 'A17', 'A35', 'A12', 'A28', 'A61', 'A54', 'A19', 'A59', 'A48', 'A71', 'A20', 'A52', 'A58', 'A37', 'A47', 'A33', 'A70', 'A32', 'A64', 'A62', 'A55', 'A72', 'A67', 'A45', 'A80', 'A81', 'A79', 'A69', 'A22', 'A31', 'A15', 'A14', 'A21', 'A66', 'A42', 'A4', 'A78', 'A5', 'A6', 'A78', 'A75', 'A44', 'A16', 'A40', 'A60');

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


?>