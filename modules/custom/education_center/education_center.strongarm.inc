<?php
/**
 * @file
 * education_center.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function education_center_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__center';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '50',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '49',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__center'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_center';
  $strongarm->value = array();
  $export['menu_options_center'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_center';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_center'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_center';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_center'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_center';
  $strongarm->value = '1';
  $export['node_preview_center'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_center';
  $strongarm->value = 0;
  $export['node_submitted_center'] = $strongarm;

  return $export;
}
