<?php
/**
 * @file
 * education_fast_facts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function education_fast_facts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__fast_fact';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '47',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '45',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fast_fact';
  $strongarm->value = array();
  $export['menu_options_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fast_fact';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fast_fact';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fast_fact';
  $strongarm->value = '1';
  $export['node_preview_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fast_fact';
  $strongarm->value = 0;
  $export['node_submitted_fast_fact'] = $strongarm;

  return $export;
}
