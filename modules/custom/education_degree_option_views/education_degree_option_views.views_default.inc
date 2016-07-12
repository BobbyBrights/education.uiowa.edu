<?php
/**
 * @file
 * education_degree_option_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function education_degree_option_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'degree_options';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Degree Options';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'node' => array(
      'degree' => 'degree',
      'program' => 0,
      'announcement' => 0,
      'article' => 0,
      'background_image' => 0,
      'page' => 0,
      'center' => 0,
      'committee' => 0,
      'department' => 0,
      'event' => 0,
      'fast_fact' => 0,
      'person' => 0,
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No programs found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Academic program (field_degree_program) */
  $handler->display->display_options['arguments']['field_degree_program_target_id']['id'] = 'field_degree_program_target_id';
  $handler->display->display_options['arguments']['field_degree_program_target_id']['table'] = 'field_data_field_degree_program';
  $handler->display->display_options['arguments']['field_degree_program_target_id']['field'] = 'field_degree_program_target_id';
  $handler->display->display_options['arguments']['field_degree_program_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_degree_program_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_degree_program_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_degree_program_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_degree_program_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_degree_program_target_id']['validate']['fail'] = 'empty';
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
    'degree' => 'degree',
  );

  /* Display: Program Degree Options */
  $handler = $view->new_display('panel_pane', 'Program Degree Options', 'education_program_degree_option_pane');
  $handler->display->display_options['display_description'] = 'List of degree options for a Program node page';
  $export['degree_options'] = $view;

  return $export;
}
