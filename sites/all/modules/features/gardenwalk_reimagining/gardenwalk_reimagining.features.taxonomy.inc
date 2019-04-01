<?php

/**
 * @file
 * gardenwalk_reimagining.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gardenwalk_reimagining_taxonomy_default_vocabularies() {
  return array(
    'neighborhood' => array(
      'name' => 'Neighborhood',
      'machine_name' => 'neighborhood',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
