<?php
/**
 * @file
 * network_learning.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function network_learning_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'network_learning';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Network Learning';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'network_learning' => 'network_learning',
  );
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Entity translation: Translation status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['status_1']['value'] = '1';

  /* Display: Network Learning */
  $handler = $view->new_display('page', 'Network Learning', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Network Learning';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container network-learning-page';
  $handler->display->display_options['display_description'] = 'display list of network learning';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Network Learning image */
  $handler->display->display_options['fields']['field_network_learning_image']['id'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['table'] = 'field_data_field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['field'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_network_learning_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_network_learning_byline']['id'] = 'field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['table'] = 'field_data_field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['field'] = 'field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_byline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_byline']['element_default_classes'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Network Learning tags */
  $handler->display->display_options['fields']['field_network_learning_tags']['id'] = 'field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['table'] = 'field_data_field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['field'] = 'field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_network_learning_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_network_learning_tags']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'network-learning-view';

  /* Display: Latest Network Learning */
  $handler = $view->new_display('page', 'Latest Network Learning', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Network Learning';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container network-learning-latest';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Network Learning image */
  $handler->display->display_options['fields']['field_network_learning_image']['id'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['table'] = 'field_data_field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['field'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_network_learning_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_network_learning_byline']['id'] = 'field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['table'] = 'field_data_field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['field'] = 'field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_byline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_byline']['hide_empty'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Network Learning tags */
  $handler->display->display_options['fields']['field_network_learning_tags']['id'] = 'field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['table'] = 'field_data_field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['field'] = 'field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_tags']['alter']['text'] = '<span>[field_network_learning_tags]</span>';
  $handler->display->display_options['fields']['field_network_learning_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_network_learning_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_network_learning_tags']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'network-learning-latest-view';

  /* Display: Network Learning Flexslider */
  $handler = $view->new_display('block', 'Network Learning Flexslider', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'network-learning-flexslider';
  $handler->display->display_options['display_description'] = 'Appears at the top of the network learning landing page.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'news_flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Network Learning image */
  $handler->display->display_options['fields']['field_network_learning_image']['id'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['table'] = 'field_data_field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['field'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_network_learning_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '55';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '170',
  );
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_network_learning_byline']['id'] = 'field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['table'] = 'field_data_field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['field'] = 'field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_byline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_byline']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[view_node] <span class="orange2">>></span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'GO TO STORY';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['text'] = 'GO TO STORY';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_2']['id'] = 'view_node_2';
  $handler->display->display_options['fields']['view_node_2']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_2']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_2']['label'] = '';
  $handler->display->display_options['fields']['view_node_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_2']['alter']['text'] = 'WATCH NOW <span class="orange2">>></span>';
  $handler->display->display_options['fields']['view_node_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'Flexslider Network Learning Block';

  /* Display: Network Learning Front */
  $handler = $view->new_display('block', 'Network Learning Front', 'network_learning_front_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row-fluid';
  $handler->display->display_options['display_description'] = 'Content list (2 items) ';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span6';
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
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'network learning list queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'network_learning_front_list' => 'network_learning_front_list',
    'supporter_list' => 0,
    'marquee' => 0,
    'board_list' => 0,
    'leaders_list' => 0,
  );
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Network Learning image */
  $handler->display->display_options['fields']['field_network_learning_image']['id'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['table'] = 'field_data_field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['field'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_network_learning_image']['settings'] = array(
    'image_style' => 'network_learning_front_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Network Learning tags */
  $handler->display->display_options['fields']['field_network_learning_tags']['id'] = 'field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['table'] = 'field_data_field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['field'] = 'field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_network_learning_tags']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['block_description'] = 'Front Network Learning Block';

  /* Display: Spanish Network Learning Front */
  $handler = $view->new_display('block', 'Spanish Network Learning Front', 'network_learning_front_block_spanish');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'row-fluid';
  $handler->display->display_options['display_description'] = 'Content list (2 items) ';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span6';
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
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'network learning list queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'spanish_nl_front' => 'spanish_nl_front',
    'supporter_list' => 0,
    'marquee' => 0,
    'network_learning_front_list' => 0,
    'board_list' => 0,
    'leaders_list' => 0,
    'ceos_list' => 0,
    'spanish_marquee' => 0,
  );
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Network Learning image */
  $handler->display->display_options['fields']['field_network_learning_image']['id'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['table'] = 'field_data_field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['field'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_network_learning_image']['settings'] = array(
    'image_style' => 'network_learning_front_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Network Learning tags */
  $handler->display->display_options['fields']['field_network_learning_tags']['id'] = 'field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['table'] = 'field_data_field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['field'] = 'field_network_learning_tags';
  $handler->display->display_options['fields']['field_network_learning_tags']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_network_learning_tags']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['block_description'] = 'Spanish Front Network Learning Block';
  $export['network_learning'] = $view;

  return $export;
}
