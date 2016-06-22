<?php
/**
 * @file
 * education_common.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_common_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function education_common_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function education_common_filter_default_formats_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][0] = 'btn-primary'; /* WAS: 'plain-button' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][2] = 'btn-long'; /* WAS: 'small' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][4] = 'large-text'; /* WAS: '' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][6] = 'uppercase'; /* WAS: '' */
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
            Large caps = p.uppercase
            Button = a.btn-primary
            Long button = a.btn-long'; /* WAS: '' */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function education_common_image_default_styles() {
  $styles = array();

  // Exported image style: tall_header_large.
  $styles['tall_header_large'] = array(
    'label' => 'Tall Header - Large',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1200,
          'height' => 700,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'tall_header_large',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: tall_header_medium.
  $styles['tall_header_medium'] = array(
    'label' => 'Tall Header - Medium',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'tall_header_large',
          'apply_all_effects' => 0,
        ),
        'weight' => 0,
      ),
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 992,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: tall_header_original.
  $styles['tall_header_original'] = array(
    'label' => 'Tall Header - Original',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2000,
          'height' => 700,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tall_header_small.
  $styles['tall_header_small'] = array(
    'label' => 'Tall Header - Small',
    'effects' => array(
      5 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'tall_header_large',
          'apply_all_effects' => 0,
        ),
        'weight' => 0,
      ),
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 768,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
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
