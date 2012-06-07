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

  $view = new view;
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
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No gardens yet...';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Farmer / Program Manager */
  $handler->display->display_options['fields']['field_gardener_name']['id'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['table'] = 'field_data_field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['field'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['label'] = '';
  $handler->display->display_options['fields']['field_gardener_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['field_api_classes'] = 0;
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['label'] = '';
  $handler->display->display_options['fields']['field_neighborhood']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['longitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Contextual filter: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['arguments']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['title'] = 'Gardens in %1';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['not'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
  );
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    21 => '21',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );

  /* Display: Manage Gardens Page */
  $handler = $view->new_display('page', 'Manage Gardens Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Gardens';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any garden content';
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
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
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
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Bulk operations';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::nodequeue_add_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_select_given_state_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_select_next_state_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
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
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::nodequeue_remove_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_gardenwalk_year']['id'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['field'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_gardenwalk_year']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gardenwalk_year']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['field_api_classes'] = 0;
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_neighborhood']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Address';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit#node_garden_form_group_location';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Farmer / Program Manager */
  $handler->display->display_options['fields']['field_gardener_name']['id'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['table'] = 'field_data_field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['field'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['label'] = 'Gardener';
  $handler->display->display_options['fields']['field_gardener_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['path'] = 'node/[nid]/edit#node_garden_form_group_gardener';
  $handler->display->display_options['fields']['field_gardener_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow State';
  $handler->display->display_options['fields']['state']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['state']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['state']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['state']['alter']['external'] = 0;
  $handler->display->display_options['fields']['state']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['state']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['state']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['state']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['state']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['state']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['state']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['state']['alter']['html'] = 0;
  $handler->display->display_options['fields']['state']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['state']['hide_alter_empty'] = 1;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by Neighborhood (OR)';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'neighborhood';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['operator_id'] = 'field_gardenwalk_year_tid_op';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['label'] = 'Filter by Year (OR)';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['operator'] = 'field_gardenwalk_year_tid_op';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['identifier'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['error_message'] = 1;
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Workflow state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'manage-gardens';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Gardens';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-administer';

  /* Display: Manage Garden Locations */
  $handler = $view->new_display('page', 'Manage Garden Locations', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Garden Locations';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any garden content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
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
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
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
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Bulk operations';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::nodequeue_add_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_select_given_state_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workflow_select_next_state_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
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
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::nodequeue_remove_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_gardenwalk_year']['id'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['field'] = 'field_gardenwalk_year';
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_gardenwalk_year']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_gardenwalk_year']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gardenwalk_year']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_gardenwalk_year']['field_api_classes'] = 0;
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_neighborhood']['field_api_classes'] = 0;
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow State';
  $handler->display->display_options['fields']['state']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['state']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['state']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['state']['alter']['external'] = 0;
  $handler->display->display_options['fields']['state']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['state']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['state']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['state']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['state']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['state']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['state']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['state']['alter']['html'] = 0;
  $handler->display->display_options['fields']['state']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['state']['hide_alter_empty'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = 'Garden Address';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address']['type'] = 'location_all';
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'garden' => 'garden',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by Neighborhood (OR)';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'neighborhood';
  $handler->display->display_options['filters']['tid']['error_message'] = 1;
  /* Filter criterion: Content: Year (field_gardenwalk_year) */
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['id'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['table'] = 'field_data_field_gardenwalk_year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['field'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['value'] = array(
    21 => '21',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['operator_id'] = 'field_gardenwalk_year_tid_op';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['label'] = 'Filter by Year (OR)';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['operator'] = 'field_gardenwalk_year_tid_op';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['identifier'] = 'field_gardenwalk_year_tid';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['error_message'] = 1;
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Workflow state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'manage-garden-locations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Gardens';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-administer';

  /* Display: OpenLayers Data Overlay - Neighborhood */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay - Neighborhood', 'openlayers_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'GardenWalk Garden:<br /><strong>[title]</strong>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Garden Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_description']['field_api_classes'] = 0;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['longitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['arguments']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['vocabularies'] = array(
    'neighborhood' => 'neighborhood',
  );
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['not'] = 0;

  /* Display: JSON */
  $handler = $view->new_display('page', 'JSON', 'page_4');
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['arguments']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['title'] = 'Gardens in %1';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['vocabularies'] = array(
    'neighborhood' => 'neighborhood',
    'attractions' => 0,
    'sponsorship_level' => 0,
  );
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['not'] = 0;

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'GardenWalk Garden:<br /><strong>[title]</strong>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Garden Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_description']['field_api_classes'] = 0;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['longitude']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['arguments']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_options']['vocabularies'] = array(
    'neighborhood' => 'neighborhood',
  );
  $handler->display->display_options['arguments']['field_neighborhood_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_neighborhood_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_neighborhood_tid']['not'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow state';
  $handler->display->display_options['fields']['state']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['state']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['state']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['state']['alter']['external'] = 0;
  $handler->display->display_options['fields']['state']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['state']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['state']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['state']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['state']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['state']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['state']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['state']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['state']['alter']['html'] = 0;
  $handler->display->display_options['fields']['state']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['state']['hide_alter_empty'] = 1;
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_neighborhood']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_neighborhood']['field_api_classes'] = 0;
  /* Field: Content: Farmer / Program Manager */
  $handler->display->display_options['fields']['field_gardener_name']['id'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['table'] = 'field_data_field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['field'] = 'field_gardener_name';
  $handler->display->display_options['fields']['field_gardener_name']['label'] = 'Gardener';
  $handler->display->display_options['fields']['field_gardener_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gardener_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gardener_name']['field_api_classes'] = 0;
  /* Field: Content: Gardener Address */
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['id'] = 'field_gardener_addressfield_2';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['table'] = 'field_data_field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['field'] = 'field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['label'] = 'Street';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['type'] = 'thoroughfare';
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_gardener_addressfield_2']['field_api_classes'] = 0;
  /* Field: Content: Gardener Address */
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['id'] = 'field_gardener_addressfield_3';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['table'] = 'field_data_field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['field'] = 'field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['label'] = 'City';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['type'] = 'locality';
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_gardener_addressfield_3']['field_api_classes'] = 0;
  /* Field: Content: Gardener Address */
  $handler->display->display_options['fields']['field_gardener_addressfield']['id'] = 'field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield']['table'] = 'field_data_field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield']['field'] = 'field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield']['label'] = 'State';
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_gardener_addressfield']['type'] = 'administrative_area';
  $handler->display->display_options['fields']['field_gardener_addressfield']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_gardener_addressfield']['field_api_classes'] = 0;
  /* Field: Content: Gardener Address */
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['id'] = 'field_gardener_addressfield_1';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['table'] = 'field_data_field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['field'] = 'field_gardener_addressfield';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['label'] = 'Zip';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['type'] = 'postal_code';
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_gardener_addressfield_1']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['sorts']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['sorts']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['sorts']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
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
    21 => '21',
  );
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gardenwalk_year_tid']['vocabulary'] = 'year';
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['path'] = 'gardeners-export.xls';
  $export['gardens'] = $view;

  return $export;
}
