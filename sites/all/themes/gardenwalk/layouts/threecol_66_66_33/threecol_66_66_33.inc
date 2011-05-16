<?php

/**
 * Implementation of hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Three column 66%, 66%, 33%'),
  'category' => t('12 Column'),
  'icon' => 'threecol_66_66_33.png',
  'theme' => 'panels_threecol_66_66_33',
  'css' => 'threecol_66_66_33.css',
  'regions' => array(
    'topleft' => t('Top left (66%)'),
    'topright' => t('Top right (33%)'),
    'midleft' => t('Middle left (66%)'),
    'midright' => t('Middle right (33%)'),
    'botleft' => t('Bottom left (33%)'),
    'botright' => t('Bottom right (66%)'),
  ),
);