<?php
/**
 * @file
 * education_common.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function education_common_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Tall header';
  $picture_mapping->machine_name = 'tall_header';
  $picture_mapping->breakpoint_group = 'education_radix';
  $picture_mapping->mapping = array(
    'breakpoints.theme.education_radix.xs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tall_header_small',
      ),
    ),
    'breakpoints.theme.education_radix.sm' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tall_header_medium',
      ),
    ),
    'breakpoints.theme.education_radix.md' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tall_header_large',
      ),
    ),
    'breakpoints.theme.education_radix.lg' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tall_header_original',
      ),
    ),
  );
  $export['tall_header'] = $picture_mapping;

  return $export;
}
