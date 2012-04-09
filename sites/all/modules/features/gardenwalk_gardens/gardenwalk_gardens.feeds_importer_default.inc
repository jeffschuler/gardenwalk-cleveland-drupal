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
        'content_type' => 'garden',
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

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'gardens_webform';
  $feeds_importer->config = array(
    'name' => 'Gardens - webform',
    'description' => 'Gardens from webform application',
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
        'content_type' => 'garden',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'Time',
            'target' => 'created',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'SID',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'Neighborhood',
            'target' => 'field_neighborhood',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Home',
            'target' => 'field_gardener_phone_home',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Cell',
            'target' => 'field_gardener_phone_cell',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Email',
            'target' => 'field_gardener_email',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Yard access',
            'target' => 'field_yard_areas',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Is it okay to take photos of your garden for publicity purposes?',
            'target' => 'field_ok',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Special attractions',
            'target' => 'field_attractions',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Was your garden included in GardenWalk 2011?',
            'target' => 'field_gardenwalk_past_year',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Garden Description',
            'target' => 'field_description',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'First name',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Last name',
            'target' => 'field_gardener_name',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Gardener Street',
            'target' => 'field_gardener_address:street',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Gardener City',
            'target' => 'field_gardener_address:city',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Gardener Zip',
            'target' => 'field_gardener_address:postal_code',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Street',
            'target' => 'field_address:street',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Zip code',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => '1',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['gardens_webform'] = $feeds_importer;

  return $export;
}
