<?php
/**
 * @file
 * education_fast_facts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function education_fast_facts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-fast_fact-field_fastfact_icon'.
  $field_instances['node-fast_fact-field_fastfact_icon'] = array(
    'bundle' => 'fast_fact',
    'deleted' => 0,
    'description' => 'Icon image should be a PNG file with a transparent background. Alt text must briefly describe image and fully state text.
',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fastfact_icon',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/fact_facts',
      'file_extensions' => 'png gif',
      'max_filesize' => '',
      'max_resolution' => '722x722',
      'min_resolution' => '722x482',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'sharestream' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_plus--media_browser_my_files' => 'media_browser_plus--media_browser_my_files',
          'media_browser_plus--media_browser_thumbnails' => 'media_browser_plus--media_browser_thumbnails',
          'media_internet' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Icon image should be a PNG file with a transparent background. Alt text must briefly describe image and fully state text.
');
  t('Image');

  return $field_instances;
}
