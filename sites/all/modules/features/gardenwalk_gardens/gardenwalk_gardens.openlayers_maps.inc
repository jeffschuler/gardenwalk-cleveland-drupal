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

  $openlayers_maps = new stdClass;
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
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'gardens_openlayers_1',
        'point_zoom_level' => '5',
      ),
      'openlayers_plus_behavior_popup' => array(),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'gardens_openlayers_1' => 'gardens_openlayers_1',
    ),
    'layer_styles' => array(
      'headquarters_openlayers_1' => '0',
      'headquarters_openlayers_2' => '0',
      'headquarters_openlayers_4' => '0',
      'gardens_openlayers_2' => '0',
      'attractions_openlayers_1' => '0',
      'attractions_openlayers_2' => '0',
      'reimagining_projects_openlayers_1' => '0',
      'reimagining_projects_openlayers_2' => '0',
      'urban_farms_openlayers_1' => '0',
      'urban_farms_openlayers_2' => '0',
      'community_gardens_openlayers_1' => '0',
      'community_gardens_openlayers_2' => '0',
      'gardens_openlayers_1' => 'green_marker',
    ),
    'layer_activated' => array(
      'gardens_openlayers_1' => 'gardens_openlayers_1',
      'headquarters_openlayers_1' => 0,
      'headquarters_openlayers_2' => 0,
      'headquarters_openlayers_4' => 0,
      'gardens_openlayers_2' => 0,
      'attractions_openlayers_1' => 0,
      'attractions_openlayers_2' => 0,
      'reimagining_projects_openlayers_1' => 0,
      'reimagining_projects_openlayers_2' => 0,
      'urban_farms_openlayers_1' => 0,
      'urban_farms_openlayers_2' => 0,
      'community_gardens_openlayers_1' => 0,
      'community_gardens_openlayers_2' => 0,
    ),
    'layer_switcher' => array(
      'headquarters_openlayers_1' => 0,
      'headquarters_openlayers_2' => 0,
      'headquarters_openlayers_4' => 0,
      'gardens_openlayers_1' => 0,
      'gardens_openlayers_2' => 0,
      'attractions_openlayers_1' => 0,
      'attractions_openlayers_2' => 0,
      'reimagining_projects_openlayers_1' => 0,
      'reimagining_projects_openlayers_2' => 0,
      'urban_farms_openlayers_1' => 0,
      'urban_farms_openlayers_2' => 0,
      'community_gardens_openlayers_1' => 0,
      'community_gardens_openlayers_2' => 0,
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
