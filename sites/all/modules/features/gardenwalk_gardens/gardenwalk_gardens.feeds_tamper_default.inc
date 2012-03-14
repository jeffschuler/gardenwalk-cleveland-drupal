<?php
/**
 * @file
 * gardenwalk_gardens.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function gardenwalk_gardens_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gardens_webform-last_name-rewrite';
  $feeds_tamper->importer = 'gardens_webform';
  $feeds_tamper->source = 'Last name';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[First name] [Last name]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['gardens_webform-last_name-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gardens_webform-special_attractions-explode';
  $feeds_tamper->importer = 'gardens_webform';
  $feeds_tamper->source = 'Special attractions';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['gardens_webform-special_attractions-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass;
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gardens_webform-yard_access-explode';
  $feeds_tamper->importer = 'gardens_webform';
  $feeds_tamper->source = 'Yard access';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['gardens_webform-yard_access-explode'] = $feeds_tamper;

  return $export;
}
