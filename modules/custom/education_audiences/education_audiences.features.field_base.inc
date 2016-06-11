<?php
/**
 * @file
 * education_audiences.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function education_audiences_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_audience_paragraphs'.
  $field_bases['field_audience_paragraphs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_audience_paragraphs',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  return $field_bases;
}
