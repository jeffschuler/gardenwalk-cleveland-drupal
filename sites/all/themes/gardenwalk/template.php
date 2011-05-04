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