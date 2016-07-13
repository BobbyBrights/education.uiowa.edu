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
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
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
  $strongarm->value = '0';
  $export['node_preview_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_revision_delete_number_fast_fact';
  $strongarm->value = '50';
  $export['node_revision_delete_number_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fast_fact';
  $strongarm->value = 0;
  $export['node_submitted_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_fast_fact_pattern';
  $strongarm->value = '';
  $export['pathauto_node_fast_fact_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_fast_fact';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_fast_fact';
  $strongarm->value = 'rh_node';
  $export['rh_module_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_fast_fact';
  $strongarm->value = '3';
  $export['rh_node_action_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_fast_fact';
  $strongarm->value = 0;
  $export['rh_node_override_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_fast_fact';
  $strongarm->value = '<front>';
  $export['rh_node_redirect_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_fast_fact';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_fast_fact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_fast_fact';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_fast_fact'] = $strongarm;

  return $export;
}
