<?php
/**
 * @file
 * gardenwalk_ol_maps.openlayers_layers.inc
 */

/**
 * Implements hook_openlayers_layers().
 */
function gardenwalk_ol_maps_openlayers_layers() {
  $export = array();

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'neighborhoods_geojson';
  $openlayers_layers->title = 'Neighborhoods (GeoJSON)';
  $openlayers_layers->description = '';
  $openlayers_layers->data = array(
    'url' => 'geojson/neighborhoods.geojson',
    'geojson_data' => '',
    'layer_type' => 'openlayers_layer_type_geojson',
  );
  $export['neighborhoods_geojson'] = $openlayers_layers;

  return $export;
}
