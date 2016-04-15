<?php
/**
 * @file
 * education_scholarships.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_scholarships_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function education_scholarships_node_info() {
  $items = array(
    'scholarship' => array(
      'name' => t('Scholarship'),
      'base' => 'node_content',
      'description' => t('A collection of the scholarships available from the College, and their recipients.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
