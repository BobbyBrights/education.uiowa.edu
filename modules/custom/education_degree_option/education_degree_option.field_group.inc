<?php
/**
 * @file
 * education_degree_option.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function education_degree_option_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_degree_leading_content|node|degree|form';
  $field_group->group_name = 'group_degree_leading_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'degree';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Leading content',
    'weight' => '4',
    'children' => array(
      0 => 'field_degree_leading_text',
      1 => 'field_degree_requirements',
      2 => 'field_degree_leading_buttons',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-degree-leading-content field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_degree_leading_content|node|degree|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_degree_overview|node|degree|form';
  $field_group->group_name = 'group_degree_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'degree';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '5',
    'children' => array(
      0 => 'field_degree_overview_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-degree-overview field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_degree_overview|node|degree|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Leading content');
  t('Overview');

  return $field_groups;
}
