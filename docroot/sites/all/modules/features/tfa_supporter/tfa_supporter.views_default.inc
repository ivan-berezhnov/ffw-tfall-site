<?php
/**
 * @file
 * tfa_supporter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tfa_supporter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nodequeue_supporter_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'nodequeue supporter list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'pubteachforall_supporter_flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'supporter_list' => 'supporter_list',
    'marquee' => 0,
    'board_list' => 0,
    'leaders_list' => 0,
    'network_learning_front_list' => 0,
  );
  /* Field: Content: TFA Supporter Logo */
  $handler->display->display_options['fields']['field_tfa_supporter_logo']['id'] = 'field_tfa_supporter_logo';
  $handler->display->display_options['fields']['field_tfa_supporter_logo']['table'] = 'field_data_field_tfa_supporter_logo';
  $handler->display->display_options['fields']['field_tfa_supporter_logo']['field'] = 'field_tfa_supporter_logo';
  $handler->display->display_options['fields']['field_tfa_supporter_logo']['label'] = '';
  $handler->display->display_options['fields']['field_tfa_supporter_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tfa_supporter_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tfa_supporter_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tfa_supporter_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['nodequeue_supporter_list'] = $view;

  return $export;
}
