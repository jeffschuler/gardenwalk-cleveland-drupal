<?php

/**
 * Bulk geocode locations.
 *
 * To JIT geocode all gardens with missing lat/lon.
 * JIT needs to be turned on.
 * See https://www.drupal.org/node/1041632.
 *
 * Quick and dirty. Need to set source to 4 (LOCATION_LATLON_JIT_GEOCODING)
 * beforehand, like:
 *   UPDATE location SET source=4 WHERE latitude=0 OR longitude=0;
 *
 * Run this like:
 * $ drush scr bulk_geocode_locations.php
 */


// Get all locations that don't have lat/lon
$query = db_query("SELECT lid FROM {location} WHERE latitude=0 OR longitude=0;");
$records = $query->fetchAll();

foreach ($records as $record) {
  print($record->lid . "\n");
  // If location source is set to 4, location_load_location() will JIT geocode
  location_load_location($record->lid);
}
