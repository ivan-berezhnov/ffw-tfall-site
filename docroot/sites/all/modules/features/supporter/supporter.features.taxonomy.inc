<?php
/**
 * @file
 * supporter.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function supporter_taxonomy_default_vocabularies() {
  return array(
    'supporter_levels' => array(
      'name' => 'Supporter Levels',
      'machine_name' => 'supporter_levels',
      'description' => 'Taxonomy for different levels of supporters.',
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
