<?php
/**
 * @file
 * education_academic_program.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_academic_program_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function education_academic_program_node_info() {
  $items = array(
    'program' => array(
      'name' => t('Academic program'),
      'base' => 'node_content',
      'description' => t('Academic programs are groups of degree options, under departments. Programs often offer one degree option at a masters and a doctoral level, but may offer any combination of degrees, certificates, and endorsements.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
