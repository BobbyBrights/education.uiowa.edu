<?php
/**
 * @file
 * education_center.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function education_center_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_center_contact_1|node|center|form';
  $field_group->group_name = 'group_center_contact_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'center';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_center_contact';
  $field_group->data = array(
    'label' => 'Contact 1',
    'weight' => '20',
    'children' => array(
      0 => 'field_center_contact_person_1',
      1 => 'field_center_contact_title_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-center-contact-1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_center_contact_1|node|center|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_center_contact_2|node|center|form';
  $field_group->group_name = 'group_center_contact_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'center';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_center_contact';
  $field_group->data = array(
    'label' => 'Contact 2',
    'weight' => '21',
    'children' => array(
      0 => 'field_center_contact_person_2',
      1 => 'field_center_contact_title_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-center-contact-2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_center_contact_2|node|center|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_center_contact_text|node|center|form';
  $field_group->group_name = 'group_center_contact_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'center';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_center_contact';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '22',
    'children' => array(
      0 => 'field_center_contact_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-center-contact-text field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_center_contact_text|node|center|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_center_contact|node|center|form';
  $field_group->group_name = 'group_center_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'center';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '16',
    'children' => array(
      0 => 'group_center_contact_1',
      1 => 'group_center_contact_2',
      2 => 'group_center_contact_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-center-contact field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_center_contact|node|center|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Contact 1');
  t('Contact 2');
  t('Text');

  return $field_groups;
}
