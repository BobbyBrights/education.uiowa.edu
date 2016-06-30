<?php
/**
 * @file
 * education_article_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function education_article_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'education_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Articles';
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
  /* Field: Content: Sticky */
  $handler->display->display_options['fields']['sticky']['id'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['table'] = 'node';
  $handler->display->display_options['fields']['sticky']['field'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['label'] = '';
  $handler->display->display_options['fields']['sticky']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sticky']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sticky']['not'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F d, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'America/Chicago';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_article_source']['id'] = 'field_article_source';
  $handler->display->display_options['fields']['field_article_source']['table'] = 'field_data_field_article_source';
  $handler->display->display_options['fields']['field_article_source']['field'] = 'field_article_source';
  $handler->display->display_options['fields']['field_article_source']['label'] = '';
  $handler->display->display_options['fields']['field_article_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_source']['click_sort_column'] = 'url';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
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
    'article' => 'article',
  );

  /* Display: News */
  $handler = $view->new_display('panel_pane', 'News', 'education_news_pane_view');
  $handler->display->display_options['display_description'] = 'Full listing of news on News & Events page';

  /* Display: Paragraph */
  $handler = $view->new_display('block', 'Paragraph', 'news_paragraph_block');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sticky */
  $handler->display->display_options['fields']['sticky']['id'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['table'] = 'node';
  $handler->display->display_options['fields']['sticky']['field'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['label'] = '';
  $handler->display->display_options['fields']['sticky']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sticky']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sticky']['not'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_article_source']['id'] = 'field_article_source';
  $handler->display->display_options['fields']['field_article_source']['table'] = 'field_data_field_article_source';
  $handler->display->display_options['fields']['field_article_source']['field'] = 'field_article_source';
  $handler->display->display_options['fields']['field_article_source']['label'] = '';
  $handler->display->display_options['fields']['field_article_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_source']['alter']['text'] = '[field_article_source] |';
  $handler->display->display_options['fields']['field_article_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_source']['click_sort_column'] = 'url';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '[field_article_source] [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F d, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'America/Chicago';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Audiences */
  $handler->display->display_options['arguments']['field_article_audience_tid']['id'] = 'field_article_audience_tid';
  $handler->display->display_options['arguments']['field_article_audience_tid']['table'] = 'field_data_field_article_audience';
  $handler->display->display_options['arguments']['field_article_audience_tid']['field'] = 'field_article_audience_tid';
  $handler->display->display_options['arguments']['field_article_audience_tid']['ui_name'] = 'Audiences';
  $handler->display->display_options['arguments']['field_article_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_article_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_article_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_article_audience_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Affiliations */
  $handler->display->display_options['arguments']['field_article_affiliation_target_id']['id'] = 'field_article_affiliation_target_id';
  $handler->display->display_options['arguments']['field_article_affiliation_target_id']['table'] = 'field_data_field_article_affiliation';
  $handler->display->display_options['arguments']['field_article_affiliation_target_id']['field'] = 'field_article_affiliation_target_id';
  $handler->display->display_options['arguments']['field_article_affiliation_target_id']['ui_name'] = 'Affiliations';
  $handler->display->display_options['arguments']['field_article_affiliation_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_article_affiliation_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_article_affiliation_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_affiliation_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_article_affiliation_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['block_description'] = 'News paragraph';
  $export['education_articles'] = $view;

  return $export;
}
