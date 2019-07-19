<?php

/**
 * @file
 * gardenwalk_gardens.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gardenwalk_gardens_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gardens';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Gardens';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'GardenWalk Gardens';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No gardens yet...';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Content: Gardener Name */
  $handler->display->display_options['fields']['field_gardener_name']['id'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['table'] = 'field_data_field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['field'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['label'] = '';
  $handler->display->display_options['fields']['field_gardener_name']['element_label_colon'] = FALSE;
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['label'] = '';
  $handler->display->display_options['fields']['field_neighborhood']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
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
  /* Contextual filter: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['arguments']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['title'] = 'Gardens in %1';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Garden Type (field_garden_type) */
  $handler->display->display_options['filters']['field_garden_type_value']['id'] = 'field_garden_type_value';
  $handler->display->display_options['filters']['field_garden_type_value']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['filters']['field_garden_type_value']['field'] = 'field_garden_type_value';
  $handler->display->display_options['filters']['field_garden_type_value']['value'] = array(
    'Private (Home/Business) Garden' => 'Private (Home/Business) Garden',
  );
  $handler->display->display_options['filters']['field_garden_type_value']['group'] = 1;
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Manage Gardens Page */
  $handler = $view->new_display('page', 'Manage Gardens Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Gardens';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any garden content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'workflow-[state]';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_map_marker_label' => 'field_map_marker_label',
    'nid' => 'nid',
    'field_gardenwalk_year' => 'field_gardenwalk_year',
    'field_neighborhood' => 'field_neighborhood',
    'field_garden_name' => 'field_garden_name',
    'title' => 'title',
    'field_gardener_name' => 'field_gardener_name',
    'field_description' => 'field_description',
    'state' => 'state',
    'changed' => 'changed',
    'clone_node' => 'clone_node',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_map_marker_label' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gardenwalk_year' => array(
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
    'field_garden_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gardener_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'clone_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<ul class="action-links"><li><a href="/node/add/garden">Add a Garden</a></li></ul>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Bulk operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::nodequeue_add_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_vbo_given_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'garden::field_neighborhood' => 'garden::field_neighborhood',
          'garden::field_gardenwalk_year' => 'garden::field_gardenwalk_year',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Address';
  /* Field: Content: Garden/Location Name */
  $handler->display->display_options['fields']['field_garden_name']['id'] = 'field_garden_name';
  $handler->display->display_options['fields']['field_garden_name']['table'] = 'field_data_field_garden_name';
  $handler->display->display_options['fields']['field_garden_name']['field'] = 'field_garden_name';
  $handler->display->display_options['fields']['field_garden_name']['label'] = 'Name';
  /* Field: Content: Garden Type */
  $handler->display->display_options['fields']['field_garden_type']['id'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['field'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['label'] = 'Type';
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  /* Field: Content: Map Marker Label */
  $handler->display->display_options['fields']['field_map_marker_label']['id'] = 'field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['table'] = 'field_data_field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['field'] = 'field_map_marker_label';
  $handler->display->display_options['fields']['field_map_marker_label']['label'] = 'Label';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_gardenwalk_year']['id'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['field'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_gardenwalk_year']['delta_offset'] = '0';
  /* Field: Content: Gardener Name */
  $handler->display->display_options['fields']['field_gardener_name']['id'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['table'] = 'field_data_field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['field'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['label'] = 'Gardener';
  $handler->display->display_options['fields']['field_gardener_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['path'] = 'node/[nid]/edit#node_garden_form_group_gardener';
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow State';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = 'Clone';
  $handler->display->display_options['fields']['clone_node']['text'] = 'Clone';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'neighborhood';
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['operator_id'] = 'field_gardenwalk_year_tid_op';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['label'] = 'Filter by Year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['operator'] = 'field_gardenwalk_year_tid_op';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['identifier'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  /* Filter criterion: Content: Garden Type (field_garden_type) */
  $handler->display->display_options['filters']['field_garden_type_value']['id'] = 'field_garden_type_value';
  $handler->display->display_options['filters']['field_garden_type_value']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['filters']['field_garden_type_value']['field'] = 'field_garden_type_value';
  $handler->display->display_options['filters']['field_garden_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_garden_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_garden_type_value']['expose']['operator_id'] = 'field_garden_type_value_op';
  $handler->display->display_options['filters']['field_garden_type_value']['expose']['label'] = 'Garden Type';
  $handler->display->display_options['filters']['field_garden_type_value']['expose']['operator'] = 'field_garden_type_value_op';
  $handler->display->display_options['filters']['field_garden_type_value']['expose']['identifier'] = 'field_garden_type_value';
  $handler->display->display_options['filters']['field_garden_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_garden_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Workflow state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['path'] = 'manage-gardens';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Gardens';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-administer';

  /* Display: Manage Garden Locations */
  $handler = $view->new_display('page', 'Manage Garden Locations', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Garden (and all) Locations';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any garden content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'workflow-[state]';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'field_gardenwalk_year' => 'field_gardenwalk_year',
    'field_neighborhood' => 'field_neighborhood',
    'title' => 'title',
    'field_gardener_name' => 'field_gardener_name',
    'body' => 'body',
    'state' => 'state',
    'created' => 'created',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gardenwalk_year' => array(
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
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gardener_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<ul class="action-links"><li><a href="/node/add/garden">Add a Garden</a></li></ul>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Bulk operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::nodequeue_add_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::workflow_select_given_state_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'garden::field_neighborhood' => 'garden::field_neighborhood',
          'garden::field_map_label_prefix' => 'garden::field_map_label_prefix',
          'garden::field_gardenwalk_year' => 'garden::field_gardenwalk_year',
        ),
      ),
      'postpone_processing' => 0,
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_gardenwalk_year']['id'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['field'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_gardenwalk_year']['delta_offset'] = '0';
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow State';
  /* Field: Content: Garden Address */
  $handler->display->display_options['fields']['field_address_1']['id'] = 'field_address_1';
  $handler->display->display_options['fields']['field_address_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_1']['field'] = 'field_address';
  /* Field: Content: Garden Address */
  $handler->display->display_options['fields']['field_address_2']['id'] = 'field_address_2';
  $handler->display->display_options['fields']['field_address_2']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_2']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address_2']['label'] = 'Map';
  $handler->display->display_options['fields']['field_address_2']['type'] = 'location_map';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'community_garden' => 'community_garden',
    'garden' => 'garden',
    'headquarters' => 'headquarters',
    'reimagining_project' => 'reimagining_project',
    'special_feature' => 'special_feature',
    'urban_farm' => 'urban_farm',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Filter by Type (OR)';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by Neighborhood (OR)';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'neighborhood';
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['operator_id'] = 'field_gardenwalk_year_tid_op';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['label'] = 'Filter by Year (OR)';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['operator'] = 'field_gardenwalk_year_tid_op';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['identifier'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Workflow state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['path'] = 'manage-garden-locations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Garden Locations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-administer';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: OpenLayers Data Overlay - Neighborhood */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay - Neighborhood', 'openlayers_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'other_latlon',
    'other_lat' => 'latitude',
    'other_lon' => 'longitude',
    'wkt' => 'title',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_description',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'GardenWalk Garden:<br /><strong>[title]</strong>';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Garden Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['arguments']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['vocabularies'] = array(
    'neighborhood' => 'neighborhood',
  );
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary_options']['items_per_page'] = '25';

  /* Display: JSON */
  $handler = $view->new_display('page', 'JSON', 'page_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'gardens';
  $handler->display->display_options['style_options']['top_child_object'] = 'garden';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'gardens-json';

  /* Display: Gardens List Block */
  $handler = $view->new_display('block', 'Gardens List Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'item-list scrollbox';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Garden Type */
  $handler->display->display_options['fields']['field_garden_type']['id'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['field'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['label'] = '';
  $handler->display->display_options['fields']['field_garden_type']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_garden_type']['element_class'] = '[field_garden_type]';
  $handler->display->display_options['fields']['field_garden_type']['element_label_colon'] = FALSE;
  /* Field: Content: Garden Age */
  $handler->display->display_options['fields']['field_garden_age']['id'] = 'field_garden_age';
  $handler->display->display_options['fields']['field_garden_age']['table'] = 'field_data_field_garden_age';
  $handler->display->display_options['fields']['field_garden_age']['field'] = 'field_garden_age';
  $handler->display->display_options['fields']['field_garden_age']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_garden_age']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_garden_age']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Garden Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Special Attractions */
  $handler->display->display_options['fields']['field_attractions']['id'] = 'field_attractions';
  $handler->display->display_options['fields']['field_attractions']['table'] = 'field_data_field_attractions';
  $handler->display->display_options['fields']['field_attractions']['field'] = 'field_attractions';
  $handler->display->display_options['fields']['field_attractions']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_attractions']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_attractions']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['arguments']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['title'] = 'Gardens in %1';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['vocabularies'] = array(
    'neighborhood' => 'neighborhood',
    'attractions' => 0,
    'sponsorship_level' => 0,
  );
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
    'headquarters' => 'headquarters',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'other_latlon',
    'other_lat' => 'latitude',
    'other_lon' => 'longitude',
    'wkt' => 'title',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_description',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'GardenWalk Garden:<br /><strong>[title]</strong>';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Garden Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['arguments']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['vocabularies'] = array(
    'neighborhood' => 'neighborhood',
  );
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any garden content';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow state';
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['element_label_colon'] = FALSE;
  /* Field: Content: Gardener Name */
  $handler->display->display_options['fields']['field_gardener_name']['id'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['table'] = 'field_data_field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['field'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['label'] = 'Gardener';
  $handler->display->display_options['fields']['field_gardener_name']['element_label_colon'] = FALSE;
  /* Field: Content: Gardener Address */
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['id'] = 'field_gardener_addressfield_2';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['table'] = 'field_data_field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['field'] = 'field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['label'] = 'Street';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['type'] = 'thoroughfare';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Gardener Address */
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['id'] = 'field_gardener_addressfield_3';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['table'] = 'field_data_field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['field'] = 'field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['label'] = 'City';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['type'] = 'locality';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Gardener Address */
  $handler->display->display_options['fields']['field_gardener_addressfield']['id'] = 'field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield']['table'] = 'field_data_field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield']['field'] = 'field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield']['label'] = 'State';
  $handler->display->display_options['fields']['field_gardener_addressfield']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_gardener_addressfield']['type'] = 'administrative_area';
  $handler->display->display_options['fields']['field_gardener_addressfield']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Gardener Address */
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['id'] = 'field_gardener_addressfield_1';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['table'] = 'field_data_field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['field'] = 'field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['label'] = 'Zip';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['type'] = 'postal_code';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['sorts']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['sorts']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['sorts']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['path'] = 'gardeners-export.xls';

  /* Display: Data export - gardener emails */
  $handler = $view->new_display('views_data_export', 'Data export - gardener emails', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gardeners\' Emails, Current Year';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any garden content';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_gardenwalk_year']['id'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['field'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Garden Type */
  $handler->display->display_options['fields']['field_garden_type']['id'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['field'] = 'field_garden_type';
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow state';
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Garden Address';
  /* Field: Content: Gardener Name */
  $handler->display->display_options['fields']['field_gardener_name']['id'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['table'] = 'field_data_field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['field'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['label'] = 'Gardener';
  $handler->display->display_options['fields']['field_gardener_name']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_gardener_email']['id'] = 'field_gardener_email';
  $handler->display->display_options['fields']['field_gardener_email']['table'] = 'field_data_field_gardener_email';
  $handler->display->display_options['fields']['field_gardener_email']['field'] = 'field_gardener_email';
  $handler->display->display_options['fields']['field_gardener_email']['type'] = 'email_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Email formatted';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_gardener_name] <[field_gardener_email]>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['sorts']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['sorts']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['sorts']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['sorts']['field_gardenwalk_year_tid']['order'] = 'DESC';
  /* Sort criterion: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['sorts']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['sorts']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['sorts']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  /* Sort criterion: Content: Garden Type (field_garden_type) */
  $handler->display->display_options['sorts']['field_garden_type_value']['id'] = 'field_garden_type_value';
  $handler->display->display_options['sorts']['field_garden_type_value']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['sorts']['field_garden_type_value']['field'] = 'field_garden_type_value';
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  $handler->display->display_options['path'] = 'gardeners-export-current-year.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Data export - gardeners */
  $handler = $view->new_display('views_data_export', 'Data export - gardeners', 'views_data_export_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gardeners Contact Listings, Current Year';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any garden content';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['relationships']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['relationships']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['relationships']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_gardenwalk_year']['id'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['field'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['element_label_colon'] = FALSE;
  /* Field: Content: Garden Type */
  $handler->display->display_options['fields']['field_garden_type']['id'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['field'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['label'] = 'Type';
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow state';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Address';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Link';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'http://www.gardenwalkcleveland.org/node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Gardener Name */
  $handler->display->display_options['fields']['field_gardener_name']['id'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['table'] = 'field_data_field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['field'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['label'] = 'Gardener';
  $handler->display->display_options['fields']['field_gardener_name']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_gardener_email']['id'] = 'field_gardener_email';
  $handler->display->display_options['fields']['field_gardener_email']['table'] = 'field_data_field_gardener_email';
  $handler->display->display_options['fields']['field_gardener_email']['field'] = 'field_gardener_email';
  $handler->display->display_options['fields']['field_gardener_email']['type'] = 'email_plain';
  /* Field: Content: Cell Phone */
  $handler->display->display_options['fields']['field_gardener_phone_cell']['id'] = 'field_gardener_phone_cell';
  $handler->display->display_options['fields']['field_gardener_phone_cell']['table'] = 'field_data_field_gardener_phone_cell';
  $handler->display->display_options['fields']['field_gardener_phone_cell']['field'] = 'field_gardener_phone_cell';
  /* Field: Content: Home Phone */
  $handler->display->display_options['fields']['field_gardener_phone_home']['id'] = 'field_gardener_phone_home';
  $handler->display->display_options['fields']['field_gardener_phone_home']['table'] = 'field_data_field_gardener_phone_home';
  $handler->display->display_options['fields']['field_gardener_phone_home']['field'] = 'field_gardener_phone_home';
  /* Field: Content: Garden Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['sorts']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['sorts']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['sorts']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  /* Sort criterion: Content: Garden Type (field_garden_type) */
  $handler->display->display_options['sorts']['field_garden_type_value']['id'] = 'field_garden_type_value';
  $handler->display->display_options['sorts']['field_garden_type_value']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['sorts']['field_garden_type_value']['field'] = 'field_garden_type_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  $handler->display->display_options['path'] = 'gardens-contacts-list-current.csv';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Data export - neighborhood gardeners */
  $handler = $view->new_display('views_data_export', 'Data export - neighborhood gardeners', 'views_data_export_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gardeners Contact Listings, Current Year';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any garden content';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['relationships']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['relationships']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['relationships']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_gardenwalk_year']['id'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['field'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['element_label_colon'] = FALSE;
  /* Field: Content: Garden Type */
  $handler->display->display_options['fields']['field_garden_type']['id'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['field'] = 'field_garden_type';
  $handler->display->display_options['fields']['field_garden_type']['label'] = 'Type';
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow state';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Address';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Link';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'http://www.gardenwalkcleveland.org/node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Gardener Name */
  $handler->display->display_options['fields']['field_gardener_name']['id'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['table'] = 'field_data_field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['field'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['label'] = 'Gardener';
  $handler->display->display_options['fields']['field_gardener_name']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_gardener_email']['id'] = 'field_gardener_email';
  $handler->display->display_options['fields']['field_gardener_email']['table'] = 'field_data_field_gardener_email';
  $handler->display->display_options['fields']['field_gardener_email']['field'] = 'field_gardener_email';
  $handler->display->display_options['fields']['field_gardener_email']['type'] = 'email_plain';
  /* Field: Content: Cell Phone */
  $handler->display->display_options['fields']['field_gardener_phone_cell']['id'] = 'field_gardener_phone_cell';
  $handler->display->display_options['fields']['field_gardener_phone_cell']['table'] = 'field_data_field_gardener_phone_cell';
  $handler->display->display_options['fields']['field_gardener_phone_cell']['field'] = 'field_gardener_phone_cell';
  /* Field: Content: Home Phone */
  $handler->display->display_options['fields']['field_gardener_phone_home']['id'] = 'field_gardener_phone_home';
  $handler->display->display_options['fields']['field_gardener_phone_home']['table'] = 'field_data_field_gardener_phone_home';
  $handler->display->display_options['fields']['field_gardener_phone_home']['field'] = 'field_gardener_phone_home';
  /* Field: Content: Garden Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['sorts']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['sorts']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['sorts']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  /* Sort criterion: Content: Garden Type (field_garden_type) */
  $handler->display->display_options['sorts']['field_garden_type_value']['id'] = 'field_garden_type_value';
  $handler->display->display_options['sorts']['field_garden_type_value']['table'] = 'field_data_field_garden_type';
  $handler->display->display_options['sorts']['field_garden_type_value']['field'] = 'field_garden_type_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  $handler->display->display_options['path'] = 'export/gardeners/%/neighborhood-gardeners.csv';
  $handler->display->display_options['sitename_title'] = 0;
  $export['gardens'] = $view;

  return $export;
}
