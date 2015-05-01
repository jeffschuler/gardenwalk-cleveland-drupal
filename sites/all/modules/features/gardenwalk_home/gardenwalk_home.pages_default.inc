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
      'title' => 'July 11 and 12, 2015',
      'body' => '<p>GardenWalk Cleveland is a free, self-guided tour of gardens, urban farms, vineyards and orchards in several neighborhoods of Cleveland, Ohio.<br /><br />Tour at your own pace in each of the&nbsp; designated neighborhoods on&nbsp;<strong>Saturday July 11, and Sunday July 12</strong>, 2015.</p><p>Each neighborhood on the Walk has a headquarters where you&rsquo;ll find car parking, bike parking, restrooms, water and maps.</p>',
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
    $pane->pid = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
    $pane->panel = 'botleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'How to do the GardenWalk',
      'title' => 'How to do the GardenWalk',
      'body' => '<ol><li>Get a GardenWalk Guide: Beginning July 1 free Guides, with maps of each neighborhood&#39;s gardens, will be available at all <a href="http://www.petittigardencenter.com/index.php/locations" target="_blank">Petitti Garden Centers</a> and <a href="http://www.davesmarkets.com/locations.shtml" target="_blank">Dave&rsquo;s Markets</a>.</li><li><a href="http://www.gardenwalkcleveland.org/guide">Choose a neighborhood</a> to begin in.</li><li>Go to that neighborhood&#39;s Headquarters on Saturday or Sunday to check-in (optional.) Guides will also be available at each Headquarters.</li><li>Explore...</li></ol><p>Check out the <a href="/faq">FAQ</a> for more...</p>
',
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
    $display->panels['botleft'][1] = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
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
      'body' => '<p>There are a few ways you can get more involved with GardenWalk Cleveland:</p><ul><li><a href="/volunteer">Volunteer</a></li><li><a href="/get-involved#donate-sponsor">Donate / Sponsor</a></li></ul><p>GardenWalk Cleveland is a program of LAND Studio.</p>',
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
    $pane->pid = 'new-83cac6aa-1b9b-4c5b-9b7c-4e896fd0e745';
    $pane->panel = 'botmid';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Maps Overview',
      'title' => 'Neighborhoods',
      'body' => '<p>GardenWalk 2015 comes to&nbsp;5 Cleveland neighborhoods:</p><ul><li>Detroit Shoreway</li><li>Larchmere</li><li>Slavic Village</li><li>West Park</li><li>Old Brooklyn</li></ul><p>Check out the neighborhood pages for maps and listings of gardens after July 1st, 2015.</p>',
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
    $display->panels['botmid'][0] = 'new-83cac6aa-1b9b-4c5b-9b7c-4e896fd0e745';
    $pane = new stdClass();
    $pane->pid = 'new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
    $pane->panel = 'botmid';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Dunham Tavern',
      'title' => 'Visit the Dunham Tavern Museum and Gardens during GardenWalk',
      'body' => '<p><a href="/dunham-tavern"><img alt="Dunham Tavern Museum" src="/sites/default/files/styles/medium/public/images/page/dtm.gif" style="width: 220px; height: 112px;" /></a></p><p>On Saturday, July 11th Dunham Tavern&nbsp;Gardens will be open from 11am-5pm (and the Museum from 12pm-4pm) with&nbsp;<strong>Master Gardeners on site from 12pm-2pm</strong>.</p><p>Dunham Tavern Museum and Gardens are at:<br /><strong>6709 Euclid Avenue, Cleveland, OH 44103</strong></p><p><a href="/dunham-tavern">More info and map...</a></p>',
      'format' => '2',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
    $display->content['new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7'] = $pane;
    $display->panels['botmid'][1] = 'new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
    $pane = new stdClass();
    $pane->pid = 'new-26103756-43f7-4c7b-a86c-29d2bf63d45d';
    $pane->panel = 'botmid';
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
    $display->panels['botmid'][2] = 'new-26103756-43f7-4c7b-a86c-29d2bf63d45d';
    $pane = new stdClass();
    $pane->pid = 'new-c1984ee5-48a6-4d10-87b7-0350412564e4';
    $pane->panel = 'botright';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Master Gardeners',
      'title' => 'Is this a flower or a weed?',
      'body' => '<p>New this year:&nbsp;<strong>Master Gardeners of Northeast Ohio</strong>&nbsp;will be available to answer questions and provide information at each of the neighborhood headquarters, and at the <a href="/dunham-tavern">Dunham Tavern Museum and Gardens</a> on Saturday July 11th from 12pm-2pm.</p><p style="text-align: center;"><a href="http://cfaes.osu.edu/" target="_blank"><img alt="" src="http://www.gardenwalkcleveland.org/sites/default/files/styles/medium/public/OSU-FAES-4C-Scarlet-Stacked-CMYK.jpg" style="width: 180px; height: 114px;" /></a></p>',
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
    $pane->uuid = 'c1984ee5-48a6-4d10-87b7-0350412564e4';
    $display->content['new-c1984ee5-48a6-4d10-87b7-0350412564e4'] = $pane;
    $display->panels['botright'][0] = 'new-c1984ee5-48a6-4d10-87b7-0350412564e4';
    $pane = new stdClass();
    $pane->pid = 'new-c3bc4432-dd8c-4785-8fd9-de2824ad0484';
    $pane->panel = 'botright';
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
    $display->panels['botright'][1] = 'new-c3bc4432-dd8c-4785-8fd9-de2824ad0484';
    $pane = new stdClass();
    $pane->pid = 'new-03e7f7f1-7d5b-4db7-acd1-6aa840f27921';
    $pane->panel = 'mid';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '<none>',
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
    $pane->uuid = '03e7f7f1-7d5b-4db7-acd1-6aa840f27921';
    $display->content['new-03e7f7f1-7d5b-4db7-acd1-6aa840f27921'] = $pane;
    $display->panels['mid'][0] = 'new-03e7f7f1-7d5b-4db7-acd1-6aa840f27921';
    $pane = new stdClass();
    $pane->pid = 'new-8397396e-8c1c-480c-81fb-2dcddb2d04e4';
    $pane->panel = 'topleft';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8397396e-8c1c-480c-81fb-2dcddb2d04e4';
    $display->content['new-8397396e-8c1c-480c-81fb-2dcddb2d04e4'] = $pane;
    $display->panels['topleft'][0] = 'new-8397396e-8c1c-480c-81fb-2dcddb2d04e4';
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
