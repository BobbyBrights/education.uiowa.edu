<?php
/**
 * @file
 * education_faculty_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function education_faculty_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faculty';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Faculty';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Faculty Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'node' => array(
      'person' => 'person',
      'program' => 0,
      'announcement' => 0,
      'article' => 0,
      'background_image' => 0,
      'page' => 0,
      'center' => 0,
      'committee' => 0,
      'degree' => 0,
      'department' => 0,
      'event' => 0,
      'fast_fact' => 0,
      'scholarship' => 0,
      'service' => 0,
      'webform' => 0,
    ),
    'node_only' => array(
      'node_changed' => 0,
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Looking for someone?';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You have reached the faculty listing page, but without the information we need to create a listing. Please visit <a href="/directories">directory</a> to get a full listing of our faculty and staff.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: APR link */
  $handler->display->display_options['fields']['field_person_apr_link']['id'] = 'field_person_apr_link';
  $handler->display->display_options['fields']['field_person_apr_link']['table'] = 'field_data_field_person_apr_link';
  $handler->display->display_options['fields']['field_person_apr_link']['field'] = 'field_person_apr_link';
  $handler->display->display_options['fields']['field_person_apr_link']['label'] = '';
  $handler->display->display_options['fields']['field_person_apr_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_apr_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_apr_link']['click_sort_column'] = 'url';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_person_image']['id'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['table'] = 'field_data_field_person_image';
  $handler->display->display_options['fields']['field_person_image']['field'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['label'] = '';
  $handler->display->display_options['fields']['field_person_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=[field_person_apr_link]><strong>[title]</strong></a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_person_apr_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['field_person_rank']['id'] = 'field_person_rank';
  $handler->display->display_options['fields']['field_person_rank']['table'] = 'field_data_field_person_rank';
  $handler->display->display_options['fields']['field_person_rank']['field'] = 'field_person_rank';
  $handler->display->display_options['fields']['field_person_rank']['label'] = '';
  $handler->display->display_options['fields']['field_person_rank']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_rank']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Affiliations (field_person_affiliations) */
  $handler->display->display_options['arguments']['field_person_affiliations_target_id']['id'] = 'field_person_affiliations_target_id';
  $handler->display->display_options['arguments']['field_person_affiliations_target_id']['table'] = 'field_data_field_person_affiliations';
  $handler->display->display_options['arguments']['field_person_affiliations_target_id']['field'] = 'field_person_affiliations_target_id';
  $handler->display->display_options['arguments']['field_person_affiliations_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_person_affiliations_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_person_affiliations_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_person_affiliations_target_id']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Content: Rank (field_person_rank) */
  $handler->display->display_options['filters']['field_person_rank_tid']['id'] = 'field_person_rank_tid';
  $handler->display->display_options['filters']['field_person_rank_tid']['table'] = 'field_data_field_person_rank';
  $handler->display->display_options['filters']['field_person_rank_tid']['field'] = 'field_person_rank_tid';
  $handler->display->display_options['filters']['field_person_rank_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_person_rank_tid']['value'] = array(
    0 => '10',
    1 => '11',
    2 => '9',
    3 => '14',
    4 => '1',
    5 => '13',
  );
  $handler->display->display_options['filters']['field_person_rank_tid']['expose']['operator_id'] = 'field_person_rank_tid_op';
  $handler->display->display_options['filters']['field_person_rank_tid']['expose']['label'] = 'Rank (field_person_rank)';
  $handler->display->display_options['filters']['field_person_rank_tid']['expose']['operator'] = 'field_person_rank_tid_op';
  $handler->display->display_options['filters']['field_person_rank_tid']['expose']['identifier'] = 'field_person_rank_tid';
  $handler->display->display_options['filters']['field_person_rank_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_person_rank_tid']['vocabulary'] = 'ranks';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_faculty_listing');
  $handler->display->display_options['path'] = 'faculty/%';

  /* Display: Page root */
  $handler = $view->new_display('page', 'Page root', 'page_faculty_full_listing');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'faculty';

  /* Display: Single Person Block */
  $handler = $view->new_display('block', 'Single Person Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'person' => 'person',
  );
  $export['faculty'] = $view;

  return $export;
}
