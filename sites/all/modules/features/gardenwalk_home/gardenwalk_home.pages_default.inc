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
    'title' => 'Panel',
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
    'title' => 'News',
    'body' => '<p>GardenWalk Cleveland is a free, self-guided tour of private gardens, community gardens, and home orchards in several neighborhoods of Cleveland, Ohio.</p><p>GardenWalk Cleveland tours will be held July 8th and 9th, 2017.</p><p>We are planning a series of workshops educating gardeners about the benefits and uses of native plants in the home landscape. These workshops will be held in conjunction with <a href="http://www.leapbio.org">LEAP</a> (Lake Erie Allegheny Partnership for Biodiversity) at local venues.&nbsp;</p>',
    'format' => '2',
    'substitute' => 1,
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
  $pane->pid = 'new-26103756-43f7-4c7b-a86c-29d2bf63d45d';
  $pane->panel = 'botleft';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '26103756-43f7-4c7b-a86c-29d2bf63d45d';
  $display->content['new-26103756-43f7-4c7b-a86c-29d2bf63d45d'] = $pane;
  $display->panels['botleft'][1] = 'new-26103756-43f7-4c7b-a86c-29d2bf63d45d';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c3bc4432-dd8c-4785-8fd9-de2824ad0484';
  $display->content['new-c3bc4432-dd8c-4785-8fd9-de2824ad0484'] = $pane;
  $display->panels['botleft'][2] = 'new-c3bc4432-dd8c-4785-8fd9-de2824ad0484';
  $pane = new stdClass();
  $pane->pid = 'new-3bdaa561-b114-4677-9125-75677086be37';
  $pane->panel = 'botmid';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Plant Sale 2017',
    'title' => 'Spring Plant Sale',
    'title_heading' => 'h2',
    'body' => '<h3 style="margin: 0px; padding: 0px; font-family: Helvetica; font-size: 18px; line-height: 22.5px; letter-spacing: -0.5px; color: rgb(96, 96, 96) !important;"><span style="font-size: 16px;"><strong>Sale Date:</strong>&nbsp;<strong>May 13th, 12 to 4pm</strong></span><br /><strong style="font-size: 16px;">What&#39;s for Sale:</strong><font size="3">&nbsp;Annuals, specialty annuals and accent foliage, herbs, vegetables, native perennials, container combos, hanging baskets</font></h3><p><strong style="color: rgb(96, 96, 96); font-family: Helvetica; font-size: 16px;">Order Deadline:</strong><font size="3" style="color: rgb(96, 96, 96); font-family: Helvetica;">&nbsp;May 1</font><br style="color: rgb(96, 96, 96); font-family: Helvetica; font-size: 15px;" /><span style="color: rgb(96, 96, 96); font-family: Helvetica; font-size: 16px;"><strong>Plant pickup:&nbsp;</strong>Saturday May 13th from 12 to 4 pm at 12541 Cedar Road, Cleveland Heights 44106. Park in church parking lot.</span></p><p><span style="color: rgb(96, 96, 96); font-family: Helvetica; font-size: 16px;"><a href="http://www.gardenwalkcleveland.org/sites/default/files/GWCle%20PlantsPreSale_CAL.pdf">Click Here for Order Form.</a>&nbsp;</span></p>',
    'format' => '1',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3bdaa561-b114-4677-9125-75677086be37';
  $display->content['new-3bdaa561-b114-4677-9125-75677086be37'] = $pane;
  $display->panels['botmid'][0] = 'new-3bdaa561-b114-4677-9125-75677086be37';
  $pane = new stdClass();
  $pane->pid = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $pane->panel = 'botmid';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'How to do the GardenWalk',
    'title' => 'GardenWalk Cleveland July 8 & 9, 2017',
    'body' => '<p>2017 is the City of Cleveland&rsquo;s Celebration&nbsp;<a href="http://www.sustainablecleveland.org">Year of Vibrant Green Space</a>. We are proud to be able to promote GardenWalk Cleveland as part of that Celebration Year. Cleveland gardeners have created green spaces that bring together neighbors and sustain the natural beauty of our area.</p>',
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
  $pane->uuid = '7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $display->content['new-7cc637fd-bd62-4210-b14e-bddae13fed3f'] = $pane;
  $display->panels['botmid'][1] = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $pane = new stdClass();
  $pane->pid = 'new-ac57a59c-8681-4944-9699-bf95de2f1ef5';
  $pane->panel = 'botmid';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
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
  $display->panels['botmid'][2] = 'new-ac57a59c-8681-4944-9699-bf95de2f1ef5';
  $pane = new stdClass();
  $pane->pid = 'new-83cac6aa-1b9b-4c5b-9b7c-4e896fd0e745';
  $pane->panel = 'botright';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Maps Overview',
    'title' => 'Neighborhoods',
    'body' => '<p>GardenWalk Tours for 2017 will be in the following neighborhoods:</p><p>Detroit Shoreway<br />Collinwood<br />Slavic Village<br />West Park</p>',
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
  $pane->locks = '';
  $pane->uuid = '83cac6aa-1b9b-4c5b-9b7c-4e896fd0e745';
  $display->content['new-83cac6aa-1b9b-4c5b-9b7c-4e896fd0e745'] = $pane;
  $display->panels['botright'][0] = 'new-83cac6aa-1b9b-4c5b-9b7c-4e896fd0e745';
  $pane = new stdClass();
  $pane->pid = 'new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
  $pane->panel = 'botright';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'GardenWalk Raffle is Back!',
    'title' => 'GardenWalk Raffle is Back',
    'body' => '<p>Support GardenWalk Cleveland by entering this year&#39;s raffle. Buy tickets to win a wheelbarrow-load of gardening supplies. Tickets will be available at each neighborhood headquarters. Winner will be notified within a week of the Walk.</p><p>Consider donating some gardening supplies. Let us know if you want to help with this fun raffle project.</p>
<p><a href="/dunham-tavern"><img alt="Jonathan Gauchat-Raffle Winner" src="http://www.gardenwalkcleveland.org/sites/default/files/jonathan_gauchat_gwc200.jpg" style="width: 200px; height: 267px;" /></a><br />Jonathan Gauchat of Shaker Heights was the winner of the GardenWalk Cleveland 2015 raffle!<br />Photo: Jan Kious</p>',
    'format' => '2',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
  $display->content['new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7'] = $pane;
  $display->panels['botright'][1] = 'new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
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
    'admin_title' => '',
    'title' => '<no title>',
    'body' => '<p><br /><br />GardenWalk Cleveland is a free, self-guided tour of private gardens, community gardens, and home orchards in several neighborhoods of Cleveland, Ohio.</p><p>Check out what&#39;s new in 2017...</p>',
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
