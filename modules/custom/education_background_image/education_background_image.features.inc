<?php
/**
 * @file
 * education_background_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_background_image_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function education_background_image_node_info() {
  $items = array(
    'background_image' => array(
      'name' => t('Background image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
