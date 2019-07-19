<?php

/**
 * @file
 * gardenwalk_basic.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function gardenwalk_basic_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats[2] = array(
    'format' => 2,
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter_paragraph_fix' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(
          'replace' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
