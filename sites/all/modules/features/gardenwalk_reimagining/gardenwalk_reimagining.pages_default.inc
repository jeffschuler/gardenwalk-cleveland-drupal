<?php
/**
 * @file
 * gardenwalk_reimagining.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gardenwalk_reimagining_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'reimagining_cleveland_projects';
  $page->task = 'page';
  $page->admin_title = 'Reimagining Cleveland Projects';
  $page->admin_description = '';
  $page->path = 'reimagining-cleveland-projects';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Reimagining Cleveland Projects',
    'name' => 'primary-links',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_reimagining_cleveland_projects_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'reimagining_cleveland_projects';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = 'Reimagining Cleveland Projects';
  $display->uuid = 'a61ce4a1-c456-4682-8e33-001bd0cc927c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_reimagining_cleveland_projects_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a43dd098-97bc-4863-b253-d6d787b95546';
  $pane->panel = 'middle';
  $pane->type = 'openlayers_map';
  $pane->subtype = 'reimagining_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = 'a43dd098-97bc-4863-b253-d6d787b95546';
  $display->content['new-a43dd098-97bc-4863-b253-d6d787b95546'] = $pane;
  $display->panels['middle'][0] = 'new-a43dd098-97bc-4863-b253-d6d787b95546';
  $pane = new stdClass();
  $pane->pid = 'new-5504eab0-939c-4958-b30a-c4c068c39897';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'reimagining_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_3',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '5504eab0-939c-4958-b30a-c4c068c39897';
  $display->content['new-5504eab0-939c-4958-b30a-c4c068c39897'] = $pane;
  $display->panels['middle'][1] = 'new-5504eab0-939c-4958-b30a-c4c068c39897';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['reimagining_cleveland_projects'] = $page;

  return $pages;

}
