<?php
/**
 * @file
 * education_committees.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_committees_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function education_committees_node_info() {
  $items = array(
    'committee' => array(
      'name' => t('Committee'),
      'base' => 'node_content',
      'description' => t('A collection of committees from within the College. (Ed Staff Council, FAC, Social Committee, student committees.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
