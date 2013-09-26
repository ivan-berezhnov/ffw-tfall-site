<?php
/**
 * @file
 * network_learning.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function network_learning_taxonomy_default_vocabularies() {
  return array(
    'network_learning' => array(
      'name' => 'Network Learning',
      'machine_name' => 'network_learning',
      'description' => 'Tags for Network Learning content type.',
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
