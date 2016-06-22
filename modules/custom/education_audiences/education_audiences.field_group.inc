<?php
/**
 * @file
 * education_audiences.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function education_audiences_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience_contact|taxonomy_term|audiences|default';
  $field_group->group_name = 'group_audience_contact';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'audiences';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact info',
    'weight' => '4',
    'children' => array(
      0 => 'field_audience_contact_person',
      1 => 'field_audience_contact_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_audience_contact|taxonomy_term|audiences|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience_contact|taxonomy_term|audiences|form';
  $field_group->group_name = 'group_audience_contact';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'audiences';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_audience_fields';
  $field_group->data = array(
    'label' => 'Contact info',
    'weight' => '10',
    'children' => array(
      0 => 'field_audience_contact_person',
      1 => 'field_audience_contact_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-audience-contact field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_audience_contact|taxonomy_term|audiences|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience_fields|taxonomy_term|audiences|form';
  $field_group->group_name = 'group_audience_fields';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'audiences';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields',
    'weight' => '0',
    'children' => array(
      0 => 'group_audiences_heading',
      1 => 'group_audience_paragraphs',
      2 => 'group_audience_contact',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-audience-fields field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_audience_fields|taxonomy_term|audiences|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience_metadata|taxonomy_term|audiences|form';
  $field_group->group_name = 'group_audience_metadata';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'audiences';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'metatags',
      1 => 'path',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-audience-metadata field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_audience_metadata|taxonomy_term|audiences|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audience_paragraphs|taxonomy_term|audiences|form';
  $field_group->group_name = 'group_audience_paragraphs';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'audiences';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_audience_fields';
  $field_group->data = array(
    'label' => 'Content blocks',
    'weight' => '9',
    'children' => array(
      0 => 'field_audience_paragraphs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-audience-paragraphs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_audience_paragraphs|taxonomy_term|audiences|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audiences_heading|taxonomy_term|audiences|form';
  $field_group->group_name = 'group_audiences_heading';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'audiences';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_audience_fields';
  $field_group->data = array(
    'label' => 'Heading',
    'weight' => '8',
    'children' => array(
      0 => 'field_audience_quick_links',
      1 => 'field_header_image_tall',
      2 => 'field_header_type',
      3 => 'name',
      4 => 'description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-audiences-heading field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_audiences_heading|taxonomy_term|audiences|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact info');
  t('Content blocks');
  t('Fields');
  t('Heading');
  t('Metadata');

  return $field_groups;
}
