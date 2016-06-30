<?php
/**
 * @file
 * education_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function education_paragraphs_paragraphs_info() {
  $items = array(
    'announcements' => array(
      'name' => 'Announcements',
      'bundle' => 'announcements',
      'locked' => '1',
    ),
    'callout' => array(
      'name' => 'Callout',
      'bundle' => 'callout',
      'locked' => '1',
    ),
    'events' => array(
      'name' => 'Events',
      'bundle' => 'events',
      'locked' => '1',
    ),
    'fast_fact' => array(
      'name' => 'Fast Facts',
      'bundle' => 'fast_fact',
      'locked' => '1',
    ),
    'news' => array(
      'name' => 'News',
      'bundle' => 'news',
      'locked' => '1',
    ),
    'slogan' => array(
      'name' => 'Tagline',
      'bundle' => 'slogan',
      'locked' => '1',
    ),
    'social' => array(
      'name' => 'Social media',
      'bundle' => 'social',
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
