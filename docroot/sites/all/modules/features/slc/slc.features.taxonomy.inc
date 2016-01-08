<?php
/**
 * @file
 * slc.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function slc_taxonomy_default_vocabularies() {
  return array(
    'partners' => array(
      'name' => 'Partners',
      'machine_name' => 'partners',
      'description' => 'Vocabulary created automatically by Taxonomy csv import/export module',
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
