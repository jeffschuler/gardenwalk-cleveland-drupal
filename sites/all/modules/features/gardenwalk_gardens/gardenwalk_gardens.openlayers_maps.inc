<?php
/**
 * @file
 * gardenwalk_gardens.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function gardenwalk_gardens_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'gardens';
  $openlayers_maps->title = 'Gardens Map';
  $openlayers_maps->description = 'Gardens Map';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => 'sites/all/libraries/openlayers_theme_dark/dark/',
    'css_path' => 'sites/all/libraries/OpenLayers-2.10/theme/default/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-81.679918213413, 41.495896655452',
        'zoom' => '12',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_plus_behavior_popup' => array(),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'gardenwalk_mapbox' => 0,
          'gardens_openlayers_1' => 0,
        ),
        'point_zoom_level' => '5',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'gardens_openlayers_1' => 'gardens_openlayers_1',
    ),
    'layer_weight' => array(
      'community_gardens_openlayers_1' => '0',
      'attractions_openlayers_2' => '0',
      'attractions_openlayers_1' => '0',
      'neighborhoods_page_2' => '0',
      'community_gardens_openlayers_2' => '0',
      'community_gardens_openlayers_3' => '0',
      'gardens_openlayers_1' => '0',
      'reimagining_projects_openlayers_3' => '0',
      'reimagining_projects_openlayers_2' => '0',
      'reimagining_projects_openlayers_1' => '0',
      'neighborhoods_page_1' => '0',
      'guide_geojson_page_1' => '0',
      'headquarters_openlayers_2' => '0',
      'headquarters_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
      'headquarters_openlayers_4' => '0',
      'urban_farms_openlayers_1' => '0',
      'gardens_openlayers_2' => '0',
      'urban_farms_openlayers_3' => '0',
      'urban_farms_openlayers_2' => '0',
      'neighborhoods_geojson' => '0',
    ),
    'layer_styles' => array(
      'neighborhoods_geojson' => '0',
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'headquarters_openlayers_1' => '0',
      'headquarters_openlayers_2' => '0',
      'headquarters_openlayers_4' => '0',
      'urban_farms_openlayers_1' => '0',
      'urban_farms_openlayers_2' => '0',
      'urban_farms_openlayers_3' => '0',
      'gardens_openlayers_2' => '0',
      'guide_geojson_page_1' => '0',
      'neighborhoods_page_1' => '0',
      'neighborhoods_page_2' => '0',
      'attractions_openlayers_1' => '0',
      'attractions_openlayers_2' => '0',
      'community_gardens_openlayers_1' => '0',
      'community_gardens_openlayers_2' => '0',
      'community_gardens_openlayers_3' => '0',
      'reimagining_projects_openlayers_1' => '0',
      'reimagining_projects_openlayers_2' => '0',
      'reimagining_projects_openlayers_3' => '0',
      'gardens_openlayers_1' => 'green_marker',
    ),
    'layer_styles_select' => array(
      'neighborhoods_geojson' => '0',
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'headquarters_openlayers_1' => '0',
      'headquarters_openlayers_2' => '0',
      'headquarters_openlayers_4' => '0',
      'urban_farms_openlayers_1' => '0',
      'urban_farms_openlayers_2' => '0',
      'urban_farms_openlayers_3' => '0',
      'gardens_openlayers_2' => '0',
      'guide_geojson_page_1' => '0',
      'neighborhoods_page_1' => '0',
      'neighborhoods_page_2' => '0',
      'attractions_openlayers_1' => '0',
      'attractions_openlayers_2' => '0',
      'community_gardens_openlayers_1' => '0',
      'community_gardens_openlayers_2' => '0',
      'community_gardens_openlayers_3' => '0',
      'reimagining_projects_openlayers_1' => '0',
      'reimagining_projects_openlayers_2' => '0',
      'reimagining_projects_openlayers_3' => '0',
      'gardens_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'gardens_openlayers_1' => 'gardens_openlayers_1',
      'neighborhoods_geojson' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'headquarters_openlayers_1' => 0,
      'headquarters_openlayers_2' => 0,
      'headquarters_openlayers_4' => 0,
      'urban_farms_openlayers_1' => 0,
      'urban_farms_openlayers_2' => 0,
      'urban_farms_openlayers_3' => 0,
      'gardens_openlayers_2' => 0,
      'guide_geojson_page_1' => 0,
      'neighborhoods_page_1' => 0,
      'neighborhoods_page_2' => 0,
      'attractions_openlayers_1' => 0,
      'attractions_openlayers_2' => 0,
      'community_gardens_openlayers_1' => 0,
      'community_gardens_openlayers_2' => 0,
      'community_gardens_openlayers_3' => 0,
      'reimagining_projects_openlayers_1' => 0,
      'reimagining_projects_openlayers_2' => 0,
      'reimagining_projects_openlayers_3' => 0,
    ),
    'layer_switcher' => array(
      'gardens_openlayers_1' => 0,
      'neighborhoods_geojson' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'headquarters_openlayers_1' => 0,
      'headquarters_openlayers_2' => 0,
      'headquarters_openlayers_4' => 0,
      'urban_farms_openlayers_1' => 0,
      'urban_farms_openlayers_2' => 0,
      'urban_farms_openlayers_3' => 0,
      'gardens_openlayers_2' => 0,
      'guide_geojson_page_1' => 0,
      'neighborhoods_page_1' => 0,
      'neighborhoods_page_2' => 0,
      'attractions_openlayers_1' => 0,
      'attractions_openlayers_2' => 0,
      'community_gardens_openlayers_1' => 0,
      'community_gardens_openlayers_2' => 0,
      'community_gardens_openlayers_3' => 0,
      'reimagining_projects_openlayers_1' => 0,
      'reimagining_projects_openlayers_2' => 0,
      'reimagining_projects_openlayers_3' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['gardens'] = $openlayers_maps;

  return $export;
}
