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
  $handler->display->display_options['title'] = 'Supporters';
  $handler->display->display_options['css_class'] = 'view-supporters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_tfa_supporter_level',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Title and Intro Paragraph';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2 class="page-title">Supporters</h2>
<p>Teach For All is grateful to all of our supporters.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Get Involved';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a class="btn" href="get-involved">Get Involved</a>';
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
  /* Field: Content: TFA Supporter Link */
  $handler->display->display_options['fields']['field_tfa_supporter_link']['id'] = 'field_tfa_supporter_link';
  $handler->display->display_options['fields']['field_tfa_supporter_link']['table'] = 'field_data_field_tfa_supporter_link';
  $handler->display->display_options['fields']['field_tfa_supporter_link']['field'] = 'field_tfa_supporter_link';
  $handler->display->display_options['fields']['field_tfa_supporter_link']['label'] = '';
  $handler->display->display_options['fields']['field_tfa_supporter_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tfa_supporter_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tfa_supporter_link']['click_sort_column'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_tfa_supporter_link]';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  $handler->display->display_options['fields']['field_tfa_supporter_level']['alter']['text'] = '<h3>[field_tfa_supporter_level]</h3>[description]';
  $handler->display->display_options['fields']['field_tfa_supporter_level']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tfa_supporter_level']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tfa_supporter_level']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
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
    'tfa_supporter' => 'tfa_supporter',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'supporters';
  $export['tfa_supporters_view'] = $view;

  return $export;
}
