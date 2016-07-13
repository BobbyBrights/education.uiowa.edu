<?php
/**
 * @file
 * education_department.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function education_department_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_department_contact_1|node|department|default';
  $field_group->group_name = 'group_department_contact_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'department';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_department_contact';
  $field_group->data = array(
    'label' => 'Contact 1',
    'weight' => '8',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-department-contact-1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_department_contact_1|node|department|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_department_contact_1|node|department|form';
  $field_group->group_name = 'group_department_contact_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'department';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_department_contact';
  $field_group->data = array(
    'label' => 'Contact 1',
    'weight' => '13',
    'children' => array(
      0 => 'field_department_contact_1',
      1 => 'field_department_contact_title_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-department-contact-1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_department_contact_1|node|department|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_department_contact_2|node|department|default';
  $field_group->group_name = 'group_department_contact_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'department';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_department_contact';
  $field_group->data = array(
    'label' => 'Contact 2',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-department-contact-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_department_contact_2|node|department|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_department_contact_2|node|department|form';
  $field_group->group_name = 'group_department_contact_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'department';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_department_contact';
  $field_group->data = array(
    'label' => 'Contact 2',
    'weight' => '14',
    'children' => array(
      0 => 'field_department_contact_2',
      1 => 'field_department_contact_title_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-department-contact-2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_department_contact_2|node|department|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_department_contact_text|node|department|form';
  $field_group->group_name = 'group_department_contact_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'department';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_department_contact';
  $field_group->data = array(
    'label' => 'Contact text',
    'weight' => '16',
    'children' => array(
      0 => 'field_contact_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact text',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-department-contact-text field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_department_contact_text|node|department|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_department_contact|node|department|default';
  $field_group->group_name = 'group_department_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'department';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '1',
    'children' => array(
      0 => 'group_department_contact_1',
      1 => 'group_department_contact_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'id' => 'contact',
        'classes' => 'group-department-contact field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_department_contact|node|department|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_department_contact|node|department|form';
  $field_group->group_name = 'group_department_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'department';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '12',
    'children' => array(
      0 => 'group_department_contact_1',
      1 => 'group_department_contact_2',
      2 => 'group_department_contact_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-department-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_department_contact|node|department|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Contact 1');
  t('Contact 2');
  t('Contact text');

  return $field_groups;
}
