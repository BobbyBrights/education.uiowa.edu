<?php
/**
 * @file
 * education_person_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function education_person_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'education_person_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Person';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: APR link */
  $handler->display->display_options['fields']['field_person_apr_link']['id'] = 'field_person_apr_link';
  $handler->display->display_options['fields']['field_person_apr_link']['table'] = 'field_data_field_person_apr_link';
  $handler->display->display_options['fields']['field_person_apr_link']['field'] = 'field_person_apr_link';
  $handler->display->display_options['fields']['field_person_apr_link']['label'] = '';
  $handler->display->display_options['fields']['field_person_apr_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_apr_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_apr_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_person_apr_link']['type'] = 'link_plain';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_person_first_name']['id'] = 'field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['table'] = 'field_data_field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['field'] = 'field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_person_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_first_name']['type'] = 'text_plain';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_person_last_name']['id'] = 'field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['field'] = 'field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_person_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_last_name']['alter']['text'] = '[field_person_last_name], [field_person_first_name]';
  $handler->display->display_options['fields']['field_person_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_person_last_name']['alter']['path'] = '[field_person_apr_link]';
  $handler->display->display_options['fields']['field_person_last_name']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_person_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_last_name']['type'] = 'text_plain';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_person_email']['id'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['table'] = 'field_data_field_person_email';
  $handler->display->display_options['fields']['field_person_email']['field'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_person_email']['element_label_colon'] = FALSE;
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_person_phone_number']['id'] = 'field_person_phone_number';
  $handler->display->display_options['fields']['field_person_phone_number']['table'] = 'field_data_field_person_phone_number';
  $handler->display->display_options['fields']['field_person_phone_number']['field'] = 'field_person_phone_number';
  $handler->display->display_options['fields']['field_person_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_person_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_phone_number']['settings'] = array(
    'title' => '',
  );
  /* Sort criterion: Content: Last name (field_person_last_name) */
  $handler->display->display_options['sorts']['field_person_last_name_value']['id'] = 'field_person_last_name_value';
  $handler->display->display_options['sorts']['field_person_last_name_value']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['sorts']['field_person_last_name_value']['field'] = 'field_person_last_name_value';
  /* Sort criterion: Content: First name (field_person_first_name) */
  $handler->display->display_options['sorts']['field_person_first_name_value']['id'] = 'field_person_first_name_value';
  $handler->display->display_options['sorts']['field_person_first_name_value']['table'] = 'field_data_field_person_first_name';
  $handler->display->display_options['sorts']['field_person_first_name_value']['field'] = 'field_person_first_name_value';
  /* Contextual filter: Content: Last name (field_person_last_name) */
  $handler->display->display_options['arguments']['field_person_last_name_value']['id'] = 'field_person_last_name_value';
  $handler->display->display_options['arguments']['field_person_last_name_value']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['arguments']['field_person_last_name_value']['field'] = 'field_person_last_name_value';
  $handler->display->display_options['arguments']['field_person_last_name_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_person_last_name_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_person_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_person_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_person_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_person_last_name_value']['path_case'] = 'upper';
  $handler->display->display_options['arguments']['field_person_last_name_value']['transform_dash'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );

  /* Display: Faculty Staff Directory */
  $handler = $view->new_display('panel_pane', 'Faculty Staff Directory', 'panel_pane_faculty_staff_view');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: APR link */
  $handler->display->display_options['fields']['field_person_apr_link']['id'] = 'field_person_apr_link';
  $handler->display->display_options['fields']['field_person_apr_link']['table'] = 'field_data_field_person_apr_link';
  $handler->display->display_options['fields']['field_person_apr_link']['field'] = 'field_person_apr_link';
  $handler->display->display_options['fields']['field_person_apr_link']['label'] = '';
  $handler->display->display_options['fields']['field_person_apr_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_apr_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_apr_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_person_apr_link']['type'] = 'link_plain';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_person_first_name']['id'] = 'field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['table'] = 'field_data_field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['field'] = 'field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_person_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_first_name']['type'] = 'text_plain';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_person_last_name']['id'] = 'field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['field'] = 'field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_person_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_last_name']['alter']['text'] = '[field_person_last_name], [field_person_first_name]';
  $handler->display->display_options['fields']['field_person_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_person_last_name']['alter']['path'] = '[field_person_apr_link]';
  $handler->display->display_options['fields']['field_person_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_person_email']['id'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['table'] = 'field_data_field_person_email';
  $handler->display->display_options['fields']['field_person_email']['field'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_email']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_person_email']['hide_alter_empty'] = FALSE;
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_person_phone_number']['id'] = 'field_person_phone_number';
  $handler->display->display_options['fields']['field_person_phone_number']['table'] = 'field_data_field_person_phone_number';
  $handler->display->display_options['fields']['field_person_phone_number']['field'] = 'field_person_phone_number';
  $handler->display->display_options['fields']['field_person_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_person_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_phone_number']['empty'] = '&nbsp;';
  $handler->display->display_options['fields']['field_person_phone_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_person_phone_number']['settings'] = array(
    'title' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last name (field_person_last_name) */
  $handler->display->display_options['arguments']['field_person_last_name_value']['id'] = 'field_person_last_name_value';
  $handler->display->display_options['arguments']['field_person_last_name_value']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['arguments']['field_person_last_name_value']['field'] = 'field_person_last_name_value';
  $handler->display->display_options['arguments']['field_person_last_name_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_person_last_name_value']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_person_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_person_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_person_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_person_last_name_value']['path_case'] = 'upper';
  $handler->display->display_options['arguments']['field_person_last_name_value']['transform_dash'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'field_person_last_name_value' => array(
      'type' => 'panel',
      'context' => 'token.current-page:url',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Last name (field_person_last_name)',
    ),
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachement_faculty_staff_view');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_person_first_name']['id'] = 'field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['table'] = 'field_data_field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['field'] = 'field_person_first_name';
  $handler->display->display_options['fields']['field_person_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_person_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_first_name']['type'] = 'text_plain';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_person_last_name']['id'] = 'field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['field'] = 'field_person_last_name';
  $handler->display->display_options['fields']['field_person_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_person_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_last_name']['alter']['text'] = '[field_person_last_name], [field_person_first_name]';
  $handler->display->display_options['fields']['field_person_last_name']['alter']['path'] = '[field_person_apr_link]';
  $handler->display->display_options['fields']['field_person_last_name']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_person_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_person_last_name']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last name (field_person_last_name) */
  $handler->display->display_options['arguments']['field_person_last_name_value']['id'] = 'field_person_last_name_value';
  $handler->display->display_options['arguments']['field_person_last_name_value']['table'] = 'field_data_field_person_last_name';
  $handler->display->display_options['arguments']['field_person_last_name_value']['field'] = 'field_person_last_name_value';
  $handler->display->display_options['arguments']['field_person_last_name_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_person_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary_options']['base_path'] = 'directories';
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['field_person_last_name_value']['summary_options']['separator'] = ' &nbsp; ';
  $handler->display->display_options['arguments']['field_person_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_person_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_person_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_person_last_name_value']['path_case'] = 'upper';
  $handler->display->display_options['arguments']['field_person_last_name_value']['transform_dash'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'panel_pane_faculty_staff_view' => 'panel_pane_faculty_staff_view',
    'default' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $export['education_person_views'] = $view;

  return $export;
}
