<?php

/**
 * @file
 * Implements node taxonomy terms modifications, based on taxonomy terms reference fields of selected nodes.
 * Values can be distinct for each field and node type/bundle combination.
 */

define('TAXONOMY_ACTION_ADD', 0);
define('TAXONOMY_ACTION_REPLACE', 1);
define('TAXONOMY_ACTION_DELETE', 2);
define('TAXONOMY_ACTION_REPLACE_VOCABULARY', 3);
define('TAXONOMY_ACTION_NO_CHANGE', 4);

function views_bulk_operations_terms_fields_bundles_action_info() {
  if (!(module_exists('taxonomy') && module_exists('entity'))) return array();
  return array(
    'views_bulk_operations_terms_fields_bundles_action' => array(
      'type' => 'node',
      'label' => t('Modify node terms per fields & node types'),
      'configurable' => TRUE
    )
  );
}

function views_bulk_operations_terms_fields_bundles_action($entity, $params) {

  foreach($params['fields_actions'] as $field_name => $field_infos) {
    if (isset($field_infos[$entity->type])) {
      $field = $entity->$field_name;
      if (isset($field[$entity->language])) {
        $old_terms = $field[$entity->language];
      } else {
        $old_terms = array();
      }
      $new_terms = array();
      foreach ($field_infos[$entity->type]['terms'] as $term) {
        $new_terms[] = array('tid' => $term);
      }
      switch ($field_infos[$entity->type]['do']) {
        case TAXONOMY_ACTION_ADD:
          // Add the new terms
          // We first remove the existing terms from the new ones, keeping the initial order
          foreach ($old_terms as $old_term){
            foreach ($new_terms as $new_key => $new_term) {
              if ($new_term['tid'] == $old_term['tid']) {
                unset($new_terms[$new_key]);
              }
            }
          }
          // Then we add the terms
          foreach ($new_terms as $new_term) {
            $old_terms[] = $new_term;
          }
          $new_field = array();
          $new_field[$entity->language] = $old_terms;
          $entity->$field_name = $new_field;
          entity_save('node',$entity);
          break;
        case TAXONOMY_ACTION_REPLACE:
          $new_field = array();
          $new_field[$entity->language] = $new_terms;
          $entity->$field_name = $new_field;
          entity_save('node',$entity);
          break;
        case TAXONOMY_ACTION_DELETE:
          // Add the new terms
          // We first remove the existing terms from the new ones, keeping the initial order
          foreach ($new_terms as $new_key => $new_term){
            foreach ($old_terms as $old_key => $old_term) {
              if ($new_term['tid'] == $old_term['tid']) {
                unset($old_terms[$old_key]);
                break;
              }
            }
          }
          $new_field = array();
          $new_field[$entity->language] = $old_terms;
          $entity->$field_name = $new_field;
          entity_save('node',$entity);
          break;
        // Not yet
        //case TAXONOMY_ACTION_REPLACE_VOCABULARY:
        //  break;
        case TAXONOMY_ACTION_NO_CHANGE:
          break;
        default:
          break;
      }
    }
  }
  return TRUE;
}

function views_bulk_operations_terms_fields_bundles_action_form($context) {

  // Make query to find all relevant node types
  // So we can filter all the instances
  $nodetypes = array();
  foreach($context['selection'] as $nid) {
    $node = node_load($nid);
    $node_type = node_type_get_type($node);
    $nodes[] = array(
      'nid' => $node->nid,
      'node_type' => $node_type->type,
      'node' => $node
    );
    $nodetypes[$node_type->type] = $node_type->type;
  }

  $fields = field_info_fields();
  $taxo_fields = array();

  foreach($fields as $field) {
    if ($field['type'] == 'taxonomy_term_reference') {
      foreach($field['bundles']['node'] as $bundle) {
        if (isset($nodetypes[$bundle])) {
          $taxo_fields[] = array(
            'field' => $field,
            'bundle' => $bundle
          );
        }
      }
    }
  }

  $fields_list = array();

  $form = array();

  if (count($taxo_fields)>0) {

    foreach ($taxo_fields as $taxo_field) {

      $field = $taxo_field['field'];
      $bundle = $taxo_field['bundle'];
      $vocabulary = $field['settings']['allowed_values'][0]['vocabulary'];

      $fields_list[] = array('field_name' => $field['field_name'], 'bundle' => $bundle);

      $element = array(
      '#type' => 'fieldset',
      '#title' => t('Terms for @field of @bundle nodes', array('@field' => $field['field_name'], '@bundle' => $bundle)),
      '#collapsible' => TRUE,
      '#tree' => TRUE,
      '#parents' => array(),
      '#field_name' => 'fieldset-'.$field['field_name']
    );

      $new_field_name = $field['field_name']."+".$bundle;
      $options = taxonomy_allowed_values($field);
      $field_form = array();

      $field_form['terms+'.$new_field_name] = array(
        '#title' => t('Select terms for vocabulary @vocabulary',array('@vocabulary' => $vocabulary)),
        '#type' => 'select',
        '#options' => $options,
        '#multiple' => TRUE,
        '#size' => 8
      );

      $field_form['do+'.$new_field_name] = array(
        '#type' => 'select',
        '#title' => t('Action to take for this field/bundle'),
        '#default_value' => isset($context['do']) ? $context['do'] : TAXONOMY_ACTION_NO_CHANGE,
        '#options' => array(
          TAXONOMY_ACTION_ADD => t('Add the selected terms'),
          TAXONOMY_ACTION_REPLACE => t('Replace existing terms with selected ones'),
          //TAXONOMY_ACTION_REPLACE_VOCABULARY => t('Replace terms within same vocabulary'),
          TAXONOMY_ACTION_DELETE => t('Delete selected terms'),
          TAXONOMY_ACTION_NO_CHANGE => t('No change on this field')
        ),
        '#required' => TRUE,
        '#weight' => -2,
      );

      $element[] = $field_form;
      $form[] = $element;
    }
    $form['items_list'] = array(
      '#type' => 'hidden',
      '#value' => serialize($fields_list)
    );
    return $form;
  }
  return array();
}

function views_bulk_operations_terms_fields_bundles_action_submit($form, $form_state) {
  $result = array();
  foreach($form_state['values'][0] as $form_field_name => $value) {
    $field_infos = explode('+',$form_field_name);

    if (count($field_infos) == 3) {
      switch ($field_infos[0]) {
        case 'terms':
          $result[$field_infos[1]][$field_infos[2]]['terms'] = $value;
          break;
        case 'do':
          $result[$field_infos[1]][$field_infos[2]]['do'] = $value;
          break;
      }
    }
  }
  return array('fields_actions' => $result);
}

function views_bulk_operations_terms_fields_bundles_action_validate($form, $form_state) {
  // Let's suppose everything's fine for now
}
