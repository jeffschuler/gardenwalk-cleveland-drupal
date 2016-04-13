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
      'title' => 'News',
      'body' => '<p>GardenWalk Cleveland is a free, self-guided tour of gardens, urban farms, vineyards and orchards in several neighborhoods of Cleveland, Ohio.<br />GardenWalk Cleveland will be back in July 2017.<br />In 2016&nbsp; we are planning a series of workshops educating gardeners about the benefit and use of native plants. These workshops will be held in conjunction with LEAP (The Lake Erie Allegheny Partnership for Biodiversity) in GardenWalk neighborhoods all over Cleveland.&nbsp;</p><p><strong>Watch for Cyril&#39;s Gardening Through the Seasons </strong>on GardenWalk Cleveland FaceBook Page.<br />Visit Cyril&#39;s amazing gardens in March as he prepares the beds, prunes the trees, and gets ready to plant.<br />Follow along as we document WHAT, WHEN, and WHY Cyril does chores in his gardens.<br />Go to <a href="https://www.facebook.com/gardenwalk.cleveland/">FaceBook GardenWalk Cleveland</a> for the latest news.</p><p>&nbsp;</p>',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '26103756-43f7-4c7b-a86c-29d2bf63d45d';
    $display->content['new-26103756-43f7-4c7b-a86c-29d2bf63d45d'] = $pane;
    $display->panels['botleft'][2] = 'new-26103756-43f7-4c7b-a86c-29d2bf63d45d';
    $pane = new stdClass();
    $pane->pid = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
    $pane->panel = 'botmid';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'How to do the GardenWalk',
      'title' => 'Spring Plant Sale 2016',
      'body' => '<p>Here&#39;s your chance to help support GardenWalk Cleveland by pre-ordering plants from our annual spring plant sale. &nbsp;This plant sale helps provide financial support for producing a free tour of over 100 gardens, urban farms, vineyards and orchards in the city of Cleveland. &nbsp;The next walk will be held in July, 2017.<br /><br /><strong>Please use the attached form to order your flowers. &nbsp;Orders are due by May 4, 2016.&nbsp;</strong>Wondering what&nbsp;these flowers look like? &nbsp;We&#39;ve attached photos of the annuals as well as pictures of the combination plant groupings.&nbsp;Flowers are from Middle Ridge Gardens Ltd. in Madison, Ohio. &nbsp;(Due to greenhouse availability, substitutions of equal or greater value may be made.) &nbsp;</p><ul><li><a href="http://gardenwalkcleveland.us5.list-manage1.com/track/click?u=f66116018cd77d438e4542f05&amp;id=9d26a45f09&amp;e=00c5a5d0d7" target="_blank">Order Form</a></li><li><a href="http://gardenwalkcleveland.us5.list-manage1.com/track/click?u=f66116018cd77d438e4542f05&amp;id=eb938d8de6&amp;e=00c5a5d0d7" target="_blank">Pictures of combination groupings of flowers</a></li><li><a href="http://gardenwalkcleveland.us5.list-manage.com/track/click?u=f66116018cd77d438e4542f05&amp;id=43accfd6e4&amp;e=00c5a5d0d7" target="_blank">Photos of all the flowers</a></li></ul><p><strong>Plant pickup is Saturday, May 14, 2016 &nbsp;</strong>10am - 4 pm at 12541 Cedar Road, Cleveland Heights, OH. &nbsp;Park in the Cedar Hill Baptist Church lot. &nbsp;(Look for signs on the north side of Cedar.) &nbsp;<br /><br /><strong>Mail Orders</strong> - with payment - to:&nbsp;<br />GardenWalk,&nbsp;&nbsp;2660 Derbyshire Road, Cleveland Heights, OH 44106&nbsp;<br /><br /><strong>Checks can be made payable to</strong>: &nbsp;CNP (Cleveland Neighborhood Progress) and write &quot;GardenWalk&quot; in the memo line. &nbsp;Prices include sales tax.&nbsp;Payment is due with your order.<br /><br />Thank you for your continued support of GardenWalk Cleveland!!&nbsp;</p>',
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
    $pane->locks = array();
    $pane->uuid = '7cc637fd-bd62-4210-b14e-bddae13fed3f';
    $display->content['new-7cc637fd-bd62-4210-b14e-bddae13fed3f'] = $pane;
    $display->panels['botmid'][0] = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
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
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'ac57a59c-8681-4944-9699-bf95de2f1ef5';
    $display->content['new-ac57a59c-8681-4944-9699-bf95de2f1ef5'] = $pane;
    $display->panels['botmid'][1] = 'new-ac57a59c-8681-4944-9699-bf95de2f1ef5';
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
      'body' => '<p>Some of GardenWalk neighborhoods have been:</p><p>Detroit Shoreway<br />Larchmere<br />Old Brooklyn<br />Slavic Village<br />West Park</p>',
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
      'admin_title' => '2015 GardenWalk Raffle Winner',
      'title' => 'Meet the Winner of the 2015 Raffle',
      'body' => '<h3><a href="/dunham-tavern"><img alt="Jonathan Gauchat-Raffle Winner" src="http://www.gardenwalkcleveland.org/sites/default/files/jonathan_gauchat_gwc200.jpg" style="width: 200px; height: 267px;" /></a></h3><p><font face="Calibri" style="color: rgb(0, 0, 0); font-size: 14px;">Jonathan Gauchat is the winner of the GardenWalk Cleveland 2015 raffle! Jonathan won a wheelbarrow filled with gardening supplies, and a one-year family membership to the Cleveland Botanical Gardens.&nbsp; </font></p><p><font face="Calibri" style="color: rgb(0, 0, 0); font-size: 14px;">Gauchat grew&nbsp;up in Shaker Heights and graduated from Shaker Heights High school&nbsp;in 2014</font><font face="Calibri" style="color: rgb(0, 0, 0); font-size: 14px;">.&nbsp;He is a first year&nbsp;student at the Culinary School at Cuyahoga Community College. He&nbsp;is&nbsp; interested in learning about the relationship between plants and the food we eat. </font></p><p><font face="Calibri" style="color: rgb(0, 0, 0); font-size: 14px;">Jonathan&#39;s mother and two brothers live in Shaker Heights, his father passed away two years ago. He credits his mother with instilling in him an interest in growing food as she always had a vegetable garden which provided the family with fresh vegetables each year. He now lives in the Buckeye neighborhood and works in the community garden next door to his house.</font></p><p>Photo: Jan Kious</p>',
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
    $pane->pid = 'new-40823a77-73a1-4342-97cf-a346de034a4e';
    $pane->panel = 'topleft';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '<no title>',
      'body' => '<p>GardenWalk Cleveland is a free, self-guided tour of gardens, urban farms, vineyards and orchards in several neighborhoods of Cleveland, Ohio.</p><p>Check out what&#39;s new in 2016...</p>',
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
