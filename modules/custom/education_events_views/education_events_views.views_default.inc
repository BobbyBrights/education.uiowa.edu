<?php
/**
 * @file
 * education_events_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function education_events_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: Paragraph */
  $handler = $view->new_display('block', 'Paragraph', 'events_paragraph_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Month */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'Month';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Day */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Day';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '<div class="event-date"><span class="month">[field_event_date]</span><span class="day">[field_event_date_1]</span></div>';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'j',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Audiences */
  $handler->display->display_options['arguments']['field_event_audience_tid']['id'] = 'field_event_audience_tid';
  $handler->display->display_options['arguments']['field_event_audience_tid']['table'] = 'field_data_field_event_audience';
  $handler->display->display_options['arguments']['field_event_audience_tid']['field'] = 'field_event_audience_tid';
  $handler->display->display_options['arguments']['field_event_audience_tid']['ui_name'] = 'Audiences';
  $handler->display->display_options['arguments']['field_event_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_audience_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Affiliations */
  $handler->display->display_options['arguments']['field_event_affiliations_target_id']['id'] = 'field_event_affiliations_target_id';
  $handler->display->display_options['arguments']['field_event_affiliations_target_id']['table'] = 'field_data_field_event_affiliations';
  $handler->display->display_options['arguments']['field_event_affiliations_target_id']['field'] = 'field_event_affiliations_target_id';
  $handler->display->display_options['arguments']['field_event_affiliations_target_id']['ui_name'] = 'Affiliations';
  $handler->display->display_options['arguments']['field_event_affiliations_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_affiliations_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_affiliations_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_affiliations_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_affiliations_target_id']['break_phrase'] = TRUE;
  $export['events'] = $view;

  return $export;
}
