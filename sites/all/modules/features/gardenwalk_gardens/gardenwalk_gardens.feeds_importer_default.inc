<?php

/**
 * @file
 * gardenwalk_gardens.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function gardenwalk_gardens_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'gardens';
  $feeds_importer->config = array(
    'name' => 'Gardens',
    'description' => 'GardenWalk Gardens CSV Importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'PARTICIPANT',
            'target' => 'field_gardener_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'OK*',
            'target' => 'field_ok',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'DESCRIPTION',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'ADDRESS',
            'target' => 'field_address:street',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'HOME PHONE',
            'target' => 'field_gardener_phone_home',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'CELL PHONE',
            'target' => 'field_gardener_phone_cell',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'EMAIL',
            'target' => 'field_gardener_email',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'NEIGHBORHOOD',
            'target' => 'field_neighborhood',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'ZIP',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '1',
        'bundle' => 'garden',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['gardens'] = $feeds_importer;

  return $export;
}
