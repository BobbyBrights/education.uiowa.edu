<?php
/**
 * @file
 * education_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function education_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9071e002-a8a6-4da3-a19c-cc1bc3a7be30';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e9ca902-049d-452f-86c3-6663817c1300';
    $pane->panel = 'middle';
    $pane->type = 'become_a_hawkeye';
    $pane->subtype = 'become_a_hawkeye';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e9ca902-049d-452f-86c3-6663817c1300';
    $display->content['new-3e9ca902-049d-452f-86c3-6663817c1300'] = $pane;
    $display->panels['middle'][0] = 'new-3e9ca902-049d-452f-86c3-6663817c1300';
    $pane = new stdClass();
    $pane->pid = 'new-0c957089-7e45-49c4-bd21-c06d20c5a5bf';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'fast_facts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'fast_facts_homepage_block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0c957089-7e45-49c4-bd21-c06d20c5a5bf';
    $display->content['new-0c957089-7e45-49c4-bd21-c06d20c5a5bf'] = $pane;
    $display->panels['middle'][1] = 'new-0c957089-7e45-49c4-bd21-c06d20c5a5bf';
    $pane = new stdClass();
    $pane->pid = 'new-acf92f1e-3703-4cec-9e75-2ca835a6b3f4';
    $pane->panel = 'middle';
    $pane->type = 'callout_programs';
    $pane->subtype = 'callout_programs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'acf92f1e-3703-4cec-9e75-2ca835a6b3f4';
    $display->content['new-acf92f1e-3703-4cec-9e75-2ca835a6b3f4'] = $pane;
    $display->panels['middle'][2] = 'new-acf92f1e-3703-4cec-9e75-2ca835a6b3f4';
    $pane = new stdClass();
    $pane->pid = 'new-54cb487d-d629-4d69-a66a-26bd40ca9929';
    $pane->panel = 'middle';
    $pane->type = 'social';
    $pane->subtype = 'social';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '54cb487d-d629-4d69-a66a-26bd40ca9929';
    $display->content['new-54cb487d-d629-4d69-a66a-26bd40ca9929'] = $pane;
    $display->panels['middle'][3] = 'new-54cb487d-d629-4d69-a66a-26bd40ca9929';
    $pane = new stdClass();
    $pane->pid = 'new-49b1eb8e-9ed6-4bb4-951d-59fb2c383a74';
    $pane->panel = 'middle';
    $pane->type = 'callout_research';
    $pane->subtype = 'callout_research';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '49b1eb8e-9ed6-4bb4-951d-59fb2c383a74';
    $display->content['new-49b1eb8e-9ed6-4bb4-951d-59fb2c383a74'] = $pane;
    $display->panels['middle'][4] = 'new-49b1eb8e-9ed6-4bb4-951d-59fb2c383a74';
    $pane = new stdClass();
    $pane->pid = 'new-dce9d1e5-d608-4e0e-9406-09d1b4af7e4e';
    $pane->panel = 'middle';
    $pane->type = 'tagline';
    $pane->subtype = 'tagline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'dce9d1e5-d608-4e0e-9406-09d1b4af7e4e';
    $display->content['new-dce9d1e5-d608-4e0e-9406-09d1b4af7e4e'] = $pane;
    $display->panels['middle'][5] = 'new-dce9d1e5-d608-4e0e-9406-09d1b4af7e4e';
    $pane = new stdClass();
    $pane->pid = 'new-159d3ac5-d8ce-417d-b837-2e7dcdcb99e0';
    $pane->panel = 'middle';
    $pane->type = 'callout_leadership';
    $pane->subtype = 'callout_leadership';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '159d3ac5-d8ce-417d-b837-2e7dcdcb99e0';
    $display->content['new-159d3ac5-d8ce-417d-b837-2e7dcdcb99e0'] = $pane;
    $display->panels['middle'][6] = 'new-159d3ac5-d8ce-417d-b837-2e7dcdcb99e0';
    $pane = new stdClass();
    $pane->pid = 'new-089f6b3c-dff9-4bd2-ab7e-b53353db510b';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'education_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'homepage_news_block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '089f6b3c-dff9-4bd2-ab7e-b53353db510b';
    $display->content['new-089f6b3c-dff9-4bd2-ab7e-b53353db510b'] = $pane;
    $display->panels['middle'][7] = 'new-089f6b3c-dff9-4bd2-ab7e-b53353db510b';
    $pane = new stdClass();
    $pane->pid = 'new-df8f0c21-13d3-4bfe-9ac1-a039feaade4f';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'events_homepage_block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'df8f0c21-13d3-4bfe-9ac1-a039feaade4f';
    $display->content['new-df8f0c21-13d3-4bfe-9ac1-a039feaade4f'] = $pane;
    $display->panels['middle'][8] = 'new-df8f0c21-13d3-4bfe-9ac1-a039feaade4f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news__panel';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'main' => NULL,
      'secondary' => NULL,
      'tertiary-first' => NULL,
      'tertiary-second' => NULL,
      'tertiary-third' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News & Events';
  $display->uuid = '637f51db-d553-476b-93a7-230e1407a6c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7295be28-dd37-4d09-a777-d9f971926355';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'education_articles-education_news_pane_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7295be28-dd37-4d09-a777-d9f971926355';
    $display->content['new-7295be28-dd37-4d09-a777-d9f971926355'] = $pane;
    $display->panels['middle'][0] = 'new-7295be28-dd37-4d09-a777-d9f971926355';
    $pane = new stdClass();
    $pane->pid = 'new-8958b01b-884f-4f8a-ad07-e88e6c52694d';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Education Page News Quicklinks',
      'title' => '',
      'body' => '<p class="large-text"><a class="btn-long" href="/news">News</a></p>
<p class="large-text"><a class="btn-long" href="/events">Events</a></p>

<p class="large-text"><a class="btn-long" href="/audiences/media">Media Resources</a></p>
<p class="large-text"><a class="btn-long" href="//magazine.education.uiowa.edu">Alumni Magazine</a></p>
<p class="large-text"><a class="btn-long" href="https://wayback.archive-it.org/823/20151226142811/http://www.education.uiowa.edu/news/annual/2015">Annual Report</a></p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-education-articles-education-news-pane-custom',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8958b01b-884f-4f8a-ad07-e88e6c52694d';
    $display->content['new-8958b01b-884f-4f8a-ad07-e88e6c52694d'] = $pane;
    $display->panels['middle'][1] = 'new-8958b01b-884f-4f8a-ad07-e88e6c52694d';
    $pane = new stdClass();
    $pane->pid = 'new-7cf76a78-d212-4489-b6ee-522e8674a8a7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-education_events_today_pane_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7cf76a78-d212-4489-b6ee-522e8674a8a7';
    $display->content['new-7cf76a78-d212-4489-b6ee-522e8674a8a7'] = $pane;
    $display->panels['middle'][2] = 'new-7cf76a78-d212-4489-b6ee-522e8674a8a7';
    $pane = new stdClass();
    $pane->pid = 'new-3885bde2-8ee0-4804-967f-0fa5b646a73f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'education_announcements-education_honors_awards_pane_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3885bde2-8ee0-4804-967f-0fa5b646a73f';
    $display->content['new-3885bde2-8ee0-4804-967f-0fa5b646a73f'] = $pane;
    $display->panels['middle'][3] = 'new-3885bde2-8ee0-4804-967f-0fa5b646a73f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'people_directory';
  $page->task = 'page';
  $page->admin_title = 'People Directory';
  $page->admin_description = '';
  $page->path = 'directories';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_directory__panel';
  $handler->task = 'page';
  $handler->subtask = 'people_directory';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Directory';
  $display->uuid = '8a0679e3-c83f-46d3-9be1-9748af3ead29';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cba06cd4-37d2-4332-bde6-00ae264d4d03';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Directory buttons',
      'title' => '',
      'body' => '<p><a class="btn-long" href="/centers-and-services">centers &amp;&nbsp;services</a></p>

<p><a class="btn-long" href="/academic-programs">Programs &amp; Departments</a></p>

<h2>Faculty &amp; Staff Listing</h2>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cba06cd4-37d2-4332-bde6-00ae264d4d03';
    $display->content['new-cba06cd4-37d2-4332-bde6-00ae264d4d03'] = $pane;
    $display->panels['middle'][0] = 'new-cba06cd4-37d2-4332-bde6-00ae264d4d03';
    $pane = new stdClass();
    $pane->pid = 'new-3304a4ad-7b27-4465-a664-90b24ecee692';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'education_person_views-panel_pane_faculty_staff_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3304a4ad-7b27-4465-a664-90b24ecee692';
    $display->content['new-3304a4ad-7b27-4465-a664-90b24ecee692'] = $pane;
    $display->panels['middle'][1] = 'new-3304a4ad-7b27-4465-a664-90b24ecee692';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people_directory'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'scholarships';
  $page->task = 'page';
  $page->admin_title = 'Scholarships';
  $page->admin_description = '';
  $page->path = 'scholarships';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_scholarships__panel';
  $handler->task = 'page';
  $handler->subtask = 'scholarships';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Scholarships';
  $display->uuid = 'a6b7aeaa-a69a-47bb-8133-f4887d867867';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-812f7dd1-afa4-437f-b89a-a38b54443979';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'scholarships-scholarships_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '812f7dd1-afa4-437f-b89a-a38b54443979';
    $display->content['new-812f7dd1-afa4-437f-b89a-a38b54443979'] = $pane;
    $display->panels['center'][0] = 'new-812f7dd1-afa4-437f-b89a-a38b54443979';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['scholarships'] = $page;

  return $pages;

}
