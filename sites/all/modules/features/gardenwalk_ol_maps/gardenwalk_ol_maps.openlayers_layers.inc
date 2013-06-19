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
    'layer_handler' => 'geojson',
    'projection' => array(
      0 => 'EPSG:4326',
    ),
    'serverResolutions' => array(
      0 => 0.703125,
      1 => 0.3515625,
      2 => 0.17578125,
      3 => 0.087890625,
      4 => 0.0439453125,
      5 => 0.02197265625,
      6 => 0.010986328125,
      7 => 0.0054931640625,
      8 => 0.00274658203125,
      9 => 0.00137329101562,
      10 => 0.000686645507812,
      11 => 0.000343322753906,
      12 => 0.000171661376953,
      13 => 8.58306884766E-5,
      14 => 4.29153442383E-5,
      15 => 2.14576721191E-5,
      16 => 1.07288360596E-5,
    ),
    'isBaseLayer' => FALSE,
    'vector' => TRUE,
    'useBBOX' => FALSE,
    'maxExtent' => array(
      0 => '-20037508.34',
      1 => '-20037508.34',
      2 => '20037508.34',
      3 => '20037508.34',
    ),
    'resolutions' => array(
      0 => 156543.0339,
      1 => 78271.51695,
      2 => 39135.758475,
      3 => 19567.8792375,
      4 => 9783.93961875,
      5 => 4891.96980938,
      6 => 2445.98490469,
      7 => 1222.99245234,
      8 => 611.496226172,
      9 => 305.748113086,
      10 => 152.874056543,
      11 => 76.4370282715,
      12 => 38.2185141357,
      13 => 19.1092570679,
      14 => 9.55462853394,
      15 => 4.77731426697,
      16 => 2.38865713348,
      17 => 1.19432856674,
      18 => 0.597164283371,
      19 => 0.298582141697,
      20 => 0.149291070849,
      21 => 0.0746455354244,
    ),
    'base_url' => NULL,
    'transitionEffect' => 'resize',
    'weight' => 0,
  );
  $export['neighborhoods_geojson'] = $openlayers_layers;

  return $export;
}
