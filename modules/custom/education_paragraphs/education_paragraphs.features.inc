<?php
/**
 * @file
 * education_paragraphs.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function education_paragraphs_paragraphs_info() {
  $items = array(
    'callout' => array(
      'name' => 'Callout',
      'bundle' => 'callout',
      'locked' => '1',
    ),
    'fast_fact' => array(
      'name' => 'Fast Fact',
      'bundle' => 'fast_fact',
      'locked' => '1',
    ),
    'text' => array(
      'name' => 'Text',
      'bundle' => 'text',
      'locked' => '1',
    ),
  );
  return $items;
}
