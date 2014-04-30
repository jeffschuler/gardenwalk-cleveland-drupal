<?php

/**
 * Implementation of hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Three column 33%/66%, Thirds'),
  'category' => t('12 Column'),
  'icon' => 'threecol_33_3.png',
  'theme' => 'panels_threecol_33_3',
  'css' => 'threecol_33_3.css',
  'regions' => array(
    'topleft' => t('Top left (33%)'),
    'topright' => t('Top right (66%)'),
    'mid' => t('Middle (100%)'),
    'botleft' => t('Bottom left (33%)'),
    'botmid' => t('Bottom center (33%)'),
    'botright' => t('Bottom right (33%)'),
  ),
);