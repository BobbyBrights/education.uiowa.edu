<?php
/**
 * @file
 * education_common.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_common_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function education_common_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['settings']['buttons']['default']['Maximize'] = 1; /* WAS: '' */
    $data['filtered_html']['settings']['buttons']['default']['Styles'] = 1; /* WAS: '' */
    $data['filtered_html']['settings']['stylesSet'] = 'Large text = p.large-text
        Button = a.btn-primary
        Long button = a.btn-long'; /* WAS: '' */
  }
}

/**
 * Implements hook_node_info().
 */
function education_common_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
