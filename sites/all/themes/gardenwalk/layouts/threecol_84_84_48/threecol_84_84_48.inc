<?php

/**
 * Implementation of hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Three column 8-4, 8-4, 4-8'),
  'category' => t('12 Column'),
  'icon' => 'threecol_84_84_48.png',
  'theme' => 'panels_threecol_84_84_48',
  'css' => 'threecol_84_84_48.css',
  'regions' => array(
    'topleft' => t('Top left (8)'),
    'topright' => t('Top right (4)'),
    'midleft' => t('Middle left (8)'),
    'midright' => t('Middle right (4)'),
    'botleft' => t('Bottom left (4)'),
    'botright' => t('Bottom right (8)'),
  ),
);