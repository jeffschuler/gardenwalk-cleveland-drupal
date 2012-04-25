<?php

$query = db_select('node', 'n');

$nids = $query
  ->condition('n.type', 'garden')
  ->fields('n', array('nid'))
  ->execute()
  ->fetchCol();

$nodes = node_load_multiple($nids);

foreach($nodes as $node) {
  if (!empty($node->field_gardener_address)) {
    print "$node->nid\n";

    //print_r($node->field_gardener_addressfield);    
    //print_r($node->field_gardener_address);

    $node->field_gardener_addressfield['und'][0]['country'] = 'US';
    $node->field_gardener_addressfield['und'][0]['thoroughfare'] = $node->field_gardener_address['und'][0]['street'];
    $node->field_gardener_addressfield['und'][0]['premise'] = $node->field_gardener_address['und'][0]['additional'];
    $node->field_gardener_addressfield['und'][0]['administrative_area'] = $node->field_gardener_address['und'][0]['province'];
    $node->field_gardener_addressfield['und'][0]['locality'] = $node->field_gardener_address['und'][0]['city'];
    $node->field_gardener_addressfield['und'][0]['postal_code'] = $node->field_gardener_address['und'][0]['postal_code'];
    node_save($node);
    
    //print_r($node->field_gardener_addressfield);
    //break;
  }
}

?>