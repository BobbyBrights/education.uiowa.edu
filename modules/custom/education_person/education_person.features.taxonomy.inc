<?php
/**
 * @file
 * education_person.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function education_person_taxonomy_default_vocabularies() {
  return array(
    'expertise' => array(
      'name' => 'Areas of expertise',
      'machine_name' => 'expertise',
      'description' => 'Use tags to group people with same expertise (research and teaching) into categories.',
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
    'ranks' => array(
      'name' => 'Person ranks',
      'machine_name' => 'ranks',
      'description' => 'Use to categorize people by rank (staff, professor, instructor, etc.)',
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
