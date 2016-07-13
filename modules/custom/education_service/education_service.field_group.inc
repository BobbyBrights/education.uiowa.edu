<?php
/**
 * @file
 * education_service.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function education_service_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_contact_1|node|service|form';
  $field_group->group_name = 'group_service_contact_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_service_contact';
  $field_group->data = array(
    'label' => 'Contact 1',
    'weight' => '17',
    'children' => array(
      0 => 'field_service_contact_person_1',
      1 => 'field_service_contact_title_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-service-contact-1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_service_contact_1|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_contact_2|node|service|form';
  $field_group->group_name = 'group_service_contact_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_service_contact';
  $field_group->data = array(
    'label' => 'Contact 2',
    'weight' => '18',
    'children' => array(
      0 => 'field_service_contact_person_2',
      1 => 'field_service_contact_title_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-service-contact-2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_service_contact_2|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_contact_text|node|service|form';
  $field_group->group_name = 'group_service_contact_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_service_contact';
  $field_group->data = array(
    'label' => 'Contact text',
    'weight' => '20',
    'children' => array(
      0 => 'field_service_contact_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact text',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-service-contact-text field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_service_contact_text|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_service_contact|node|service|form';
  $field_group->group_name = 'group_service_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact info',
    'weight' => '16',
    'children' => array(
      0 => 'group_service_contact_1',
      1 => 'group_service_contact_2',
      2 => 'group_service_contact_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_service_contact|node|service|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact 1');
  t('Contact 2');
  t('Contact info');
  t('Contact text');

  return $field_groups;
}
