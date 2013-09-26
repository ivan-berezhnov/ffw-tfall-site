<?php
/**
 * @file
 * tfa_supporter_view_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tfa_supporter_view_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tfa_supporters_view';
  $view->description = 'View of TFA Supporters grouped by Supporter level';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TFA Supporters View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TFA Supporters View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_tfa_supporter_level',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<form method="link" action="/">
<input type = "submit" value="GET INVOLVED">
</form>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'supporter_levels' => 'supporter_levels',
    'news' => 0,
    'tags' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Content: TFA Supporter Level */
  $handler->display->display_options['fields']['field_tfa_supporter_level']['id'] = 'field_tfa_supporter_level';
  $handler->display->display_options['fields']['field_tfa_supporter_level']['table'] = 'field_data_field_tfa_supporter_level';
  $handler->display->display_options['fields']['field_tfa_supporter_level']['field'] = 'field_tfa_supporter_level';
  $handler->display->display_options['fields']['field_tfa_supporter_level']['label'] = '';
  $handler->display->display_options['fields']['field_tfa_supporter_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tfa_supporter_level']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tfa_supporter_level']['alter']['text'] = '[field_tfa_supporter_level] [description]';
  $handler->display->display_options['fields']['field_tfa_supporter_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tfa_supporter_level']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'tfa_supporter' => 'tfa_supporter',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tfa-supporters-view';
  $export['tfa_supporters_view'] = $view;

  return $export;
}
