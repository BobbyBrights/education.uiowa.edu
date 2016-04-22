<?php
/**
 * @file
 * education_degree_option.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function education_degree_option_taxonomy_default_vocabularies() {
  return array(
    'degree_levels' => array(
      'name' => 'Degree levels',
      'machine_name' => 'degree_levels',
      'description' => 'Variety of types (levels) of degrees, certifications, etc. that one can earn through the college.',
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
