<?php
/**
 * @file
 * supporters_view_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function supporters_view_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'supporters';
  $view->description = 'List of Supporters';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Supporters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Supporters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_supporter_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<form method="link" action="/">
<input type = "submit" value="GET INVOLVED">
</form>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_supporter_type']['id'] = 'field_supporter_type';
  $handler->display->display_options['fields']['field_supporter_type']['table'] = 'field_data_field_supporter_type';
  $handler->display->display_options['fields']['field_supporter_type']['field'] = 'field_supporter_type';
  $handler->display->display_options['fields']['field_supporter_type']['label'] = '';
  $handler->display->display_options['fields']['field_supporter_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_supporter_type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Type (field_supporter_type) */
  $handler->display->display_options['sorts']['field_supporter_type_value']['id'] = 'field_supporter_type_value';
  $handler->display->display_options['sorts']['field_supporter_type_value']['table'] = 'field_data_field_supporter_type';
  $handler->display->display_options['sorts']['field_supporter_type_value']['field'] = 'field_supporter_type_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'supporter' => 'supporter',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'supporters';
  $export['supporters'] = $view;

  return $export;
}
