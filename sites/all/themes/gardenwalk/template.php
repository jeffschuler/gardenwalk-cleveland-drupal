<?php

/*
 * Custom Primary Links menu with link descriptions
 */
function gardenwalk_menu_link__main_menu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  // Menu item depth
  $depth = isset($variables['element']['#original_link']['depth']) ? $variables['element']['#original_link']['depth'] : -1;
  // Add description for top-level menu items only
  $description = ($depth==1) ? "<div class='description'>" . t($variables['element']['#localized_options']['attributes']['title']) . "</div>" : '';
  $title = "<div class='title'>" . $element['#title'] . "</div>";
  $output = l($title . $description, $element['#href'], array_merge($element['#localized_options'], array('html'=>TRUE)));
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

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
        case 'urban_farm':
        case 'community_garden':
        case 'reimagining_project':
          $types = node_type_get_types();
          $vars['type_title_prefix'] = check_plain($types[$node->type]->name) . ": ";
          break;
        default:
          break;
      }
    }
  }
}
