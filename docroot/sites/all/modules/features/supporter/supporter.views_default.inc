<?php
/**
 * @file
 * supporter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function supporter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nodequeue_supporter_list';
  $view->description = 'Display a list of all nodes in queue \'supporter list\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'nodequeue_supporter_list';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Queue \'supporter list\'';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'flexslider_supporter';
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
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_supporter_logo']['id'] = 'field_supporter_logo';
  $handler->display->display_options['fields']['field_supporter_logo']['table'] = 'field_data_field_supporter_logo';
  $handler->display->display_options['fields']['field_supporter_logo']['field'] = 'field_supporter_logo';
  $handler->display->display_options['fields']['field_supporter_logo']['label'] = '';
  $handler->display->display_options['fields']['field_supporter_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supporter_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_supporter_logo']['settings'] = array(
    'image_style' => 'supporter_carousel',
    'image_link' => 'content',
  );
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  $export['nodequeue_supporter_list'] = $view;

  return $export;
}
