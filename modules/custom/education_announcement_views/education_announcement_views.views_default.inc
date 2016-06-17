<?php
/**
 * @file
 * education_announcement_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function education_announcement_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'announcements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Announcements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Announcements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'announcement' => 'announcement',
  );

  /* Display: Paragraph */
  $handler = $view->new_display('block', 'Paragraph', 'announcements_paragraph');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Categories (field_announcement_categories) */
  $handler->display->display_options['arguments']['field_announcement_categories_tid']['id'] = 'field_announcement_categories_tid';
  $handler->display->display_options['arguments']['field_announcement_categories_tid']['table'] = 'field_data_field_announcement_categories';
  $handler->display->display_options['arguments']['field_announcement_categories_tid']['field'] = 'field_announcement_categories_tid';
  $handler->display->display_options['arguments']['field_announcement_categories_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_announcement_categories_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_announcement_categories_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_announcement_categories_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_announcement_categories_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Audience (field_announcement_audience) */
  $handler->display->display_options['arguments']['field_announcement_audience_tid']['id'] = 'field_announcement_audience_tid';
  $handler->display->display_options['arguments']['field_announcement_audience_tid']['table'] = 'field_data_field_announcement_audience';
  $handler->display->display_options['arguments']['field_announcement_audience_tid']['field'] = 'field_announcement_audience_tid';
  $handler->display->display_options['arguments']['field_announcement_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_announcement_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_announcement_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_announcement_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_announcement_audience_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Affiliation (field_announcement_affiliation) */
  $handler->display->display_options['arguments']['field_announcement_affiliation_target_id']['id'] = 'field_announcement_affiliation_target_id';
  $handler->display->display_options['arguments']['field_announcement_affiliation_target_id']['table'] = 'field_data_field_announcement_affiliation';
  $handler->display->display_options['arguments']['field_announcement_affiliation_target_id']['field'] = 'field_announcement_affiliation_target_id';
  $handler->display->display_options['arguments']['field_announcement_affiliation_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_announcement_affiliation_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_announcement_affiliation_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_announcement_affiliation_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_announcement_affiliation_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'announcement' => 'announcement',
  );
  $export['announcements'] = $view;

  return $export;
}
