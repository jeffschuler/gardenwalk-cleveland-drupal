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
    'title' => 'GardenWalk Cleveland: July 8 & 9, 2017',
    'body' => '<p>GardenWalk Cleveland is a free, self-guided tour of private gardens, community gardens, and home orchards in neighborhoods of Cleveland, Ohio.</p><p>GardenWalk Cleveland will be held <strong>July 8th and 9th, from 10am to 5pm</strong>, in the following neighborhoods:</p><ul><li><a href="/neighborhood/detroit-shoreway">Detroit Shoreway</a></li><li><a href="/neighborhood/north-collinwood">North Collinwood</a></li><li><a href="/neighborhood/slavic-village">Slavic Village</a></li><li><a href="/neighborhood/west-park">West Park</a></li></ul>',
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
  $pane->pid = 'new-aa108b98-6116-43f4-a555-a871ece318db';
  $pane->panel = 'botleft';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Native Plant Workshops',
    'title' => 'Native Plant Workshops',
    'title_heading' => 'h2',
    'body' => '<p>We are planning a series of workshops educating gardeners about the benefits and uses of native plants in the home landscape. These workshops will be held in conjunction with <a href="https://www.leapbio.org/" target="_blank">LEAP (Lake Erie Allegheny Partnership for Biodiversity)</a> at local venues.</p><p><a href="http://www.leapbio.org/" target="_blank">[[{"fid":"348","view_mode":"default","fields":{"alt":"Lake Erie Allegheny Partnership for Biodiversity (LEAP)","title":"Lake Erie Allegheny Partnership for Biodiversity (LEAP)","height":134,"width":200,"style":"height: 134px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"5","format":"default","alignment":"center","field_file_image_alt_text[und][0][value]":"Lake Erie Allegheny Partnership for Biodiversity (LEAP)","field_file_image_title_text[und][0][value]":"Lake Erie Allegheny Partnership for Biodiversity (LEAP)","external_url":""},"type":"media","field_deltas":{"5":{"alt":"Lake Erie Allegheny Partnership for Biodiversity (LEAP)","title":"Lake Erie Allegheny Partnership for Biodiversity (LEAP)","height":134,"width":200,"style":"height: 134px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"5","format":"default","alignment":"center","field_file_image_alt_text[und][0][value]":"Lake Erie Allegheny Partnership for Biodiversity (LEAP)","field_file_image_title_text[und][0][value]":"Lake Erie Allegheny Partnership for Biodiversity (LEAP)","external_url":""}},"link_text":null,"attributes":{"alt":"Lake Erie Allegheny Partnership for Biodiversity (LEAP)","title":"Lake Erie Allegheny Partnership for Biodiversity (LEAP)","height":134,"width":200,"style":"height: 134px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"5"}}]]</a></p>',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'aa108b98-6116-43f4-a555-a871ece318db';
  $display->content['new-aa108b98-6116-43f4-a555-a871ece318db'] = $pane;
  $display->panels['botleft'][3] = 'new-aa108b98-6116-43f4-a555-a871ece318db';
  $pane = new stdClass();
  $pane->pid = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $pane->panel = 'botleft';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Year of Vibrant Green Space',
    'title' => 'Year of Vibrant Green Space',
    'body' => '<p>2017 is the City of Cleveland’s <a href="http://www.sustainablecleveland.org/yovgs" target="_blank">Celebration Year of Vibrant Green Space</a>.</p><p><a href="http://www.sustainablecleveland.org/yovgs">[[{"fid":"347","view_mode":"default","fields":{"alt":"Sustainable Cleveland 2019","title":"Sustainable Cleveland 2019","height":135,"width":200,"style":"height: 135px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"3","format":"default","alignment":"center","field_file_image_alt_text[und][0][value]":"Sustainable Cleveland 2019","field_file_image_title_text[und][0][value]":"Sustainable Cleveland 2019","external_url":""},"type":"media","field_deltas":{"3":{"alt":"Sustainable Cleveland 2019","title":"Sustainable Cleveland 2019","height":135,"width":200,"style":"height: 135px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"3","format":"default","alignment":"center","field_file_image_alt_text[und][0][value]":"Sustainable Cleveland 2019","field_file_image_title_text[und][0][value]":"Sustainable Cleveland 2019","external_url":""}},"link_text":null,"attributes":{"alt":"Sustainable Cleveland 2019","title":"Sustainable Cleveland 2019","height":135,"width":200,"style":"height: 135px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"3"}}]]</a></p><p>We are proud to be able to promote GardenWalk Cleveland as part of that Celebration Year. Cleveland gardeners have created green spaces that bring together neighbors and sustain the natural beauty of our area.</p><p>&nbsp;</p>',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $display->content['new-7cc637fd-bd62-4210-b14e-bddae13fed3f'] = $pane;
  $display->panels['botleft'][4] = 'new-7cc637fd-bd62-4210-b14e-bddae13fed3f';
  $pane = new stdClass();
  $pane->pid = 'new-46c3f718-eec3-4b5f-9698-ce9b289ed054';
  $pane->panel = 'botmid';
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
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46c3f718-eec3-4b5f-9698-ce9b289ed054';
  $display->content['new-46c3f718-eec3-4b5f-9698-ce9b289ed054'] = $pane;
  $display->panels['botmid'][0] = 'new-46c3f718-eec3-4b5f-9698-ce9b289ed054';
  $pane = new stdClass();
  $pane->pid = 'new-21a944b2-d83d-431f-9610-297853139a85';
  $pane->panel = 'botmid';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Dunham Tavern Museum and Gardens',
    'title' => 'Dunham Tavern Museum and Gardens',
    'title_heading' => 'h2',
    'body' => '<p>Once a stagecoach stop of the Buffalo-Cleveland-Detroit post road, today the Dunham Tavern Museum is the oldest building still standing on its original site in Cleveland. The 1824 home of Rufus and Jane Pratt Dunham in MidTown Cleveland is now a designated Cleveland Landmark. The Museum and its gardens offer a glimpse of history and insight into the lifestyles of early Ohio settlers and travelers.</p><p><a href="/feature/dunham-tavern-museum-and-gardens">[[{"fid":"300","view_mode":"teaser","fields":{"format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"Dunham Tavern Museum and Gardens","field_file_image_title_text[und][0][value]":"Dunham Tavern Museum and Gardens"},"type":"media","field_deltas":{"1":{"format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"Dunham Tavern Museum and Gardens","field_file_image_title_text[und][0][value]":"Dunham Tavern Museum and Gardens"}},"link_text":null,"attributes":{"alt":"Dunham Tavern Museum and Gardens","title":"Dunham Tavern Museum and Gardens","height":165,"width":220,"class":"media-element file-teaser media-wysiwyg-align-center","data-delta":"1"}}]]</a></p><p>Visit <a href="/feature/dunham-tavern-museum-and-gardens">Dunham Tavern Museum and Gardens</a> on GardenWalk on&nbsp;<strong>Sunday, July 9th, ONLY</strong>. <a href="/feature/dunham-tavern-museum-and-gardens">More info and location</a>.</p>',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '21a944b2-d83d-431f-9610-297853139a85';
  $display->content['new-21a944b2-d83d-431f-9610-297853139a85'] = $pane;
  $display->panels['botmid'][1] = 'new-21a944b2-d83d-431f-9610-297853139a85';
  $pane = new stdClass();
  $pane->pid = 'new-31891302-8de3-4534-bee0-778833ceec26';
  $pane->panel = 'botmid';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Boys & Girls Clubs of Cleveland',
    'title' => 'Boys & Girls Clubs of Cleveland',
    'title_heading' => 'h2',
    'body' => '<p>Surprises await those who visit the <a href="/feature/boys-girls-clubs-cleveland">Boys &amp; Girls Clubs of Cleveland</a> site on Broadway Avenue in <a href="/neighborhood/slavic-village">Slavic Village</a>. The property has a half-acre farm, a pollinator garden, 25 newly planted trees and a new interactive Children’s Garden.</p><p><a href="/feature/boys-girls-clubs-cleveland">[[{"fid":"344","view_mode":"teaser","fields":{"format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"Boys &amp; Girls Clubs garden","field_file_image_title_text[und][0][value]":"Boys &amp; Girls Clubs garden"},"type":"media","field_deltas":{"1":{"format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"Boys &amp; Girls Clubs garden","field_file_image_title_text[und][0][value]":"Boys &amp; Girls Clubs garden"}},"link_text":null,"attributes":{"alt":"Boys &amp; Girls Clubs garden","title":"Boys &amp; Girls Clubs garden","height":124,"width":220,"class":"media-element file-teaser media-wysiwyg-align-center","data-delta":"1"}}]]</a></p><p>All are maintained by teens in BGCC’s horticulture program, a work-study program for high school students. The program teaches work skills to inner-city youth and inspires them to reach for success.</p><p>Visit the&nbsp;<a href="/feature/boys-girls-clubs-cleveland">Boys &amp; Girls Clubs of Cleveland</a>&nbsp;during GardenWalk in the&nbsp;<a href="/neighborhood/slavic-village">Slavic Village</a>&nbsp;neighborhood.</p>',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '31891302-8de3-4534-bee0-778833ceec26';
  $display->content['new-31891302-8de3-4534-bee0-778833ceec26'] = $pane;
  $display->panels['botmid'][2] = 'new-31891302-8de3-4534-bee0-778833ceec26';
  $pane = new stdClass();
  $pane->pid = 'new-fe2d12cc-7ec2-4110-b4ed-e36d56047d7b';
  $pane->panel = 'botmid';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Collinwood Community Potluck',
    'title' => 'Collinwood Community Potluck',
    'title_heading' => 'h2',
    'body' => '<p>What better way to spend a Saturday in summer than by sharing a good plate of food next to new, old,&nbsp;and new-to-you neighbors with a view of the lake?</p><p style="text-align: center;"><a href="/feature/collinwood-community-potluck">[[{"fid":"342","view_mode":"teaser","fields":{"alt":"Potluck","height":179,"width":280,"style":"width: 280px; height: 179px;","class":"media-element file-default","data-delta":"1","format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"Potluck","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"alt":"Potluck","height":179,"width":280,"style":"width: 280px; height: 179px;","class":"media-element file-default","data-delta":"1","format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"Potluck","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Potluck","height":179,"width":280,"style":"width: 280px; height: 179px;","class":"media-element file-teaser media-wysiwyg-align-center","data-delta":"1"}}]]</a></p><p>Start brainstorming your best recipes for the first <a href="/feature/collinwood-community-potluck">Collinwood Community Potluck</a>: <strong>July 8th from 4-8pm</strong> at Euclid Beach Park. <strong>Free</strong> and open to all --&nbsp;with or without a dish.</p><p>Find out more on the <a href="/neighborhood/north-collinwood">North Collinwood neighborhood page</a>.</p>',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'fe2d12cc-7ec2-4110-b4ed-e36d56047d7b';
  $display->content['new-fe2d12cc-7ec2-4110-b4ed-e36d56047d7b'] = $pane;
  $display->panels['botmid'][3] = 'new-fe2d12cc-7ec2-4110-b4ed-e36d56047d7b';
  $pane = new stdClass();
  $pane->pid = 'new-d75263ec-ebe1-4355-a5ff-8071516f69f9';
  $pane->panel = 'botright';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Bay Branch Farm',
    'title' => 'Bay Branch Farm',
    'title_heading' => 'h2',
    'body' => '<p><a href="/feature/bay-branch-farm">Bay Branch Farm</a> is an urban vegetable farm with locations in Lakewood and Cleveland. The Cleveland site features a 12’ x 28’ hoophouse growing tomatoes and cucumbers, field crops and fruit trees, and some permaculture design, including “hugelkultur” beds and an herb spiral. Produce grown on the farm is sold at the Lakewood Farmer’s Market and to area restaurants.</p><p><a href="/feature/bay-branch-farm">[[{"fid":"363","view_mode":"teaser","fields":{"format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"Bay Branch Farm - inside the hoop house","field_file_image_title_text[und][0][value]":"Bay Branch Farm - inside the hoop house"},"type":"media","field_deltas":{"1":{"format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"Bay Branch Farm - inside the hoop house","field_file_image_title_text[und][0][value]":"Bay Branch Farm - inside the hoop house"}},"link_text":null,"attributes":{"alt":"Bay Branch Farm - inside the hoop house","title":"Bay Branch Farm - inside the hoop house","height":220,"width":165,"class":"media-element file-teaser media-wysiwyg-align-center","data-delta":"1"}}]]</a></p><p>Visit <a href="/feature/bay-branch-farm">Bay Branch Farm</a>&nbsp;during GardenWalk in the <a href="/neighborhood/west-park">West Park</a>&nbsp;neighborhood.</p>',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd75263ec-ebe1-4355-a5ff-8071516f69f9';
  $display->content['new-d75263ec-ebe1-4355-a5ff-8071516f69f9'] = $pane;
  $display->panels['botright'][0] = 'new-d75263ec-ebe1-4355-a5ff-8071516f69f9';
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
    'body' => '<p>Support GardenWalk Cleveland by entering this year\'s raffle. Buy tickets to <strong>win a wheelbarrow-load of gardening supplies</strong>. Tickets will be available at each neighborhood headquarters. Winner will be notified within a week of the Walk.</p><p>Consider donating some gardening supplies. <a href="/contact">Let us know</a> if you want to help with this fun raffle project.</p><p style="text-align: center;"><a href="/feature/dunham-tavern-museum-and-gardens">[[{"fid":"338","view_mode":"default","fields":{"alt":"Jonathan Gauchat - Raffle Winner","height":267,"width":200,"style":"height: 267px; width: 200px;","class":"media-element file-default","data-delta":"1","format":"default","alignment":"center","field_file_image_alt_text[und][0][value]":"Jonathan Gauchat - Raffle Winner","field_file_image_title_text[und][0][value]":false},"type":"media","field_deltas":{"1":{"alt":"Jonathan Gauchat - Raffle Winner","height":267,"width":200,"style":"height: 267px; width: 200px;","class":"media-element file-default","data-delta":"1","format":"default","alignment":"center","field_file_image_alt_text[und][0][value]":"Jonathan Gauchat - Raffle Winner","field_file_image_title_text[und][0][value]":false}},"link_text":null,"attributes":{"alt":"Jonathan Gauchat - Raffle Winner","height":267,"width":200,"style":"height: 267px; width: 200px;","class":"media-element file-default media-wysiwyg-align-center","data-delta":"1"}}]]</a></p><p>Jonathan Gauchat of Shaker Heights was the winner of the GardenWalk Cleveland 2015 raffle!</p>',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
  $display->content['new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7'] = $pane;
  $display->panels['botright'][1] = 'new-f4d239e7-93f5-4ade-bc81-70d9e0dc6ed7';
  $pane = new stdClass();
  $pane->pid = 'new-8bb00bbe-9f93-4318-a3d2-e1f41f11660b';
  $pane->panel = 'botright';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'David Simpson Hospice House Vista Walk and Tribute Gardens',
    'title' => 'David Simpson Hospice House Vista Walk and Tribute Gardens',
    'title_heading' => 'h2',
    'body' => '<p>The grounds of the <a href="/feature/david-simpson-hospice-house-vista-walk-and-tribute-gardens">David Simpson Hospice House</a>&nbsp;are a place of solace and reflection. More than a dozen gardens, named in tribute of friends of Hospice of the Western Reserve and in memory of loved ones, are open to all year-round.</p><p>Each garden is as unique as the individual, couple or family for whom it is named; each one a reflection of a special relationship.</p><p><a href="/feature/david-simpson-hospice-house-vista-walk-and-tribute-gardens">[[{"fid":"361","view_mode":"teaser","fields":{"alt":"David Simpson Hospice House - Hamilton Garden","title":"David Simpson Hospice House - Hamilton Garden","height":531,"width":800,"class":"media-element file-wysiwyg media-wysiwyg-align-center","data-delta":"1","format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"David Simpson Hospice House - Hamilton Garden","field_file_image_title_text[und][0][value]":"David Simpson Hospice House - Hamilton Garden"},"type":"media","field_deltas":{"1":{"alt":"David Simpson Hospice House - Hamilton Garden","title":"David Simpson Hospice House - Hamilton Garden","height":531,"width":800,"class":"media-element file-wysiwyg media-wysiwyg-align-center","data-delta":"1","format":"teaser","alignment":"center","field_file_image_alt_text[und][0][value]":"David Simpson Hospice House - Hamilton Garden","field_file_image_title_text[und][0][value]":"David Simpson Hospice House - Hamilton Garden"}},"link_text":null,"attributes":{"alt":"David Simpson Hospice House - Hamilton Garden","title":"David Simpson Hospice House - Hamilton Garden","height":146,"width":220,"class":"media-element file-teaser media-wysiwyg-align-center","data-delta":"1"}}]]</a></p><p>Visit the&nbsp;<a href="/feature/david-simpson-hospice-house-vista-walk-and-tribute-gardens">David Simpson Hospice House Vista Walk and Tribute Gardens</a>&nbsp;during GardenWalk in the&nbsp;<a href="/neighborhood/north-collinwood">North Collinwood neighborhood</a>.</p>',
    'format' => '2',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8bb00bbe-9f93-4318-a3d2-e1f41f11660b';
  $display->content['new-8bb00bbe-9f93-4318-a3d2-e1f41f11660b'] = $pane;
  $display->panels['botright'][2] = 'new-8bb00bbe-9f93-4318-a3d2-e1f41f11660b';
  $pane = new stdClass();
  $pane->pid = 'new-ac57a59c-8681-4944-9699-bf95de2f1ef5';
  $pane->panel = 'botright';
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
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = 'ac57a59c-8681-4944-9699-bf95de2f1ef5';
  $display->content['new-ac57a59c-8681-4944-9699-bf95de2f1ef5'] = $pane;
  $display->panels['botright'][3] = 'new-ac57a59c-8681-4944-9699-bf95de2f1ef5';
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
    'body' => '<p><br /><br />GardenWalk Cleveland is a free, self-guided tour of private gardens, community gardens, and home orchards in several neighborhoods of Cleveland, Ohio.</p><p>GardenWalk 2017&nbsp;will be held on July 8th &amp; 9th.</p>',
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
