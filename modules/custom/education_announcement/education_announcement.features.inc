<?php
/**
 * @file
 * education_announcement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_announcement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function education_announcement_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => t('Alert, statement, or short declaration. Will be shown in its entirety. Use Article if you want to provide more information.'),
      'has_title' => '1',
      'title_label' => t('Administrative title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
