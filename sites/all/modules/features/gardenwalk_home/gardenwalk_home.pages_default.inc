<?php

/**
 * @file
 * gardenwalk_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gardenwalk_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Taxonomy term',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'or',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'topleft' => NULL,
      'topright' => NULL,
      'botleft' => NULL,
      'botmid' => NULL,
      'botright' => NULL,
      'mid' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3b9d9d5f-5d88-4b54-b782-6a7642d29724';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-784108c9-208f-4636-93d3-9383f98cd4bf';
  $pane->panel = 'botleft';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Overview',
    'title' => 'GardenWalk Cleveland: July 13 and 14, 2019',
    'body' => '<p>GardenWalk Cleveland is a free, self-guided tour of private gardens, community gardens, and home orchards in neighborhoods of Cleveland, Ohio.</p><p>GardenWalk 2019&nbsp;will be held&nbsp;<strong>July 13th and 14th,&nbsp;</strong>from <strong>10am-5pm</strong>.</p><p><em>Note that this year the <strong>neighborhoods will be split between the two days</strong> of the GardenWalk!</em>&nbsp;See the "Neighborhoods and Dates" section on this page.</p>',
    'format' => '2',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '784108c9-208f-4636-93d3-9383f98cd4bf';
  $display->content['new-784108c9-208f-4636-93d3-9383f98cd4bf'] = $pane;
  $display->panels['botleft'][0] = 'new-784108c9-208f-4636-93d3-9383f98cd4bf';
  $pane = new stdClass();
  $pane->pid = 'new-c3bc4432-dd8c-4785-8fd9-de2824ad0484';
  $pane->panel = 'botleft';
  $pane->type = 'views_panes';
  $pane->subtype = 'gardener_stories-panel_pane_1';
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
  $pane->uuid = 'c3bc4432-dd8c-4785-8fd9-de2824ad0484';
  $display->content['new-c3bc4432-dd8c-4785-8fd9-de2824ad0484'] = $pane;
  $display->panels['botleft'][1] = 'new-c3bc4432-dd8c-4785-8fd9-de2824ad0484';
  $pane = new stdClass();
  $pane->pid = 'new-ac57a59c-8681-4944-9699-bf95de2f1ef5';
  $pane->panel = 'botleft';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Get Involved',
    'title' => 'Dig Deeper',
    'body' => '<p>GardenWalk Cleveland now has 501c3 status. Donors can now deduct any contributions they make! Consider a donation this year.&nbsp;</p><ul><li><a href="/volunteer">Volunteer</a></li><li><a href="/get-involved#donate-sponsor">Donate / Sponsor</a></li></ul>',
    'format' => '2',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = 'ac57a59c-8681-4944-9699-bf95de2f1ef5';
  $display->content['new-ac57a59c-8681-4944-9699-bf95de2f1ef5'] = $pane;
  $display->panels['botleft'][2] = 'new-ac57a59c-8681-4944-9699-bf95de2f1ef5';
  $pane = new stdClass();
  $pane->pid = 'new-1523fd34-31e7-4813-bc2e-ff4e2f307daf';
  $pane->panel = 'botmid';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '2019 Neighborhoods and Dates',
    'title' => '2019 Neighborhoods and Dates',
    'title_heading' => 'h2',
    'body' => '<p><strong>Saturday, July 13th</strong>:Detroit Shoreway, West Park, and Old Brooklyn</p><p><strong>Sunday, July 14th</strong>: Little Italy, Fairfax, Collinwood, Broadway Slavic Village</p>',
    'format' => '1',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1523fd34-31e7-4813-bc2e-ff4e2f307daf';
  $display->content['new-1523fd34-31e7-4813-bc2e-ff4e2f307daf'] = $pane;
  $display->panels['botmid'][0] = 'new-1523fd34-31e7-4813-bc2e-ff4e2f307daf';
  $pane = new stdClass();
  $pane->pid = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $pane->panel = 'botmid';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Sustainable Cleveland 2019',
    'title' => '',
    'body' => '<p>&nbsp;</p><p>[[{"fid":"347","view_mode":"default","fields":{"alt":"Sustainable Cleveland 2019","title":"Sustainable Cleveland 2019","height":135,"width":200,"style":"height: 135px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"3","format":"default","alignment":"center","field_file_image_alt_text[und][0][value]":"Sustainable Cleveland 2019","field_file_image_title_text[und][0][value]":"Sustainable Cleveland 2019","external_url":""},"type":"media","field_deltas":{"3":{"alt":"Sustainable Cleveland 2019","title":"Sustainable Cleveland 2019","height":135,"width":200,"style":"height: 135px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"3","format":"default","alignment":"center","field_file_image_alt_text[und][0][value]":"Sustainable Cleveland 2019","field_file_image_title_text[und][0][value]":"Sustainable Cleveland 2019","external_url":""}},"link_text":null,"attributes":{"alt":"Sustainable Cleveland 2019","title":"Sustainable Cleveland 2019","height":135,"width":200,"style":"height: 135px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"3"}}]]</p><h2><strong>Sustainable Cleveland 2019</strong></h2><p>Sustainable Cleveland 2019’s Celebration Year of People recognizes the many sustainability champions that have brought us this far in our journey. Since 2009, SC2019 has engaged more than 15,000 people through working groups, events, and social media.</p><p>We look to continue to grow this number in 2019 and beyond and we are proud to promote GardenWalk Cleveland as part of this Celebration Year. Cleveland gardeners in seven neighborhoods have created green spaces that bring together neighbors and sustain the natural beauty of our area.</p><h2><strong>Cuyahoga50</strong></h2><p>This year also marks the 50th anniversary of the last burning of the Cuyahoga River. To celebrate this significant anniversary, more than 200 organizations are coming together throughout 2019 to celebrate our progress and to ignite action to protect this most valuable resource.</p><p>&nbsp;</p>',
    'format' => '2',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $display->content['new-7cc637fd-bd62-4210-b14e-bddae13fed3f'] = $pane;
  $display->panels['botmid'][1] = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $pane = new stdClass();
  $pane->pid = 'new-4d3a2199-cbcd-4353-9c79-4228b368f61c';
  $pane->panel = 'botright';
  $pane->type = 'views';
  $pane->subtype = 'printable_maps';
  $pane->shown = FALSE;
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
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '4d3a2199-cbcd-4353-9c79-4228b368f61c';
  $display->content['new-4d3a2199-cbcd-4353-9c79-4228b368f61c'] = $pane;
  $display->panels['botright'][0] = 'new-4d3a2199-cbcd-4353-9c79-4228b368f61c';
  $pane = new stdClass();
  $pane->pid = 'new-fe1cb9d5-35b1-42f3-bfb4-899a844ce911';
  $pane->panel = 'botright';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Get your GardenWalk Guide',
    'title' => 'Get your GardenWalk Guide',
    'title_heading' => 'h2',
    'body' => '<p>Pick up a Guide before the GardenWalk begins at most area Dave\'s Supermarkets,&nbsp;starting July 1st!</p><p>Guides with&nbsp;maps and details will be available in several garden site "refreshment stations"&nbsp;throughout the neighborhoods. See each neighborhood page from the <a href="/guide">Guide page</a>&nbsp;for refreshment station addresses.</p>',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fe1cb9d5-35b1-42f3-bfb4-899a844ce911';
  $display->content['new-fe1cb9d5-35b1-42f3-bfb4-899a844ce911'] = $pane;
  $display->panels['botright'][1] = 'new-fe1cb9d5-35b1-42f3-bfb4-899a844ce911';
  $pane = new stdClass();
  $pane->pid = 'new-26103756-43f7-4c7b-a86c-29d2bf63d45d';
  $pane->panel = 'botright';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Join our Mailing List',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => 'mailchimp-subscribe',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '26103756-43f7-4c7b-a86c-29d2bf63d45d';
  $display->content['new-26103756-43f7-4c7b-a86c-29d2bf63d45d'] = $pane;
  $display->panels['botright'][2] = 'new-26103756-43f7-4c7b-a86c-29d2bf63d45d';
  $pane = new stdClass();
  $pane->pid = 'new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
  $pane->panel = 'botright';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'GardenWalk Raffle is Back!',
    'title' => 'GardenWalk Raffle ',
    'body' => '<p>Support GardenWalk Cleveland by entering this year\'s raffle. Buy tickets to <strong>win a wheelbarrow-load of gardening supplies</strong>. Tickets will be available at all&nbsp;neighborhood Refreshment Stations. Winner will be notified within a week of the Walk.</p><p>Consider donating some gardening supplies. <a href="/contact">Let us know</a> if you want to help with this fun raffle project.</p><p style="text-align: center;">&nbsp;</p><p>2018 Raffle Winner!</p>',
    'format' => '2',
    'substitute' => 0,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
  $display->content['new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7'] = $pane;
  $display->panels['botright'][3] = 'new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
  $pane = new stdClass();
  $pane->pid = 'new-d3f31880-a34b-444a-a5dd-0a15bf45bcf3';
  $pane->panel = 'mid';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'howto-steps',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd3f31880-a34b-444a-a5dd-0a15bf45bcf3';
  $display->content['new-d3f31880-a34b-444a-a5dd-0a15bf45bcf3'] = $pane;
  $display->panels['mid'][0] = 'new-d3f31880-a34b-444a-a5dd-0a15bf45bcf3';
  $pane = new stdClass();
  $pane->pid = 'new-40823a77-73a1-4342-97cf-a346de034a4e';
  $pane->panel = 'topleft';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Blue info card',
    'title' => '<no title>',
    'body' => '<p>GardenWalk Cleveland is a free, self-guided tour of private gardens, community gardens, and home orchards in several neighborhoods of Cleveland, Ohio.</p><p>2019 neighborhoods below, and more details to come. Stay tuned!</p>',
    'format' => '1',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40823a77-73a1-4342-97cf-a346de034a4e';
  $display->content['new-40823a77-73a1-4342-97cf-a346de034a4e'] = $pane;
  $display->panels['topleft'][0] = 'new-40823a77-73a1-4342-97cf-a346de034a4e';
  $pane = new stdClass();
  $pane->pid = 'new-fd6e03a9-19ec-4308-b0dd-c9fd099b1cf4';
  $pane->panel = 'topright';
  $pane->type = 'views';
  $pane->subtype = 'image_rotator';
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
    'display' => 'block_1',
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
  $pane->locks = array();
  $pane->uuid = 'fd6e03a9-19ec-4308-b0dd-c9fd099b1cf4';
  $display->content['new-fd6e03a9-19ec-4308-b0dd-c9fd099b1cf4'] = $pane;
  $display->panels['topright'][0] = 'new-fd6e03a9-19ec-4308-b0dd-c9fd099b1cf4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-784108c9-208f-4636-93d3-9383f98cd4bf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__new-home';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Temp Home',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Taxonomy term',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'new-home',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'offseason',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 'temp',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
      'topleft' => NULL,
      'topright' => NULL,
      'botleft' => NULL,
      'botmid' => NULL,
      'botright' => NULL,
      'mid' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3b9d9d5f-5d88-4b54-b782-6a7642d29724';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home__new-home';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-784108c9-208f-4636-93d3-9383f98cd4bf';
  $pane->panel = 'botleft';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Overview',
    'title' => 'GardenWalk Cleveland: July 7 & 8, 2018',
    'body' => '<p>GardenWalk Cleveland is a free, self-guided tour of private gardens, community gardens, and home orchards in neighborhoods of Cleveland, Ohio.</p><p>GardenWalk 2018&nbsp;will be held&nbsp;<strong>July 7th and 8th,&nbsp;</strong>from <strong>10am-5pm</strong>.</p><p><em>Note that this year the <strong>neighborhoods will be split between the two days</strong> of the GardenWalk!</em>&nbsp;See the "Neighborhoods and Dates" section on this page.</p>',
    'format' => '2',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '784108c9-208f-4636-93d3-9383f98cd4bf';
  $display->content['new-784108c9-208f-4636-93d3-9383f98cd4bf'] = $pane;
  $display->panels['botleft'][0] = 'new-784108c9-208f-4636-93d3-9383f98cd4bf';
  $pane = new stdClass();
  $pane->pid = 'new-c3bc4432-dd8c-4785-8fd9-de2824ad0484';
  $pane->panel = 'botleft';
  $pane->type = 'views_panes';
  $pane->subtype = 'gardener_stories-panel_pane_1';
  $pane->shown = FALSE;
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
  $pane->uuid = 'c3bc4432-dd8c-4785-8fd9-de2824ad0484';
  $display->content['new-c3bc4432-dd8c-4785-8fd9-de2824ad0484'] = $pane;
  $display->panels['botleft'][1] = 'new-c3bc4432-dd8c-4785-8fd9-de2824ad0484';
  $pane = new stdClass();
  $pane->pid = 'new-ac57a59c-8681-4944-9699-bf95de2f1ef5';
  $pane->panel = 'botleft';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Get Involved',
    'title' => 'Dig Deeper',
    'body' => '<p>There are a few ways you can get more involved with GardenWalk Cleveland:</p><ul><li><a href="/volunteer">Volunteer</a></li><li><a href="/get-involved#donate-sponsor">Donate / Sponsor</a></li></ul>',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = 'ac57a59c-8681-4944-9699-bf95de2f1ef5';
  $display->content['new-ac57a59c-8681-4944-9699-bf95de2f1ef5'] = $pane;
  $display->panels['botleft'][2] = 'new-ac57a59c-8681-4944-9699-bf95de2f1ef5';
  $pane = new stdClass();
  $pane->pid = 'new-1523fd34-31e7-4813-bc2e-ff4e2f307daf';
  $pane->panel = 'botmid';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '2018 Neighborhoods and Dates',
    'title' => '2018 Neighborhoods and Dates',
    'title_heading' => 'h2',
    'body' => '<p><strong>Saturday, July 7th</strong>:&nbsp;<a href="/neighborhood/west-park">West Park</a> and <a href="/neighborhood/detroit-shoreway">Detroit Shoreway</a></p><p><strong>Sunday, July 8th</strong>: <a href="/neighborhood/little-italy">Little Italy</a>, <a href="/neighborhood/north-collinwood">North Collinwood</a>, and <a href="/neighborhood/broadway-slavic-village">Broadway Slavic Village</a></p>',
    'format' => '1',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1523fd34-31e7-4813-bc2e-ff4e2f307daf';
  $display->content['new-1523fd34-31e7-4813-bc2e-ff4e2f307daf'] = $pane;
  $display->panels['botmid'][0] = 'new-1523fd34-31e7-4813-bc2e-ff4e2f307daf';
  $pane = new stdClass();
  $pane->pid = 'new-46c3f718-eec3-4b5f-9698-ce9b289ed054';
  $pane->panel = 'botmid';
  $pane->type = 'views';
  $pane->subtype = 'printable_maps';
  $pane->shown = FALSE;
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
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '46c3f718-eec3-4b5f-9698-ce9b289ed054';
  $display->content['new-46c3f718-eec3-4b5f-9698-ce9b289ed054'] = $pane;
  $display->panels['botmid'][1] = 'new-46c3f718-eec3-4b5f-9698-ce9b289ed054';
  $pane = new stdClass();
  $pane->pid = 'new-26103756-43f7-4c7b-a86c-29d2bf63d45d';
  $pane->panel = 'botmid';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Join our Mailing List',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => 'mailchimp-subscribe',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '26103756-43f7-4c7b-a86c-29d2bf63d45d';
  $display->content['new-26103756-43f7-4c7b-a86c-29d2bf63d45d'] = $pane;
  $display->panels['botmid'][2] = 'new-26103756-43f7-4c7b-a86c-29d2bf63d45d';
  $pane = new stdClass();
  $pane->pid = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $pane->panel = 'botmid';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Year of Vital Neighborhoods',
    'title' => 'Year of Vital Neighborhoods',
    'body' => '<p>2018&nbsp;is the City of Cleveland’s <a href="https://www.sustainablecleveland.org/yovn">Celebration Year of&nbsp;Vital Neighborhoods</a>.</p><p><a href="http://www.sustainablecleveland.org">[[{"fid":"347","view_mode":"default","fields":{"alt":"Sustainable Cleveland 2019","title":"Sustainable Cleveland 2019","height":135,"width":200,"style":"height: 135px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"3","format":"default","alignment":"center","field_file_image_alt_text[und][0][value]":"Sustainable Cleveland 2019","field_file_image_title_text[und][0][value]":"Sustainable Cleveland 2019","external_url":""},"type":"media","field_deltas":{"3":{"alt":"Sustainable Cleveland 2019","title":"Sustainable Cleveland 2019","height":135,"width":200,"style":"height: 135px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"3","format":"default","alignment":"center","field_file_image_alt_text[und][0][value]":"Sustainable Cleveland 2019","field_file_image_title_text[und][0][value]":"Sustainable Cleveland 2019","external_url":""}},"link_text":null,"attributes":{"alt":"Sustainable Cleveland 2019","title":"Sustainable Cleveland 2019","height":135,"width":200,"style":"height: 135px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"3"}}]]</a></p><p>We are proud to be able to promote GardenWalk Cleveland as part of this Celebration Year. Cleveland gardeners have created green spaces that bring together neighbors and sustain the natural beauty of our area.</p><p>&nbsp;</p>',
    'format' => '2',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $display->content['new-7cc637fd-bd62-4210-b14e-bddae13fed3f'] = $pane;
  $display->panels['botmid'][3] = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $pane = new stdClass();
  $pane->pid = 'new-4d3a2199-cbcd-4353-9c79-4228b368f61c';
  $pane->panel = 'botright';
  $pane->type = 'views';
  $pane->subtype = 'printable_maps';
  $pane->shown = FALSE;
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
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '4d3a2199-cbcd-4353-9c79-4228b368f61c';
  $display->content['new-4d3a2199-cbcd-4353-9c79-4228b368f61c'] = $pane;
  $display->panels['botright'][0] = 'new-4d3a2199-cbcd-4353-9c79-4228b368f61c';
  $pane = new stdClass();
  $pane->pid = 'new-fe1cb9d5-35b1-42f3-bfb4-899a844ce911';
  $pane->panel = 'botright';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Get your GardenWalk Guide',
    'title' => 'Get your GardenWalk Guide',
    'title_heading' => 'h2',
    'body' => '<p>Pick up a Guide before the GardenWalk begins at most area <a href="https://www.davesmarkets.com/">Dave\'s Supermarkets</a>,&nbsp;starting July 1st!</p><p>Guides with&nbsp;maps and details will be available in several garden site "refreshment stations"&nbsp;throughout the neighborhoods. See each neighborhood page from the <a href="/guide">Guide page</a>&nbsp;for refreshment station addresses.</p>',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fe1cb9d5-35b1-42f3-bfb4-899a844ce911';
  $display->content['new-fe1cb9d5-35b1-42f3-bfb4-899a844ce911'] = $pane;
  $display->panels['botright'][1] = 'new-fe1cb9d5-35b1-42f3-bfb4-899a844ce911';
  $pane = new stdClass();
  $pane->pid = 'new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
  $pane->panel = 'botright';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'GardenWalk Raffle is Back!',
    'title' => 'GardenWalk Raffle ',
    'body' => '<p>Support GardenWalk Cleveland by entering this year\'s raffle. Buy tickets to <strong>win a wheelbarrow-load of gardening supplies</strong>. Tickets will be available at all&nbsp;neighborhood Refreshment Stations. Winner will be notified within a week of the Walk.</p><p>Consider donating some gardening supplies. <a href="/contact">Let us know</a> if you want to help with this fun raffle project.</p><p style="text-align: center;">[[{"fid":"375","view_mode":"teaser","fields":{"format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"Kim and Mac Adler, GardenWalk 2017 Raffle winners","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"2":{"format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"Kim and Mac Adler, GardenWalk 2017 Raffle winners","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Kim and Mac Adler, GardenWalk 2017 Raffle winners","height":220,"width":165,"class":"media-element file-teaser media-wysiwyg-align-center","data-delta":"2"}}]]</p><p>Kim and Mac Adler were last summer\'s (2017) Raffle winners! The Adlers&nbsp;and their two children just moved into their new home in Solon after renting for a time. They were very excited to receive the wheelbarrow and its contents as they had no gardening tools before they won the raffle.</p>',
    'format' => '2',
    'substitute' => 0,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
  $display->content['new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7'] = $pane;
  $display->panels['botright'][2] = 'new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
  $pane = new stdClass();
  $pane->pid = 'new-d3f31880-a34b-444a-a5dd-0a15bf45bcf3';
  $pane->panel = 'mid';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'howto-steps',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd3f31880-a34b-444a-a5dd-0a15bf45bcf3';
  $display->content['new-d3f31880-a34b-444a-a5dd-0a15bf45bcf3'] = $pane;
  $display->panels['mid'][0] = 'new-d3f31880-a34b-444a-a5dd-0a15bf45bcf3';
  $pane = new stdClass();
  $pane->pid = 'new-39b099a3-e6e8-42ee-9848-35f910c6a72e';
  $pane->panel = 'mid';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Neighborhoods and more soon',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>Neighborhoods for GardenWalk 2019</h2><p><strong>Saturday, July 13th:</strong><br>Detroit Shoreway, West Park, Bellaire Puritas, and Old Brooklyn</p><p><strong>Sunday, July 14th:</strong><br>Little Italy, Broadway Slavic Village, Collinwood, Fairfax</p><p>More information coming soon!</p>',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '39b099a3-e6e8-42ee-9848-35f910c6a72e';
  $display->content['new-39b099a3-e6e8-42ee-9848-35f910c6a72e'] = $pane;
  $display->panels['mid'][1] = 'new-39b099a3-e6e8-42ee-9848-35f910c6a72e';
  $pane = new stdClass();
  $pane->pid = 'new-40823a77-73a1-4342-97cf-a346de034a4e';
  $pane->panel = 'topleft';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Blue info card',
    'title' => '<no title>',
    'body' => '<p>GardenWalk Cleveland is a free, self-guided tour of private gardens, community gardens, and home orchards in several neighborhoods of Cleveland, Ohio.</p><p>2019 neighborhoods below, and more details to come. Stay tuned!</p>',
    'format' => '1',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40823a77-73a1-4342-97cf-a346de034a4e';
  $display->content['new-40823a77-73a1-4342-97cf-a346de034a4e'] = $pane;
  $display->panels['topleft'][0] = 'new-40823a77-73a1-4342-97cf-a346de034a4e';
  $pane = new stdClass();
  $pane->pid = 'new-fd6e03a9-19ec-4308-b0dd-c9fd099b1cf4';
  $pane->panel = 'topright';
  $pane->type = 'views';
  $pane->subtype = 'image_rotator';
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
    'display' => 'block_1',
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
  $pane->locks = array();
  $pane->uuid = 'fd6e03a9-19ec-4308-b0dd-c9fd099b1cf4';
  $display->content['new-fd6e03a9-19ec-4308-b0dd-c9fd099b1cf4'] = $pane;
  $display->panels['topright'][0] = 'new-fd6e03a9-19ec-4308-b0dd-c9fd099b1cf4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-784108c9-208f-4636-93d3-9383f98cd4bf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
