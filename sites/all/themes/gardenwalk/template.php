<?php

/*
 * Custom Primary Links menu with link descriptions
 */
function gardenwalk_menu_link__primary_links(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $desc = "<div class='description'>" . t($variables['element']['#localized_options']['attributes']['title']) . "</div>";
  $title = "<div class='title'>" . $element['#title'] . "</div>";
  $output = l($title . $desc, $element['#href'], array_merge($element['#localized_options'], array('html'=>TRUE)));
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
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