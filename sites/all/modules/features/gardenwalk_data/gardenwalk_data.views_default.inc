<?php
/**
 * @file
 * gardenwalk_data.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gardenwalk_data_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'guide_geojson';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Guide GeoJSON';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Urban Farms GeoJSON New';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_geojson';
  $handler->display->display_options['style_options']['data_source']['value'] = 'latlon';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'latitude';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'longitude';
  $handler->display->display_options['style_options']['data_source']['wkt'] = 'field_map_marker_label';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'title';
  $handler->display->display_options['style_options']['data_source']['description_field'] = 'field_map_marker_label';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Map Marker Label */
  $handler->display->display_options['fields']['field_map_marker_label']['id'] = 'field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['table'] = 'field_data_field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['field'] = 'field_map_marker_label';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Garden Type */
  $handler->display->display_options['fields']['field_garden_type']['id'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['field'] = 'field_garden_type';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'urban_farm' => 'urban_farm',
  );

  /* Display: Neighborhood GeoJSON */
  $handler = $view->new_display('page', 'Neighborhood GeoJSON', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Neighborhood GeoJSON';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'neighborhood queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'neighborhood_queues' => 'neighborhood_queues',
    'image_rotator_queue' => 0,
    'printable_maps' => 0,
  );
  /* Relationship: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['relationships']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['relationships']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['relationships']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['relationships']['field_neighborhood_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['arguments']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate_options']['vocabularies'] = array(
    'neighborhood' => 'neighborhood',
  );
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid_1']['id'] = 'field_gardenwalk_year_tid_1';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid_1']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid_1']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid_1']['value'] = array(
    49 => '49',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid_1']['expose']['operator_id'] = 'field_gardenwalk_year_tid_1_op';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid_1']['expose']['label'] = 'Year (field_gardenwalk_year)';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid_1']['expose']['operator'] = 'field_gardenwalk_year_tid_1_op';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid_1']['expose']['identifier'] = 'field_gardenwalk_year_tid_1';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid_1']['vocabulary'] = 'year';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'garden' => 'garden',
    'headquarters' => 'headquarters',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['group'] = 2;
  $handler->display->display_options['path'] = 'neighborhood/%/geojson';
  $export['guide_geojson'] = $view;

  $view = new view();
  $view->name = 'guide_lists';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Guide Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Guide List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Field: Taxonomy term: Map Label Prefix */
  $handler->display->display_options['fields']['field_map_label_prefix']['id'] = 'field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['table'] = 'field_data_field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['field'] = 'field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['label'] = 'Label';
  $handler->display->display_options['fields']['field_map_label_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_label_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_label_prefix']['type'] = 'computed_field_default';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_map_label']['id'] = 'field_map_label';
  $handler->display->display_options['fields']['field_map_label']['table'] = 'field_data_field_map_label';
  $handler->display->display_options['fields']['field_map_label']['field'] = 'field_map_label';
  $handler->display->display_options['fields']['field_map_label']['label'] = '';
  $handler->display->display_options['fields']['field_map_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_label']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Label';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_map_label_prefix][field_map_label]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
    'headquarters' => 'headquarters',
    'reimagining_project' => 'reimagining_project',
    'special_feature' => 'special_feature',
    'urban_farm' => 'urban_farm',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = '0';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by Neighborhood';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'neighborhood';
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    21 => '21',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';

  /* Display: Neighborhood Lists */
  $handler = $view->new_display('page', 'Neighborhood Lists', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Guide List - Neighborhoods';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_map_label_prefix' => 'field_map_label_prefix',
    'position' => 'position',
    'field_neighborhood' => 'field_neighborhood',
    'type' => 'type',
    'title' => 'title',
    'street' => 'street',
  );
  $handler->display->display_options['style_options']['default'] = 'position';
  $handler->display->display_options['style_options']['info'] = array(
    'field_map_label_prefix' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'position' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_neighborhood' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'street' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['relationships']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['relationships']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['relationships']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['relationships']['field_neighborhood_tid']['required'] = TRUE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'neighborhood_queues' => 'neighborhood_queues',
    'image_rotator_queue' => 0,
    'printable_maps' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Map Marker Label */
  $handler->display->display_options['fields']['field_map_marker_label']['id'] = 'field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['table'] = 'field_data_field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['field'] = 'field_map_marker_label';
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by Neighborhood';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'neighborhood';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
    'headquarters' => 'headquarters',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    49 => '49',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  $handler->display->display_options['path'] = 'guide-list-neighborhoods';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Neighborhoods';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-guide-lists';

  /* Display: Gardens Lists */
  $handler = $view->new_display('page', 'Gardens Lists', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Guide List - Gardens';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Map Marker Label */
  $handler->display->display_options['fields']['field_map_marker_label']['id'] = 'field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['table'] = 'field_data_field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['field'] = 'field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['label'] = 'Label';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Garden Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Description';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = '0';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by Neighborhood';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'neighborhood';
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    49 => '49',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  $handler->display->display_options['path'] = 'guide-list-gardens';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Gardens';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-guide-lists';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Community Gardens List */
  $handler = $view->new_display('page', 'Community Gardens List', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Guide List - Community Gardens';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Label';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_map_label_prefix][field_map_label]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'community_garden' => 'community_garden',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'guide-list-community-gardens';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Community Gardens';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-guide-lists';

  /* Display: Reimagining List */
  $handler = $view->new_display('page', 'Reimagining List', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Guide List - Reimagining';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_map_label']['id'] = 'field_map_label';
  $handler->display->display_options['fields']['field_map_label']['table'] = 'field_data_field_map_label';
  $handler->display->display_options['fields']['field_map_label']['field'] = 'field_map_label';
  $handler->display->display_options['fields']['field_map_label']['label'] = '';
  $handler->display->display_options['fields']['field_map_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_label']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Map Label Prefix */
  $handler->display->display_options['fields']['field_map_label_prefix']['id'] = 'field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['table'] = 'field_data_field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['field'] = 'field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['label'] = 'Label';
  $handler->display->display_options['fields']['field_map_label_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_label_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_label_prefix']['type'] = 'computed_field_default';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Label';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_map_label_prefix][field_map_label]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'reimagining_project' => 'reimagining_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'guide-list-reimagining';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Reimagining';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-guide-lists';

  /* Display: Urban Farms List */
  $handler = $view->new_display('page', 'Urban Farms List', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Guide List - Urban Farms';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_map_label']['id'] = 'field_map_label';
  $handler->display->display_options['fields']['field_map_label']['table'] = 'field_data_field_map_label';
  $handler->display->display_options['fields']['field_map_label']['field'] = 'field_map_label';
  $handler->display->display_options['fields']['field_map_label']['label'] = '';
  $handler->display->display_options['fields']['field_map_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_label']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Map Label Prefix */
  $handler->display->display_options['fields']['field_map_label_prefix']['id'] = 'field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['table'] = 'field_data_field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['field'] = 'field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['label'] = 'Label';
  $handler->display->display_options['fields']['field_map_label_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_label_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_label_prefix']['type'] = 'computed_field_default';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Label';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_map_label_prefix][field_map_label]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'urban_farm' => 'urban_farm',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'guide-list-urban-farms';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Urban Farms';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-guide-lists';

  /* Display: Special Features List */
  $handler = $view->new_display('page', 'Special Features List', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Guide List - Special Features';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'special_feature' => 'special_feature',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'guide-list-special-features';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Special Features';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-guide-lists';
  $export['guide_lists'] = $view;

  $view = new view();
  $view->name = 'guide_maps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Guide KML';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'KML';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Taxonomy term: Map Label Prefix */
  $handler->display->display_options['fields']['field_map_label_prefix']['id'] = 'field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['table'] = 'field_data_field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['field'] = 'field_map_label_prefix';
  $handler->display->display_options['fields']['field_map_label_prefix']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_map_label_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_map_label_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_label_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_label_prefix']['type'] = 'computed_field_default';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_map_label_prefix][field_map_label]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Sort criterion: Taxonomy term: Map Label Prefix (field_map_label_prefix) */
  $handler->display->display_options['sorts']['field_map_label_prefix_value']['id'] = 'field_map_label_prefix_value';
  $handler->display->display_options['sorts']['field_map_label_prefix_value']['table'] = 'field_data_field_map_label_prefix';
  $handler->display->display_options['sorts']['field_map_label_prefix_value']['field'] = 'field_map_label_prefix_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'urban_farm' => 'urban_farm',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Neighborhood KML */
  $handler = $view->new_display('feed', 'Neighborhood KML', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Neighborhood KML';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'nothing';
  $handler->display->display_options['style_options']['fields']['description'] = 'type';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'longitude';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'latitude';
  $handler->display->display_options['style_options']['filename'] = 'neighborhood';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'neighborhood';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'neighborhood' => 'neighborhood',
    'attractions' => 0,
    'sponsorship_level' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = 'Neighborhood: %1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '7';
  $handler->display->display_options['arguments']['name']['case'] = 'ucwords';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'garden' => 'garden',
    'headquarters' => 'headquarters',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'neighborhood/%/kml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Urban Farms KML */
  $handler = $view->new_display('feed', 'Urban Farms KML', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Urban Farms KML';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'nothing';
  $handler->display->display_options['style_options']['fields']['description'] = 'type';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'longitude';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'latitude';
  $handler->display->display_options['style_options']['filename'] = 'urban-farms';
  $handler->display->display_options['path'] = 'urban-farms.kml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Special Features KML */
  $handler = $view->new_display('feed', 'Special Features KML', 'feed_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Special Features KML';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'nothing';
  $handler->display->display_options['style_options']['fields']['description'] = 'type';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'longitude';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'latitude';
  $handler->display->display_options['style_options']['filename'] = 'special-features';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'special_feature' => 'special_feature',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'special-features.kml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Reimagining KML */
  $handler = $view->new_display('feed', 'Reimagining KML', 'feed_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reimagining KML';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'nothing';
  $handler->display->display_options['style_options']['fields']['description'] = 'type';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'longitude';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'latitude';
  $handler->display->display_options['style_options']['filename'] = 'reimagining';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'reimagining_project' => 'reimagining_project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content: Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['path'] = 'reimagining.kml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Community Gardens KML */
  $handler = $view->new_display('feed', 'Community Gardens KML', 'feed_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Community Gardens KML';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'kml_feed';
  $handler->display->display_options['style_options']['fields']['name'] = 'nothing';
  $handler->display->display_options['style_options']['fields']['description'] = 'type';
  $handler->display->display_options['style_options']['fields']['longitude'] = 'longitude';
  $handler->display->display_options['style_options']['fields']['latitude'] = 'latitude';
  $handler->display->display_options['style_options']['filename'] = 'community-gardens';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'community_garden' => 'community_garden',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content: Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['path'] = 'community-gardens.kml';
  $handler->display->display_options['sitename_title'] = 0;
  $export['guide_maps'] = $view;

  $view = new view();
  $view->name = 'guide_xls';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Guide XLS/CSV';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Guide List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Garden Type */
  $handler->display->display_options['fields']['field_garden_type']['id'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['field'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['label'] = 'Type';
  /* Field: Content: Map Marker Label */
  $handler->display->display_options['fields']['field_map_marker_label']['id'] = 'field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['table'] = 'field_data_field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['field'] = 'field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['label'] = 'Marker';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Garden/Location Name */
  $handler->display->display_options['fields']['field_garden_name']['id'] = 'field_garden_name';
  $handler->display->display_options['fields']['field_garden_name']['table'] = 'field_data_field_garden_name';
  $handler->display->display_options['fields']['field_garden_name']['field'] = 'field_garden_name';
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['style'] = 'street';
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street_1']['id'] = 'street_1';
  $handler->display->display_options['fields']['street_1']['table'] = 'location';
  $handler->display->display_options['fields']['street_1']['field'] = 'street';
  $handler->display->display_options['fields']['street_1']['label'] = 'Street 2';
  $handler->display->display_options['fields']['street_1']['style'] = 'additional';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Garden Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['text'] = '[field_description][field_description-format]';
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = TRUE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    49 => '49',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
    'headquarters' => 'headquarters',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['group'] = 2;

  /* Display: Neighborhood XLS */
  $handler = $view->new_display('views_data_export', 'Neighborhood XLS', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Neighborhood XLS';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'neighborhood-%1-value.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'neighborhood_queues' => 'neighborhood_queues',
    'image_rotator_queue' => 0,
    'printable_maps' => 0,
  );
  /* Relationship: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['relationships']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['relationships']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['relationships']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['arguments']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate_options']['vocabularies'] = array(
    'neighborhood' => 'neighborhood',
  );
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['path'] = 'neighborhood/%/xls';
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = '0';

  /* Display: Neighborhood CSV */
  $handler = $view->new_display('views_data_export', 'Neighborhood CSV', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Neighborhood CSV';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'neighborhood-%1-value.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'neighborhood_queues' => 'neighborhood_queues',
    'image_rotator_queue' => 0,
    'printable_maps' => 0,
  );
  /* Relationship: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['relationships']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['relationships']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['relationships']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['arguments']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate_options']['vocabularies'] = array(
    'neighborhood' => 'neighborhood',
  );
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['path'] = 'neighborhood/%/csv';
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = '0';
  $export['guide_xls'] = $view;

  return $export;
}
