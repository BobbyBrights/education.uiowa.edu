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
 * Implements hook_file_default_displays_alter().
 */
function education_common_file_default_displays_alter(&$data) {
  if (isset($data['image__default__file_field_file_default'])) {
    $data['image__default__file_field_file_default']->status = FALSE; /* WAS: TRUE */
    $data['image__default__file_field_file_default']->weight = 0; /* WAS: 50 */
  }
}

/**
 * Implements hook_file_default_types_alter().
 */
function education_common_file_default_types_alter(&$data) {
  if (isset($data['document'])) {
    $data['document']->disabled = FALSE; /* WAS: '' */
    $data['document']->mimetypes[0] = 'text/csv'; /* WAS: 'text/plain' */
    $data['document']->mimetypes[1] = 'text/plain'; /* WAS: 'application/msword' */
    $data['document']->mimetypes[10] = 'application/vnd.openxmlformats-officedocument.presentationml.presentation'; /* WAS: 'application/vnd.openxmlformats-officedocument.wordprocessingml.document' */
    $data['document']->mimetypes[11] = 'application/vnd.openxmlformats-officedocument.presentationml.template'; /* WAS: '' */
    $data['document']->mimetypes[12] = 'application/vnd.openxmlformats-officedocument.wordprocessingml.document'; /* WAS: '' */
    $data['document']->mimetypes[2] = 'application/msword'; /* WAS: 'application/vnd.ms-excel' */
    $data['document']->mimetypes[3] = 'application/vnd.ms-excel'; /* WAS: 'application/pdf' */
    $data['document']->mimetypes[4] = 'application/pdf'; /* WAS: 'application/vnd.ms-powerpoint' */
    $data['document']->mimetypes[5] = 'application/vnd.ms-powerpoint'; /* WAS: 'application/vnd.oasis.opendocument.text' */
    $data['document']->mimetypes[6] = 'application/vnd.oasis.opendocument.text'; /* WAS: 'application/vnd.oasis.opendocument.spreadsheet' */
    $data['document']->mimetypes[7] = 'application/vnd.oasis.opendocument.spreadsheet'; /* WAS: 'application/vnd.oasis.opendocument.presentation' */
    $data['document']->mimetypes[8] = 'application/vnd.oasis.opendocument.presentation'; /* WAS: 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet' */
    $data['document']->mimetypes[9] = 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet'; /* WAS: 'application/vnd.openxmlformats-officedocument.presentationml.presentation' */
  }
  if (isset($data['image'])) {
    $data['image']->disabled = FALSE; /* WAS: '' */
    $data['image']->mimetypes[1] = 'application/postscript'; /* WAS: '' */
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function education_common_filter_default_formats_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][0] = 'btn-primary'; /* WAS: 'plain-button' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][2] = 'btn-long'; /* WAS: 'small' */
    $data['filtered_html']['filters']['wysiwyg']['settings']['rule_valid_classes'][4] = 'large-text'; /* WAS: '' */
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function education_common_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['settings']['advanced__active_tab'] = 'edit-basic'; /* WAS: 'edit-output' */
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
          'height' => 800,
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
          'height' => 800,
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
