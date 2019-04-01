<?php

/**
 * @file
 * gardenwalk_reimagining.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function gardenwalk_reimagining_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'reimagining';
  $feeds_importer->config = array(
    'name' => 'Reimagining Projects',
    'description' => 'Reimagining Projects CSV Importer',
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
            'source' => 'Project Name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'NPI project number',
            'target' => 'field_npi_project_num',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Project Address',
            'target' => 'field_address:street',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Project Coordinator',
            'target' => 'field_gardener_name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '1',
        'bundle' => 'reimagining_project',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['reimagining'] = $feeds_importer;

  return $export;
}
