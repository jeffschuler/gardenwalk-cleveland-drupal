<?php
/**
 * @file
 * gardenwalk_community_gardens.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function gardenwalk_community_gardens_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'community_gardens';
  $feeds_importer->config = array(
    'name' => 'Community Gardens',
    'description' => 'Community Gardens CSV Importer',
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
        'content_type' => 'community_garden',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'Garden Name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Garden Address',
            'target' => 'field_address:street',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Description of Garden Location',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Neighborhood',
            'target' => 'field_neighborhood',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
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
  $export['community_gardens'] = $feeds_importer;

  return $export;
}
