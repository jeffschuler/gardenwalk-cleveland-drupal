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
    'url_jsonp' => 'http://a.tiles.mapbox.com/v3/websubstrate.map-22f6djev.jsonp',
    'tilejson' => '{"attribution":"<a href=\'http://mapbox.com/about/maps\' target=\'_blank\'>Terms & Feedback</a>","bounds":[-180,-85,180,85],"center":[-81.682,41.482,13],"description":"","id":"websubstrate.map-22f6djev","maxzoom":17,"minzoom":0,"name":"GardenWalk Cleveland","private":true,"scheme":"xyz","tilejson":"2.0.0","tiles":["http://a.tiles.mapbox.com/v3/websubstrate.map-22f6djev/{z}/{x}/{y}.png","http://b.tiles.mapbox.com/v3/websubstrate.map-22f6djev/{z}/{x}/{y}.png","http://c.tiles.mapbox.com/v3/websubstrate.map-22f6djev/{z}/{x}/{y}.png","http://d.tiles.mapbox.com/v3/websubstrate.map-22f6djev/{z}/{x}/{y}.png"],"webpage":"http://tiles.mapbox.com/websubstrate/map/map-22f6djev"}',
    'layername' => 'GardenWalk Mapbox',
    'layer_type' => 'openlayers_layer_type_mapbox',
    'baselayer' => 1,
    'projection' => array(
      0 => '900913',
    ),
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
  );
  $export['neighborhoods_geojson'] = $openlayers_layers;

  return $export;
}
