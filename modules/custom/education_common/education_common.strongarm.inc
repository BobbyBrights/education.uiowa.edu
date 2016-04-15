<?php
/**
 * @file
 * education_common.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function education_common_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_revision_delete_cron';
  $strongarm->value = '50';
  $export['node_revision_delete_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_revision_delete_time';
  $strongarm->value = 'every_time';
  $export['node_revision_delete_time'] = $strongarm;

  return $export;
}
