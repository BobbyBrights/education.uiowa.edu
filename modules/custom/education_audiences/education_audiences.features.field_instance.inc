<?php
/**
 * @file
 * education_audiences.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function education_audiences_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-audiences-field_audience_contact_person'.
  $field_instances['taxonomy_term-audiences-field_audience_contact_person'] = array(
    'bundle' => 'audiences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Reference up to 2 people (Person content type) who are points of contact.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'referenced',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_audience_contact_person',
    'label' => 'People',
    'required' => 0,
    'settings' => array(
      'jquery_ui_multiselect' => array(
        'dividerLocation' => 0.5,
        'doubleClickable' => 1,
        'dragToAdd' => 1,
        'enabled' => 0,
        'height' => 0,
        'includeAddAll' => 1,
        'includeRemoveAll' => 1,
        'searchable' => 1,
        'selectedContainerOnLeft' => 1,
        'sortable' => 1,
        'width' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-audiences-field_audience_contact_text'.
  $field_instances['taxonomy_term-audiences-field_audience_contact_text'] = array(
    'bundle' => 'audiences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A free-form text area for contact information.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_audience_contact_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-audiences-field_audience_paragraphs'.
  $field_instances['taxonomy_term-audiences-field_audience_paragraphs'] = array(
    'bundle' => 'audiences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_audience_paragraphs',
    'label' => 'Content blocks',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'announcements' => 'announcements',
        'callout' => 'callout',
        'events' => 'events',
        'fast_fact' => 'fast_fact',
        'slogan' => 'slogan',
        'social' => 'social',
        'text' => 'text',
      ),
      'bundle_weights' => array(
        'announcements' => 7,
        'callout' => 2,
        'events' => 11,
        'fast_fact' => 5,
        'slogan' => -10,
        'social' => -12,
        'text' => -4,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Content Block',
      'title_multiple' => 'Content Blocks',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-audiences-field_audience_quick_links'.
  $field_instances['taxonomy_term-audiences-field_audience_quick_links'] = array(
    'bundle' => 'audiences',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Create links adding style <em>Long button</em>.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_audience_quick_links',
    'label' => 'Leading buttons',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A free-form text area for contact information.');
  t('Content blocks');
  t('Create links adding style <em>Long button</em>.');
  t('Leading buttons');
  t('People');
  t('Reference up to 2 people (Person content type) who are points of contact.');
  t('Text');

  return $field_instances;
}
