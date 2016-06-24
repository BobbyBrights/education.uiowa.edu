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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'acf92f1e-3703-4cec-9e75-2ca835a6b3f4';
    $display->content['new-acf92f1e-3703-4cec-9e75-2ca835a6b3f4'] = $pane;
    $display->panels['middle'][1] = 'new-acf92f1e-3703-4cec-9e75-2ca835a6b3f4';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '54cb487d-d629-4d69-a66a-26bd40ca9929';
    $display->content['new-54cb487d-d629-4d69-a66a-26bd40ca9929'] = $pane;
    $display->panels['middle'][2] = 'new-54cb487d-d629-4d69-a66a-26bd40ca9929';
    $pane = new stdClass();
    $pane->pid = 'new-99c93ad5-289a-49ba-8511-f2538c81b3f3';
    $pane->panel = 'middle';
    $pane->type = 'callout_reasearch';
    $pane->subtype = 'callout_reasearch';
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
    $pane->uuid = '99c93ad5-289a-49ba-8511-f2538c81b3f3';
    $display->content['new-99c93ad5-289a-49ba-8511-f2538c81b3f3'] = $pane;
    $display->panels['middle'][3] = 'new-99c93ad5-289a-49ba-8511-f2538c81b3f3';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'dce9d1e5-d608-4e0e-9406-09d1b4af7e4e';
    $display->content['new-dce9d1e5-d608-4e0e-9406-09d1b4af7e4e'] = $pane;
    $display->panels['middle'][4] = 'new-dce9d1e5-d608-4e0e-9406-09d1b4af7e4e';
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
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = '637f51db-d553-476b-93a7-230e1407a6c2';
  $display->content = array();
  $display->panels = array();
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
  $page->path = 'directory';
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
      'body' => '<p><a class="btn-long">Offices and Centers</a></p>

<p><a class="btn-long">Programs and Departments</a></p>

<h2>Faculty and Staff</h2>
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
