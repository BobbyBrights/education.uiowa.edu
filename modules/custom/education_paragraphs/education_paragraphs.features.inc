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
  );
  return $items;
}
