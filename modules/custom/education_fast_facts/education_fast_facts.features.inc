<?php
/**
 * @file
 * education_fast_facts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_fast_facts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function education_fast_facts_node_info() {
  $items = array(
    'fast_fact' => array(
      'name' => t('Fast fact'),
      'base' => 'node_content',
      'description' => t('Impactful nugget of information. statement and/or image, not sentences.'),
      'has_title' => '1',
      'title_label' => t('Administrative title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
