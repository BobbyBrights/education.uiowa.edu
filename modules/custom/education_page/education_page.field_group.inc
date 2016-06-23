<?php
/**
 * @file
 * education_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function education_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_fields|node|page|form';
  $field_group->group_name = 'group_page_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'group_page_heading',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-page-fields field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_page_fields|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_heading|node|page|form';
  $field_group->group_name = 'group_page_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page_fields';
  $field_group->data = array(
    'label' => 'Heading',
    'weight' => '5',
    'children' => array(
      0 => 'field_header_type',
      1 => 'field_header_image_tall',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page-heading field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_page_heading|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Fields');
  t('Heading');

  return $field_groups;
}
