<?php
/**
 * @file
 * pubteachforall_marquee.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pubteachforall_marquee_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nodequeue_marquee';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'nodequeue marquee';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'nodequeue_marquee';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'marquee';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'nodequeue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'marquee' => 'marquee',
    'supporter_list' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_spotlight_image']['id'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['table'] = 'field_data_field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['field'] = 'field_spotlight_image';
  $handler->display->display_options['fields']['field_spotlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_spotlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_spotlight_image']['settings'] = array(
    'image_style' => 'marquee_full_width',
    'image_link' => 'content',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'marquee_full_width',
    'image_link' => 'content',
  );
  /* Field: Content: Network Learning image */
  $handler->display->display_options['fields']['field_network_learning_image']['id'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['table'] = 'field_data_field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['field'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_network_learning_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_network_learning_image']['settings'] = array(
    'image_style' => 'marquee_full_width',
    'image_link' => 'content',
  );
  /* Field: Content: Vertical Image For Front Page Marquee */
  $handler->display->display_options['fields']['field_vertical_image']['id'] = 'field_vertical_image';
  $handler->display->display_options['fields']['field_vertical_image']['table'] = 'field_data_field_vertical_image';
  $handler->display->display_options['fields']['field_vertical_image']['field'] = 'field_vertical_image';
  $handler->display->display_options['fields']['field_vertical_image']['label'] = '';
  $handler->display->display_options['fields']['field_vertical_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vertical_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_vertical_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_vertical_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vertical_image']['settings'] = array(
    'image_style' => 'marquee_vertical_image',
    'image_link' => 'content',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_spotlight_type']['id'] = 'field_spotlight_type';
  $handler->display->display_options['fields']['field_spotlight_type']['table'] = 'field_data_field_spotlight_type';
  $handler->display->display_options['fields']['field_spotlight_type']['field'] = 'field_spotlight_type';
  $handler->display->display_options['fields']['field_spotlight_type']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_type']['hide_empty'] = TRUE;
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_news_byline']['id'] = 'field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['table'] = 'field_data_field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['field'] = 'field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['label'] = '';
  $handler->display->display_options['fields']['field_news_byline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_byline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_byline']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_news_byline']['type'] = 'text_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '175',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['text'] = 'GO TO STORY <span class="orange2">>></span>';
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_2']['id'] = 'view_node_2';
  $handler->display->display_options['fields']['view_node_2']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_2']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_2']['label'] = '';
  $handler->display->display_options['fields']['view_node_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_2']['alter']['text'] = 'WATCH NOW <span class="orange2">>></span>';
  $handler->display->display_options['fields']['view_node_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_2']['element_default_classes'] = FALSE;
  /* Field: Field: Embedded Video */
  $handler->display->display_options['fields']['field_embedded_video']['id'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['field'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['label'] = '';
  $handler->display->display_options['fields']['field_embedded_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_embedded_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_embedded_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_embedded_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_embedded_video']['settings'] = array(
    'video_style' => 'normal',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'network_learning' => 'network_learning',
    'news' => 'news',
    'spotlight' => 'spotlight',
  );
  $export['nodequeue_marquee'] = $view;

  return $export;
}
