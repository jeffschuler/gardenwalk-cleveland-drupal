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
  $openlayers_layers->name = 'gardenwalk_mapbox';
  $openlayers_layers->title = 'GardenWalk Mapbox';
  $openlayers_layers->description = 'GardenWalk Mapbox';
  $openlayers_layers->data = array(
    'url' => array(
      0 => 'http://a.tiles.mapbox.com/v3/websubstrate.map-22f6djev/${z}/${x}/${y}.png',
    ),
    'serverResolutions' => array(
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
    ),
    'zoomOffset' => 0,
    'wrapDateLine' => 0,
    'projection' => array(
      0 => 'EPSG:3857',
    ),
    'isBaseLayer' => 1,
    'layer_type' => 'openlayers_layer_type_xyz',
    'layer_handler' => 'xyz',
    'sphericalMercator' => TRUE,
    'maxExtent' => array(
      0 => -20037508.34,
      1 => -20037508.34,
      2 => 20037508.34,
      3 => 20037508.34,
    ),
    'base_url' => NULL,
    'transitionEffect' => 'resize',
    'weight' => 0,
  );
  $export['gardenwalk_mapbox'] = $openlayers_layers;

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
      9 => 0.001373291015625,
      10 => 0.0006866455078125,
      11 => 0.00034332275390625,
      12 => 0.00017166137695312,
      13 => 8.5830688476562E-5,
      14 => 4.2915344238281E-5,
      15 => 2.1457672119141E-5,
      16 => 1.072883605957E-5,
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
      5 => 4891.969809375,
      6 => 2445.9849046875,
      7 => 1222.9924523438,
      8 => 611.49622617188,
      9 => 305.74811308594,
      10 => 152.87405654297,
      11 => 76.437028271484,
      12 => 38.218514135742,
      13 => 19.109257067871,
      14 => 9.5546285339355,
      15 => 4.7773142669678,
      16 => 2.3886571334839,
      17 => 1.1943285667419,
      18 => 0.59716428337097,
      19 => 0.29858214169741,
      20 => 0.1492910708487,
      21 => 0.074645535424352,
    ),
    'base_url' => NULL,
    'transitionEffect' => 'resize',
    'weight' => 0,
  );
  $export['neighborhoods_geojson'] = $openlayers_layers;

  return $export;
}
