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
  $display->uuid = '2bfe24e7-51d5-485e-abea-2c1f0b2901e4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a5fbc315-078c-4bf2-b4a2-ea762da664d5';
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
    $pane->uuid = 'a5fbc315-078c-4bf2-b4a2-ea762da664d5';
    $display->content['new-a5fbc315-078c-4bf2-b4a2-ea762da664d5'] = $pane;
    $display->panels['botleft'][0] = 'new-a5fbc315-078c-4bf2-b4a2-ea762da664d5';
    $pane = new stdClass();
    $pane->pid = 'new-5c43893f-97f8-4e1c-9d05-bbb579ab5919';
    $pane->panel = 'botleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'How to do the GardenWalk',
      'title' => 'How to do the GardenWalk',
      'body' => '<ol><li><span style="font-size: 12px;">Get a GardenWalk Guide: Beginning&nbsp;July 1 &nbsp;free Guides, with maps of each neighborhood&#39;s gardens,</span><span style="font-size: 12px;">&nbsp;will be available at all&nbsp;<a href="http://www.petittigardencenter.com/index.php/locations" target="_blank">Petitti Garden Centers</a>&nbsp;and <a href="http://www.davesmarkets.com/locations.shtml" target="_blank">Dave&rsquo;s Markets</a>.</span></li><li><a href="http://www.gardenwalkcleveland.org/guide">Choose a neighborhood</a>&nbsp;to begin in.</li><li>Go to that neighborhood&#39;s Headquarters on Saturday or Sunday to check-in (optional.) Guides will also be available at each Headquarters.</li><li>Explore...</li></ol><p>Check out the <a href="/faq">FAQ</a> for more...</p>',
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
    $pane->uuid = '5c43893f-97f8-4e1c-9d05-bbb579ab5919';
    $display->content['new-5c43893f-97f8-4e1c-9d05-bbb579ab5919'] = $pane;
    $display->panels['botleft'][1] = 'new-5c43893f-97f8-4e1c-9d05-bbb579ab5919';
    $pane = new stdClass();
    $pane->pid = 'new-8e1bcaeb-4229-4f5c-a8cd-ee1be459d329';
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
    $pane->uuid = '8e1bcaeb-4229-4f5c-a8cd-ee1be459d329';
    $display->content['new-8e1bcaeb-4229-4f5c-a8cd-ee1be459d329'] = $pane;
    $display->panels['botleft'][2] = 'new-8e1bcaeb-4229-4f5c-a8cd-ee1be459d329';
    $pane = new stdClass();
    $pane->pid = 'new-1346c605-dd27-4f4e-b787-b1b97149fe5a';
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
    $pane->uuid = '1346c605-dd27-4f4e-b787-b1b97149fe5a';
    $display->content['new-1346c605-dd27-4f4e-b787-b1b97149fe5a'] = $pane;
    $display->panels['botmid'][0] = 'new-1346c605-dd27-4f4e-b787-b1b97149fe5a';
    $pane = new stdClass();
    $pane->pid = 'new-d2ac393b-b115-430d-96bf-097cce472b10';
    $pane->panel = 'botmid';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Dunham Tavern',
      'title' => 'Visit the Dunham Tavern Museum and Gardens during GardenWalk',
      'body' => '<p><a href="/dunham-tavern"><img alt="Dunham Tavern Museum" src="/sites/default/files/styles/medium/public/images/page/dtm.gif" style="width: 220px; height: 112px;" /></a></p><p>Saturday and Sunday of GardenWalk, Dunham Tavern&nbsp;Gardens will be open from 11am-5pm (and the Museum from 12pm-4pm) with&nbsp;<strong>Master Gardeners on site from 12pm-2pm</strong>.</p><p>Dunham Tavern Museum and Gardens are at:<br /><strong>6709 Euclid Avenue, Cleveland, OH 44103</strong></p><p><a href="/dunham-tavern">More info and map...</a></p>',
      'format' => '2',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd2ac393b-b115-430d-96bf-097cce472b10';
    $display->content['new-d2ac393b-b115-430d-96bf-097cce472b10'] = $pane;
    $display->panels['botmid'][1] = 'new-d2ac393b-b115-430d-96bf-097cce472b10';
    $pane = new stdClass();
    $pane->pid = 'new-65b4712a-6acc-4e39-944e-e3bd4a8f45a7';
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
    $pane->uuid = '65b4712a-6acc-4e39-944e-e3bd4a8f45a7';
    $display->content['new-65b4712a-6acc-4e39-944e-e3bd4a8f45a7'] = $pane;
    $display->panels['botmid'][2] = 'new-65b4712a-6acc-4e39-944e-e3bd4a8f45a7';
    $pane = new stdClass();
    $pane->pid = 'new-f99d3714-86ca-41ad-b9e8-8b084320ce11';
    $pane->panel = 'botright';
    $pane->type = 'views';
    $pane->subtype = 'printable_maps';
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
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
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
    $pane->uuid = 'f99d3714-86ca-41ad-b9e8-8b084320ce11';
    $display->content['new-f99d3714-86ca-41ad-b9e8-8b084320ce11'] = $pane;
    $display->panels['botright'][0] = 'new-f99d3714-86ca-41ad-b9e8-8b084320ce11';
    $pane = new stdClass();
    $pane->pid = 'new-d4d8e5cc-c143-4f06-998d-8943dd3c746b';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd4d8e5cc-c143-4f06-998d-8943dd3c746b';
    $display->content['new-d4d8e5cc-c143-4f06-998d-8943dd3c746b'] = $pane;
    $display->panels['botright'][1] = 'new-d4d8e5cc-c143-4f06-998d-8943dd3c746b';
    $pane = new stdClass();
    $pane->pid = 'new-084de788-d6ac-402d-b20c-636aa06a0e5a';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '084de788-d6ac-402d-b20c-636aa06a0e5a';
    $display->content['new-084de788-d6ac-402d-b20c-636aa06a0e5a'] = $pane;
    $display->panels['botright'][2] = 'new-084de788-d6ac-402d-b20c-636aa06a0e5a';
    $pane = new stdClass();
    $pane->pid = 'new-7ad0bdcc-2dd7-4dd2-aef8-e1536bc0f40c';
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
    $pane->uuid = '7ad0bdcc-2dd7-4dd2-aef8-e1536bc0f40c';
    $display->content['new-7ad0bdcc-2dd7-4dd2-aef8-e1536bc0f40c'] = $pane;
    $display->panels['mid'][0] = 'new-7ad0bdcc-2dd7-4dd2-aef8-e1536bc0f40c';
    $pane = new stdClass();
    $pane->pid = 'new-3aa91c8c-bbd0-4782-9113-479050c22db3';
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
    $pane->uuid = '3aa91c8c-bbd0-4782-9113-479050c22db3';
    $display->content['new-3aa91c8c-bbd0-4782-9113-479050c22db3'] = $pane;
    $display->panels['topleft'][0] = 'new-3aa91c8c-bbd0-4782-9113-479050c22db3';
    $pane = new stdClass();
    $pane->pid = 'new-6a703418-9e1e-4ea0-9cd3-073e1623d7c8';
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
    $pane->uuid = '6a703418-9e1e-4ea0-9cd3-073e1623d7c8';
    $display->content['new-6a703418-9e1e-4ea0-9cd3-073e1623d7c8'] = $pane;
    $display->panels['topright'][0] = 'new-6a703418-9e1e-4ea0-9cd3-073e1623d7c8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a5fbc315-078c-4bf2-b4a2-ea762da664d5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
