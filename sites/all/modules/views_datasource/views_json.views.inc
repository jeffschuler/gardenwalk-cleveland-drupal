<?php
// $Id: views_json.views.inc,v 1.1.2.10 2010/07/15 07:34:48 allisterbeharry Exp $

/**
 * @file
 * Views style plugin to render nodes in the JSON data format.
 *
 * @see views_plugin_style_json.inc
 * @ingroup views_plugins
 */

/**
 * Implementation of views_plugin_style
 *
 * Comment: moved from views_plugin_style_xhtml.inc to allow recognition by Drupal, which
 * expects the class to be declared in the same file as the style declaration at the end
 * of this file (Hovhannes Tumanyan)
 */
class views_plugin_style_json extends views_plugin_style {
  /** 
   * Implementation of views_plugin_style::option_definition 
   */ 
  	function option_definition() {
      $options = parent::option_definition();
      $options['root_object'] = array('default' => 'nodes', 'translatable' => FALSE);
      $options['top_child_object'] = array('default' => 'node', 'translatable' => FALSE);
      $options['field_output'] = array('default' => 'normal', 'translatable' => FALSE);
      $options['plaintext_output'] = array('default' => TRUE, 'translatable' => FALSE);
      $options['format'] = array('default' => 'simple', 'translatable' => FALSE);
      $options['jsonp_prefix'] = array('default'=> NULL, 'translatable' => FALSE);
      $options['content_type'] = array('default' => 'default', 'translatable' => FALSE);
      $options['using_views_api_mode'] = array('default' => FALSE, 'translatable' => FALSE);
      return $options;
  	}
  	
  /**
   * Provide a form for setting options.
   *
   * @param $form
   * @param $form_state
   */
  function options_form(&$form, &$form_state) {
  	$form['root_object'] = array(
    '#type' => 'textfield',
    '#title' => ('Root object name'),
    '#default_value' => $this->options['root_object'],
    '#description' => ('The name of the root object in the JSON document. e.g nodes or users or forum_posts'),
      //'#process' => array('views_process_dependency'),
      //'#dependency' => array('radios:schema' => array('raw')),      
    );
  	$form['top_child_object'] = array(
    '#type' => 'textfield',
    '#title' => ('Top-level child object'),
    '#default_value' => $this->options['top_child_object'],
    '#description' => ('The name of each top-level child object in the JSON document. e.g node or user or forum_post'),
    );    
  	$form['field_output']  = array(
      '#type' => 'radios',
      '#title' => 'Field output',
      '#description' => 'For each row in the view, fields can be output as either the field rendered by Views, or by the raw content of the field.',  
      '#options' => array('normal' => ('Normal'), 'raw' => ('Raw')),
      '#default_value' => $this->options['field_output'],
    );
    $form['plaintext_output'] = array(
      '#type'           => 'checkbox',
      '#title'          => ('Plaintext output'),
      '#default_value'  => $this->options['plaintext_output'],
      '#description'    => ('For each row in the view, strip all markup from the field output.'),
    );
    $form['format'] = array(
      '#type'           => 'radios',
      '#title'          => ('JSON data format'),
      '#options'        => array(
        'simple'  => ('Simple'),
        'exhibit' => ('MIT Simile/Exhibit'),
        'jqgrid' => ('To be consumed by jqGrid'),
      ),
      '#default_value'  => $this->options['format'],
      '#description'    => ('What object format will be used for JSON output.')
    );
  	$form['jsonp_prefix'] = array(
    '#type' => 'textfield',
    '#title' => ('JSONP prefix'),
    '#default_value' => $this->options['jsonp_prefix'],
    '#description' => ('If used the JSON output will be enclosed with parentheses and prefixed by this label, as in the JSONP format.'),
    );    
    
    $form['content_type'] = array(
      '#type'           => 'radios',
      '#title'          => ('Content-Type'),
      '#options'        => array(
        'default'       => ("Default: application/json"),
        'text/json'     => ('text/json'),
       ),
      '#default_value'  => $this->options['content_type'],
      '#description'    => ('The Content-Type header that will be sent with the JSON output.')
    );
    $form['using_views_api_mode'] = array(
      '#type'           => 'checkbox',
      '#title'          => ('Views API mode'),
      '#default_value'  => $this->options['using_views_api_mode'],
      '#description'    => ('Not using View API mode means the JSON gets output directly and the server ceases normal page processing.  Using it means the server does not cease processing after outputting the JSON.  This allows the Views API to be used with the view without having to prematurely terminate page processing.'),
    );
  }

  /**
   * Implementation of view_style_plugin::theme_functions(). Returns an array of theme functions to use
   * for the current style plugin
   * @return array 
   */
  function theme_functions() {
    $options = $this->options;
    if ($options['format'] == 'simple') $hook = 'views_views_json_style_simple';
	if ($options['format'] == 'jqgrid') $hook = 'views_views_json_style_jqgrid';
    if ($options['format'] == 'exhibit') $hook = 'views_views_json_style_exhibit';	  

  	return views_theme_functions($hook, $this->view, $this->display);
  }

/**
 * Implementation of views_style_plugin::additional_theme_functions(). Returns empty array.
 * @return array
 */  
  function additional_theme_functions() {
  	return array();
  }
    
  /**
   * Implementation of view_style_plugin::render()
   */
  function render() {

  	$view = $this->view;
  	$options = $this->options;
  	$field = $view->field;

 	  $rows = array();

    foreach ($view->result as $row) {
      $rows[] = _views_json_render_fields($view, $row);
    }

    return theme($this->theme_functions(), array('view' => $this->view, 'options' => $this->options, 'rows' => $rows)); 	  
 	}
 
}  

/**
 * Implementation of hook_views_plugin().
 */
function views_json_views_plugins() {
  $path = drupal_get_path('module', 'views_json');
	return array(
    'module'  => 'views_json',
      'style'   => array(                 // Declare the views_json style plugin.
        'views_json'      => array(
          'title'         => ('JSON data document'),
	        'path'          => $path,
	        'help'          => ('Displays nodes in the JSON data format.'), 
            'handler'         => 'views_plugin_style_json',
		    'theme'           => 'views_views_json_style',
	        'theme file'      => 'views_views_json_style.theme.inc',
	        'theme path'      => $path.'/theme',
	        'additional themes' => array ('views_views_json_style_simple' => 'style', 'views_views_json_style_exhibit' => 'style', 'views_views_json_style_jqgrid' => 'style'),
          'uses row plugin' => FALSE,
          'uses fields'     => TRUE,
          'uses options'    => TRUE,
          'type'            => 'normal',
	        'help_topic'      => 'style-json',
	        'even empty'      => TRUE
      ),
    ),
  );
}