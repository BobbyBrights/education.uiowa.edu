<?php
/**
 * @file
 * education_degree_option.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_degree_option_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function education_degree_option_node_info() {
  $items = array(
    'degree' => array(
      'name' => t('Degree Option'),
      'base' => 'node_content',
      'description' => t('Collection of the degrees, certificates, endorsements, and licensures students of the College of Education can obtain. Each degree falls under an academic program.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
