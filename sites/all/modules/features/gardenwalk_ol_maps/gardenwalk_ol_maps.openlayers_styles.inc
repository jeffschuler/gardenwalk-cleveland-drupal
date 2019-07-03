<?php

/**
 * @file
 * gardenwalk_ol_maps.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function gardenwalk_ol_maps_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'blue_marker';
  $openlayers_styles->title = 'Blue marker style';
  $openlayers_styles->description = 'Basic default style + blue markers';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#385EAB',
    'strokeColor' => '#214791',
    'strokeWidth' => 3,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['blue_marker'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'brown_marker';
  $openlayers_styles->title = 'Brown marker style';
  $openlayers_styles->description = 'Basic default style + brown markers';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#7E543A',
    'strokeColor' => '#633c24',
    'strokeWidth' => 3,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['brown_marker'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'green_marker';
  $openlayers_styles->title = 'Green marker style';
  $openlayers_styles->description = 'Basic default style + green markers';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#039447',
    'strokeColor' => '#007a39',
    'strokeWidth' => 3,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['green_marker'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'green_marker_bigger';
  $openlayers_styles->title = 'Green bigger marker style';
  $openlayers_styles->description = 'Basic default style + bigger green markers';
  $openlayers_styles->data = array(
    'pointRadius' => 16,
    'fillColor' => '#039447',
    'strokeColor' => '#007a39',
    'strokeWidth' => 2,
    'fillOpacity' => 0.25,
    'strokeOpacity' => 0.5,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['green_marker_bigger'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'lt_orange_marker_big';
  $openlayers_styles->title = 'Light orange big marker style';
  $openlayers_styles->description = 'Basic default style + big, light orange markers';
  $openlayers_styles->data = array(
    'pointRadius' => 7,
    'fillColor' => '#f58b69',
    'strokeColor' => '#eb6033',
    'strokeWidth' => 4,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['lt_orange_marker_big'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'orange_marker';
  $openlayers_styles->title = 'Orange marker style';
  $openlayers_styles->description = 'Basic default style + orange markers';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#F15A29',
    'strokeColor' => '#d93e0b',
    'strokeWidth' => 3,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['orange_marker'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'orange_marker_big';
  $openlayers_styles->title = 'Orange big marker style';
  $openlayers_styles->description = 'Basic default style + big orange markers';
  $openlayers_styles->data = array(
    'pointRadius' => 7,
    'fillColor' => '#F15A29',
    'strokeColor' => '#d93e0b',
    'strokeWidth' => 4,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['orange_marker_big'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'purple_marker';
  $openlayers_styles->title = 'Purple marker style';
  $openlayers_styles->description = 'Basic default style + purple markers';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#615FC1',
    'strokeColor' => '#4342a8',
    'strokeWidth' => 3,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['purple_marker'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'red_marker';
  $openlayers_styles->title = 'Red marker style';
  $openlayers_styles->description = 'Basic default style + red markers';
  $openlayers_styles->data = array(
    'pointRadius' => 5,
    'fillColor' => '#D31245',
    'strokeColor' => '#ba0032',
    'strokeWidth' => 3,
    'fillOpacity' => 0.5,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['red_marker'] = $openlayers_styles;

  return $export;
}
