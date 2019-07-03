<?php

/**
 * @file
 * gardenwalk_ol_maps.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gardenwalk_ol_maps_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => "1");
  }
}
