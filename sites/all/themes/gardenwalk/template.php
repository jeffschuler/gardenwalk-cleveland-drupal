<?php

/**
 * Secondary menu: Menu Block following active Primary with Superfish
 */
function gardenwalk_menu_tree__menu_block__4($variables) {
  return '<ul class="menu sf-menu">' . $variables['tree'] . '</ul>';
}

function gardenwalk_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
    //$form['search_block_form']['#title'] = t('Search'); // Change the text on the label element
    //$form['search_block_form']['#title_display'] = 'invisible'; // Toggle label visibilty
    $form['search_block_form']['#size'] = 22;  // define size of the textfield
    $form['search_block_form']['#default_value'] = t('Search this site...'); // Set a default value for the textfield
    //$form['actions']['submit']['#value'] = t('GO!'); // Change the text on the submit button
    //$form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/search-button.png');

// Add extra attributes to the text box
    $form['search_block_form']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Search this site...';}";
    $form['search_block_form']['#attributes']['onfocus'] = "if (this.value == 'Search this site...') {this.value = '';}";
  }
}

/**
 * Page preprocessing
 */
function gardenwalk_preprocess_page(&$vars) {
  // Prefix node page titles of certain content types with the type name
  if (arg(0)=='node' && arg(2)!='edit') {
    $node = node_load(arg(1));
    if (isset($node->type)) {
      switch ($node->type) {
        case 'story':
        case 'garden':
          $types = node_type_get_types();
          $vars['type_title_prefix'] = check_plain($types[$node->type]->name) . ": ";
          break;
        default:
          break;
      }
    }
  }
}

/**
 * Implements theme_nodequeue_arrange_subqueue_form_table().
 *
 * Add a column for Marker Label to help when ordering points.
 */
function gardenwalk_nodequeue_arrange_subqueue_form_table($variables) {
  $form = $variables['form'];

  $output = '';

  // Get css to hide some of the help text if javascript is disabled.
  drupal_add_css(drupal_get_path('module', 'nodequeue') . '/nodequeue.css');

  $table_id = 'nodequeue-dragdrop-' . $form['#subqueue']['sqid'];
  $table_classes = array(
    'nodequeue-dragdrop',
    'nodequeue-dragdrop-qid-' . $form['#subqueue']['qid'],
    'nodequeue-dragdrop-sqid-' . $form['#subqueue']['sqid'],
    'nodequeue-dragdrop-reference-' . $form['#subqueue']['reference'],
  );
  drupal_add_tabledrag($table_id, 'order', 'sibling', 'node-position');
  drupal_add_js(drupal_get_path('module', 'nodequeue') . '/nodequeue_dragdrop.js');

  $reverse[str_replace('-', '_', $table_id)] = (bool) $form['#queue']['reverse'];
  drupal_add_js(
    array(
      'nodequeue' => array(
        'reverse' => $reverse,
      )
    ),
    array(
      'type' => 'setting',
      'scope' => JS_DEFAULT,
    )
  );

  // Render form as table rows.
  $rows = array();
  $counter = 1;
  foreach (element_children($form) as $key) {
    if (isset($form[$key]['title'])) {
      $row = array();

      $row[] = $form[$key]['#node']['field_map_marker_label']['und'][0]['value'];
      $row[] = drupal_render($form[$key]['title']);
      $row[] = drupal_render($form[$key]['author']);
      $row[] = drupal_render($form[$key]['date']);
      $row[] = drupal_render($form[$key]['position']);
      $row[] = (!empty($form[$key]['edit'])) ? drupal_render($form[$key]['edit']) : '&nbsp;';
      $row[] = drupal_render($form[$key]['remove']);
      $row[] = array(
        'data' => $counter,
        'class' => array('position')
      );

      $rows[] = array(
        'data'  => $row,
        'class' => array('draggable'),
      );
    }

    $counter++;
  }
  if (empty($rows)) {
    //$rows[] = array(array('data' => t('No nodes in this queue.'), 'colspan' => 7));
    $rows[] = array(array('data' => t('No nodes in this queue.'), 'colspan' => 8));
  }

  // Render the main nodequeue table.
  $header = array(t('Marker'), t('Title'), t('Author'), t('Post Date'), t('Position'), array('data' => t('Operations'), 'colspan' => 2), t('Position'));
  $output .= theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => $table_id, 'class' => $table_classes)));

  return $output;
}
