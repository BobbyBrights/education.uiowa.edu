<?php
/**
 * @file
 * education_center.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_center_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function education_center_node_info() {
  $items = array(
    'center' => array(
      'name' => t('Center'),
      'base' => 'node_content',
      'description' => t('A Board of Regents approved research center; institute.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
