<?php

/**
 * Implementation of hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Three column 66%, 100%, 66%, 100%'),
  'category' => t('12 Column'),
  'icon' => 'threecol_66_100_66_100.png',
  'theme' => 'panels_threecol_66_100_66_100',
  'css' => 'threecol_66_100_66_100.css',
  'regions' => array(
    'topleft' => t('Top left (66%)'),
    'topright' => t('Top right (33%)'),
    'topmidfull' => t('Top-mid full (100%)'),
    'midleft' => t('Middle left (66%)'),
    'midright' => t('Middle right (33%)'),
    'botfull' => t('Bottom full (100%)'),
  ),
);