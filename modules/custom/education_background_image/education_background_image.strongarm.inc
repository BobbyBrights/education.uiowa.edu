<?php
/**
 * @file
 * education_background_image.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function education_background_image_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_background_image';
  $strongarm->value = 'edit-diff';
  $export['additional_settings__active_tab_background_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_background_image';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_background_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_background_image';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_background_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_background_image';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_background_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_revision_delete_number_background_image';
  $strongarm->value = '5';
  $export['node_revision_delete_number_background_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_revision_delete_track_background_image';
  $strongarm->value = 1;
  $export['node_revision_delete_track_background_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_background_image';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_background_image'] = $strongarm;

  return $export;
}
