<?php
/**
 * @file
 * slc.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slc_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slc_landing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SLC landing';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: What Teach For All partner organization are you a part of? */
  $handler->display->display_options['fields']['field_partner']['id'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['table'] = 'field_data_field_partner';
  $handler->display->display_options['fields']['field_partner']['field'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['label'] = '';
  $handler->display->display_options['fields']['field_partner']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_partner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_slc_main_image']['id'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['table'] = 'field_data_field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['field'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_slc_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slc_main_image']['settings'] = array(
    'image_style' => '2_column_layout_image',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'black';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Project Summary */
  $handler->display->display_options['fields']['field_project_summary']['id'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['table'] = 'field_data_field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['field'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['label'] = '';
  $handler->display->display_options['fields']['field_project_summary']['element_class'] = 'basic__content';
  $handler->display->display_options['fields']['field_project_summary']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'student_leaders_campaign' => 'student_leaders_campaign',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'slc-landing';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: SLC featured */
  $handler = $view->new_display('panel_pane', 'SLC featured', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'slc_featured' => 'slc_featured',
    'supporter_list' => 0,
    'marquee' => 0,
    'network_learning_front_list' => 0,
    'board_list' => 0,
    'leaders_list' => 0,
    'ceos_list' => 0,
    'spanish_marquee' => 0,
    'spanish_nl_front' => 0,
    'featured_videos' => 0,
    'slc_slider' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'student_leaders_campaign' => 'student_leaders_campaign',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';

  /* Display: SLC landing recents */
  $handler = $view->new_display('panel_pane', 'SLC landing recents', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Explore Student Leadership';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '28';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: What Teach For All partner organization are you a part of? */
  $handler->display->display_options['fields']['field_partner']['id'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['table'] = 'field_data_field_partner';
  $handler->display->display_options['fields']['field_partner']['field'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['label'] = '';
  $handler->display->display_options['fields']['field_partner']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_partner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_slc_main_image']['id'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['table'] = 'field_data_field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['field'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_slc_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slc_main_image']['settings'] = array(
    'image_style' => '2_column_layout_image',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'black';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Project Summary */
  $handler->display->display_options['fields']['field_project_summary']['id'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['table'] = 'field_data_field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['field'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['label'] = '';
  $handler->display->display_options['fields']['field_project_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_summary']['element_class'] = 'basic__content';
  $handler->display->display_options['fields']['field_project_summary']['element_label_colon'] = FALSE;
  $export['slc_landing'] = $view;

  $view = new view();
  $view->name = 'slc_landing_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SLC landing slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
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
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'slc_slider' => 'slc_slider',
    'supporter_list' => 0,
    'marquee' => 0,
    'network_learning_front_list' => 0,
    'board_list' => 0,
    'leaders_list' => 0,
    'ceos_list' => 0,
    'spanish_marquee' => 0,
    'spanish_nl_front' => 0,
    'featured_videos' => 0,
    'slc_featured' => 0,
  );
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'student_leaders_campaign' => 'student_leaders_campaign',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: SLC Flexslider */
  $handler = $view->new_display('block', 'SLC Flexslider', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'news-flexslider';
  $handler->display->display_options['display_description'] = 'Appears at the top of the news landing page.';
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
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_slc_main_image']['id'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['table'] = 'field_data_field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['field'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_slc_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slc_main_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => 'content',
  );
  /* Field: Content: Marquee Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_image']['alter']['text'] = '[field_slc_main_image]';
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '55';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_category']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_slc_headline']['id'] = 'field_slc_headline';
  $handler->display->display_options['fields']['field_slc_headline']['table'] = 'field_data_field_slc_headline';
  $handler->display->display_options['fields']['field_slc_headline']['field'] = 'field_slc_headline';
  $handler->display->display_options['fields']['field_slc_headline']['label'] = '';
  $handler->display->display_options['fields']['field_slc_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slc_headline']['element_label_colon'] = FALSE;
  /* Field: Content: Marquee Blurb */
  $handler->display->display_options['fields']['field_news_byline']['id'] = 'field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['table'] = 'field_data_field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['field'] = 'field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['label'] = '';
  $handler->display->display_options['fields']['field_news_byline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_byline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_byline']['alter']['text'] = '[field_slc_headline]';
  $handler->display->display_options['fields']['field_news_byline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_byline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_byline']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_news_byline']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
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
  /* Field: Content: Project Summary */
  $handler->display->display_options['fields']['field_project_summary']['id'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['table'] = 'field_data_field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['field'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['label'] = '';
  $handler->display->display_options['fields']['field_project_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_summary']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_project_summary']['element_class'] = 'flexslider-preview';
  $handler->display->display_options['fields']['field_project_summary']['element_label_colon'] = FALSE;
  /* Field: Content: What Teach For All partner organization are you a part of? */
  $handler->display->display_options['fields']['field_partner']['id'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['table'] = 'field_data_field_partner';
  $handler->display->display_options['fields']['field_partner']['field'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['label'] = '';
  $handler->display->display_options['fields']['field_partner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partner']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_partner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="flexslider-info">
<div class="slug">[field_partner] </div>
<div class="news__flexslider__">
<h2>[title] </h2>
<div class="flexslider-preview">[field_project_summary] </div>
</div>
<div class="flexslider-link"> [view_node] </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'student_leaders_campaign' => 'student_leaders_campaign',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Flexslider News Block';
  $export['slc_landing_slider'] = $view;

  $view = new view();
  $view->name = 'slc_project_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SLC project page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SLC project page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: What Teach For All partner organization are you a part of? */
  $handler->display->display_options['fields']['field_partner']['id'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['table'] = 'field_data_field_partner';
  $handler->display->display_options['fields']['field_partner']['field'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['label'] = '';
  $handler->display->display_options['fields']['field_partner']['element_label_colon'] = FALSE;
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_slc_main_image']['id'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['table'] = 'field_data_field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['field'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_slc_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slc_main_image']['settings'] = array(
    'image_style' => '2_column_layout_image',
    'image_link' => '',
  );
  /* Field: Content: Student Leaders */
  $handler->display->display_options['fields']['field_student_names']['id'] = 'field_student_names';
  $handler->display->display_options['fields']['field_student_names']['table'] = 'field_data_field_student_names';
  $handler->display->display_options['fields']['field_student_names']['field'] = 'field_student_names';
  $handler->display->display_options['fields']['field_student_names']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_student_names']['element_label_class'] = 'slug-medium';
  $handler->display->display_options['fields']['field_student_names']['element_label_colon'] = FALSE;
  /* Field: Content: Age of students */
  $handler->display->display_options['fields']['field_age_grade']['id'] = 'field_age_grade';
  $handler->display->display_options['fields']['field_age_grade']['table'] = 'field_data_field_age_grade';
  $handler->display->display_options['fields']['field_age_grade']['field'] = 'field_age_grade';
  $handler->display->display_options['fields']['field_age_grade']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_submitters_fname']['id'] = 'field_submitters_fname';
  $handler->display->display_options['fields']['field_submitters_fname']['table'] = 'field_data_field_submitters_fname';
  $handler->display->display_options['fields']['field_submitters_fname']['field'] = 'field_submitters_fname';
  $handler->display->display_options['fields']['field_submitters_fname']['label'] = '';
  $handler->display->display_options['fields']['field_submitters_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_submitters_fname']['element_label_colon'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_submitters_lname']['id'] = 'field_submitters_lname';
  $handler->display->display_options['fields']['field_submitters_lname']['table'] = 'field_data_field_submitters_lname';
  $handler->display->display_options['fields']['field_submitters_lname']['field'] = 'field_submitters_lname';
  $handler->display->display_options['fields']['field_submitters_lname']['label'] = 'Adult Supporter';
  $handler->display->display_options['fields']['field_submitters_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_submitters_lname']['alter']['text'] = '[field_submitters_fname] [field_submitters_lname]';
  $handler->display->display_options['fields']['field_submitters_lname']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_submitters_lname']['element_label_class'] = 'slug-medium';
  $handler->display->display_options['fields']['field_submitters_lname']['element_label_colon'] = FALSE;
  /* Field: Content: Project Summary */
  $handler->display->display_options['fields']['field_project_summary']['id'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['table'] = 'field_data_field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['field'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_summary']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_project_summary']['element_label_class'] = 'slug-medium';
  $handler->display->display_options['fields']['field_project_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_slc_facebook']['id'] = 'field_slc_facebook';
  $handler->display->display_options['fields']['field_slc_facebook']['table'] = 'field_data_field_slc_facebook';
  $handler->display->display_options['fields']['field_slc_facebook']['field'] = 'field_slc_facebook';
  $handler->display->display_options['fields']['field_slc_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_slc_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_facebook']['click_sort_column'] = 'url';
  /* Field: Content: Instagram */
  $handler->display->display_options['fields']['field_slc_instagram']['id'] = 'field_slc_instagram';
  $handler->display->display_options['fields']['field_slc_instagram']['table'] = 'field_data_field_slc_instagram';
  $handler->display->display_options['fields']['field_slc_instagram']['field'] = 'field_slc_instagram';
  $handler->display->display_options['fields']['field_slc_instagram']['label'] = '';
  $handler->display->display_options['fields']['field_slc_instagram']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_instagram']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slc_instagram']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slc_instagram']['click_sort_column'] = 'url';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_slc_twitter']['id'] = 'field_slc_twitter';
  $handler->display->display_options['fields']['field_slc_twitter']['table'] = 'field_data_field_slc_twitter';
  $handler->display->display_options['fields']['field_slc_twitter']['field'] = 'field_slc_twitter';
  $handler->display->display_options['fields']['field_slc_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_slc_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_twitter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slc_twitter']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slc_twitter']['click_sort_column'] = 'url';
  /* Field: Content: Reflection Question 1: Please describe how your students exercised their leadership and the impact they had. */
  $handler->display->display_options['fields']['field_question1']['id'] = 'field_question1';
  $handler->display->display_options['fields']['field_question1']['table'] = 'field_data_field_question1';
  $handler->display->display_options['fields']['field_question1']['field'] = 'field_question1';
  $handler->display->display_options['fields']['field_question1']['label'] = 'Please describe how your students exercised their leadership and the impact they had.';
  $handler->display->display_options['fields']['field_question1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_question1']['element_label_class'] = 'NGMedium';
  $handler->display->display_options['fields']['field_question1']['element_label_colon'] = FALSE;
  /* Field: Content: Reflection Question 2: What role did you play in supporting your students’ leadership? */
  $handler->display->display_options['fields']['field_question2']['id'] = 'field_question2';
  $handler->display->display_options['fields']['field_question2']['table'] = 'field_data_field_question2';
  $handler->display->display_options['fields']['field_question2']['field'] = 'field_question2';
  $handler->display->display_options['fields']['field_question2']['label'] = 'What role did you play in supporting your students’ leadership?';
  $handler->display->display_options['fields']['field_question2']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_question2']['element_label_class'] = 'NGMedium';
  $handler->display->display_options['fields']['field_question2']['element_label_colon'] = FALSE;
  /* Field: Content: Reflection Question 3: What did you and your students learn in this activity that will endure beyond today? */
  $handler->display->display_options['fields']['field_question3']['id'] = 'field_question3';
  $handler->display->display_options['fields']['field_question3']['table'] = 'field_data_field_question3';
  $handler->display->display_options['fields']['field_question3']['field'] = 'field_question3';
  $handler->display->display_options['fields']['field_question3']['label'] = 'What did you and your students learn in this activity that will endure beyond today?';
  $handler->display->display_options['fields']['field_question3']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_question3']['element_label_class'] = 'NGMedium';
  $handler->display->display_options['fields']['field_question3']['element_label_colon'] = FALSE;
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photos_caption']['id'] = 'field_photos_caption';
  $handler->display->display_options['fields']['field_photos_caption']['table'] = 'field_data_field_photos_caption';
  $handler->display->display_options['fields']['field_photos_caption']['field'] = 'field_photos_caption';
  $handler->display->display_options['fields']['field_photos_caption']['label'] = '';
  $handler->display->display_options['fields']['field_photos_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photos_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photos_caption']['settings'] = array(
    'add' => 'Add',
    'edit' => 'Edit',
    'translate' => 'Translate',
    'delete' => 'Delete',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_photos_caption']['delta_offset'] = '0';
  /* Field: Content: Video links */
  $handler->display->display_options['fields']['field_video_link_caption']['id'] = 'field_video_link_caption';
  $handler->display->display_options['fields']['field_video_link_caption']['table'] = 'field_data_field_video_link_caption';
  $handler->display->display_options['fields']['field_video_link_caption']['field'] = 'field_video_link_caption';
  $handler->display->display_options['fields']['field_video_link_caption']['label'] = '';
  $handler->display->display_options['fields']['field_video_link_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_link_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_link_caption']['settings'] = array(
    'add' => 'Add',
    'edit' => 'Edit',
    'translate' => 'Translate',
    'delete' => 'Delete',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_video_link_caption']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'student_leaders_campaign' => 'student_leaders_campaign',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: What Teach For All partner organization are you a part of? */
  $handler->display->display_options['fields']['field_partner']['id'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['table'] = 'field_data_field_partner';
  $handler->display->display_options['fields']['field_partner']['field'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['label'] = '';
  $handler->display->display_options['fields']['field_partner']['element_label_colon'] = FALSE;
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_slc_main_image']['id'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['table'] = 'field_data_field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['field'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_slc_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slc_main_image']['settings'] = array(
    'image_style' => '2_column_layout_image',
    'image_link' => '',
  );
  /* Field: Content: Student Leaders */
  $handler->display->display_options['fields']['field_student_names']['id'] = 'field_student_names';
  $handler->display->display_options['fields']['field_student_names']['table'] = 'field_data_field_student_names';
  $handler->display->display_options['fields']['field_student_names']['field'] = 'field_student_names';
  $handler->display->display_options['fields']['field_student_names']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_student_names']['element_label_class'] = 'slug-medium';
  $handler->display->display_options['fields']['field_student_names']['element_label_colon'] = FALSE;
  /* Field: Content: Age of students */
  $handler->display->display_options['fields']['field_age_grade']['id'] = 'field_age_grade';
  $handler->display->display_options['fields']['field_age_grade']['table'] = 'field_data_field_age_grade';
  $handler->display->display_options['fields']['field_age_grade']['field'] = 'field_age_grade';
  $handler->display->display_options['fields']['field_age_grade']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_submitters_fname']['id'] = 'field_submitters_fname';
  $handler->display->display_options['fields']['field_submitters_fname']['table'] = 'field_data_field_submitters_fname';
  $handler->display->display_options['fields']['field_submitters_fname']['field'] = 'field_submitters_fname';
  $handler->display->display_options['fields']['field_submitters_fname']['label'] = '';
  $handler->display->display_options['fields']['field_submitters_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_submitters_fname']['element_label_colon'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_submitters_lname']['id'] = 'field_submitters_lname';
  $handler->display->display_options['fields']['field_submitters_lname']['table'] = 'field_data_field_submitters_lname';
  $handler->display->display_options['fields']['field_submitters_lname']['field'] = 'field_submitters_lname';
  $handler->display->display_options['fields']['field_submitters_lname']['label'] = 'Adult Supporter';
  $handler->display->display_options['fields']['field_submitters_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_submitters_lname']['alter']['text'] = '[field_submitters_fname] [field_submitters_lname]';
  $handler->display->display_options['fields']['field_submitters_lname']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_submitters_lname']['element_label_class'] = 'slug-medium';
  $handler->display->display_options['fields']['field_submitters_lname']['element_label_colon'] = FALSE;
  /* Field: Content: Project Summary */
  $handler->display->display_options['fields']['field_project_summary']['id'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['table'] = 'field_data_field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['field'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_summary']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_project_summary']['element_label_class'] = 'slug-medium';
  $handler->display->display_options['fields']['field_project_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_slc_facebook']['id'] = 'field_slc_facebook';
  $handler->display->display_options['fields']['field_slc_facebook']['table'] = 'field_data_field_slc_facebook';
  $handler->display->display_options['fields']['field_slc_facebook']['field'] = 'field_slc_facebook';
  $handler->display->display_options['fields']['field_slc_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_slc_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_facebook']['click_sort_column'] = 'url';
  /* Field: Content: Instagram */
  $handler->display->display_options['fields']['field_slc_instagram']['id'] = 'field_slc_instagram';
  $handler->display->display_options['fields']['field_slc_instagram']['table'] = 'field_data_field_slc_instagram';
  $handler->display->display_options['fields']['field_slc_instagram']['field'] = 'field_slc_instagram';
  $handler->display->display_options['fields']['field_slc_instagram']['label'] = '';
  $handler->display->display_options['fields']['field_slc_instagram']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_instagram']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slc_instagram']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slc_instagram']['click_sort_column'] = 'url';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_slc_twitter']['id'] = 'field_slc_twitter';
  $handler->display->display_options['fields']['field_slc_twitter']['table'] = 'field_data_field_slc_twitter';
  $handler->display->display_options['fields']['field_slc_twitter']['field'] = 'field_slc_twitter';
  $handler->display->display_options['fields']['field_slc_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_slc_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_twitter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slc_twitter']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slc_twitter']['click_sort_column'] = 'url';
  /* Field: Content: Reflection Question 1: Please describe how your students exercised their leadership and the impact they had. */
  $handler->display->display_options['fields']['field_question1']['id'] = 'field_question1';
  $handler->display->display_options['fields']['field_question1']['table'] = 'field_data_field_question1';
  $handler->display->display_options['fields']['field_question1']['field'] = 'field_question1';
  $handler->display->display_options['fields']['field_question1']['label'] = 'Please describe how your students exercised their leadership and the impact they had.';
  $handler->display->display_options['fields']['field_question1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_question1']['element_label_class'] = 'NGMedium';
  $handler->display->display_options['fields']['field_question1']['element_label_colon'] = FALSE;
  /* Field: Content: Reflection Question 2: What role did you play in supporting your students’ leadership? */
  $handler->display->display_options['fields']['field_question2']['id'] = 'field_question2';
  $handler->display->display_options['fields']['field_question2']['table'] = 'field_data_field_question2';
  $handler->display->display_options['fields']['field_question2']['field'] = 'field_question2';
  $handler->display->display_options['fields']['field_question2']['label'] = 'What role did you play in supporting your students’ leadership?';
  $handler->display->display_options['fields']['field_question2']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_question2']['element_label_class'] = 'NGMedium';
  $handler->display->display_options['fields']['field_question2']['element_label_colon'] = FALSE;
  /* Field: Content: Reflection Question 3: What did you and your students learn in this activity that will endure beyond today? */
  $handler->display->display_options['fields']['field_question3']['id'] = 'field_question3';
  $handler->display->display_options['fields']['field_question3']['table'] = 'field_data_field_question3';
  $handler->display->display_options['fields']['field_question3']['field'] = 'field_question3';
  $handler->display->display_options['fields']['field_question3']['label'] = 'What did you and your students learn in this activity that will endure beyond today?';
  $handler->display->display_options['fields']['field_question3']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_question3']['element_label_class'] = 'NGMedium';
  $handler->display->display_options['fields']['field_question3']['element_label_colon'] = FALSE;
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photos_caption']['id'] = 'field_photos_caption';
  $handler->display->display_options['fields']['field_photos_caption']['table'] = 'field_data_field_photos_caption';
  $handler->display->display_options['fields']['field_photos_caption']['field'] = 'field_photos_caption';
  $handler->display->display_options['fields']['field_photos_caption']['label'] = '';
  $handler->display->display_options['fields']['field_photos_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photos_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photos_caption']['settings'] = array(
    'add' => 'Add',
    'edit' => 'Edit',
    'translate' => 'Translate',
    'delete' => 'Delete',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_photos_caption']['delta_offset'] = '0';
  /* Field: Content: Video links */
  $handler->display->display_options['fields']['field_video_link_caption']['id'] = 'field_video_link_caption';
  $handler->display->display_options['fields']['field_video_link_caption']['table'] = 'field_data_field_video_link_caption';
  $handler->display->display_options['fields']['field_video_link_caption']['field'] = 'field_video_link_caption';
  $handler->display->display_options['fields']['field_video_link_caption']['label'] = '';
  $handler->display->display_options['fields']['field_video_link_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_link_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_link_caption']['settings'] = array(
    'add' => 'Add',
    'edit' => 'Edit',
    'translate' => 'Translate',
    'delete' => 'Delete',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_video_link_caption']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '             <?php
                $blockObject = block_load(\'sharethis\', \'sharethis_block\');
                $block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
                $output = drupal_render($block);
                print $output;
              ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'slc-project-page';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: SLC page no images or video */
  $handler = $view->new_display('panel_pane', 'SLC page no images or video', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: What Teach For All partner organization are you a part of? */
  $handler->display->display_options['fields']['field_partner']['id'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['table'] = 'field_data_field_partner';
  $handler->display->display_options['fields']['field_partner']['field'] = 'field_partner';
  $handler->display->display_options['fields']['field_partner']['label'] = '';
  $handler->display->display_options['fields']['field_partner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partner']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_partner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="slc-partner slug">[field_partner] </div>
<h1 class="black slc-main-title">[title] </h1>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'span12';
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_slc_main_image']['id'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['table'] = 'field_data_field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['field'] = 'field_slc_main_image';
  $handler->display->display_options['fields']['field_slc_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_slc_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slc_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_main_image']['element_wrapper_class'] = 'span8';
  $handler->display->display_options['fields']['field_slc_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slc_main_image']['settings'] = array(
    'image_style' => '2_column_layout_image',
    'image_link' => '',
  );
  /* Field: Content: Student Leaders */
  $handler->display->display_options['fields']['field_student_names']['id'] = 'field_student_names';
  $handler->display->display_options['fields']['field_student_names']['table'] = 'field_data_field_student_names';
  $handler->display->display_options['fields']['field_student_names']['field'] = 'field_student_names';
  $handler->display->display_options['fields']['field_student_names']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_names']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_student_names']['element_label_class'] = 'slug-medium';
  $handler->display->display_options['fields']['field_student_names']['element_label_colon'] = FALSE;
  /* Field: Content: Age of students */
  $handler->display->display_options['fields']['field_age_grade']['id'] = 'field_age_grade';
  $handler->display->display_options['fields']['field_age_grade']['table'] = 'field_data_field_age_grade';
  $handler->display->display_options['fields']['field_age_grade']['field'] = 'field_age_grade';
  $handler->display->display_options['fields']['field_age_grade']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_age_grade']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_submitters_fname']['id'] = 'field_submitters_fname';
  $handler->display->display_options['fields']['field_submitters_fname']['table'] = 'field_data_field_submitters_fname';
  $handler->display->display_options['fields']['field_submitters_fname']['field'] = 'field_submitters_fname';
  $handler->display->display_options['fields']['field_submitters_fname']['label'] = '';
  $handler->display->display_options['fields']['field_submitters_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_submitters_fname']['element_label_colon'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_submitters_lname']['id'] = 'field_submitters_lname';
  $handler->display->display_options['fields']['field_submitters_lname']['table'] = 'field_data_field_submitters_lname';
  $handler->display->display_options['fields']['field_submitters_lname']['field'] = 'field_submitters_lname';
  $handler->display->display_options['fields']['field_submitters_lname']['label'] = 'Adult Supporter';
  $handler->display->display_options['fields']['field_submitters_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_submitters_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_submitters_lname']['alter']['text'] = '[field_submitters_fname] [field_submitters_lname]';
  $handler->display->display_options['fields']['field_submitters_lname']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_submitters_lname']['element_label_class'] = 'slug-medium';
  $handler->display->display_options['fields']['field_submitters_lname']['element_label_colon'] = FALSE;
  /* Field: Content: Project Summary */
  $handler->display->display_options['fields']['field_project_summary']['id'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['table'] = 'field_data_field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['field'] = 'field_project_summary';
  $handler->display->display_options['fields']['field_project_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_summary']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_project_summary']['element_label_class'] = 'slug-medium';
  $handler->display->display_options['fields']['field_project_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_slc_facebook']['id'] = 'field_slc_facebook';
  $handler->display->display_options['fields']['field_slc_facebook']['table'] = 'field_data_field_slc_facebook';
  $handler->display->display_options['fields']['field_slc_facebook']['field'] = 'field_slc_facebook';
  $handler->display->display_options['fields']['field_slc_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_slc_facebook']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slc_facebook']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slc_facebook']['alter']['text'] = '<a href="[field_slc_facebook]">Connect on Facebook</a>';
  $handler->display->display_options['fields']['field_slc_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_facebook']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slc_facebook']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slc_facebook']['type'] = 'link_plain';
  /* Field: Content: Instagram */
  $handler->display->display_options['fields']['field_slc_instagram']['id'] = 'field_slc_instagram';
  $handler->display->display_options['fields']['field_slc_instagram']['table'] = 'field_data_field_slc_instagram';
  $handler->display->display_options['fields']['field_slc_instagram']['field'] = 'field_slc_instagram';
  $handler->display->display_options['fields']['field_slc_instagram']['label'] = '';
  $handler->display->display_options['fields']['field_slc_instagram']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slc_instagram']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slc_instagram']['alter']['text'] = '<a href="[field_slc_instagram] ">Connect on Instagram</a>';
  $handler->display->display_options['fields']['field_slc_instagram']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_instagram']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slc_instagram']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slc_instagram']['click_sort_column'] = 'url';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_slc_twitter']['id'] = 'field_slc_twitter';
  $handler->display->display_options['fields']['field_slc_twitter']['table'] = 'field_data_field_slc_twitter';
  $handler->display->display_options['fields']['field_slc_twitter']['field'] = 'field_slc_twitter';
  $handler->display->display_options['fields']['field_slc_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_slc_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slc_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slc_twitter']['alter']['text'] = '<a href="[field_slc_twitter] ">Connect on Twitter</a>';
  $handler->display->display_options['fields']['field_slc_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slc_twitter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slc_twitter']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_slc_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slc_twitter']['type'] = 'link_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '             <?php
                $blockObject = block_load(\'sharethis\', \'sharethis_block\');
                $block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
                $output = drupal_render($block);
                print $output;
              ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="slc-upper-image">
  <div class="slc-main-image">[field_slc_main_image]</div>
  <div class="slc-shareintro"><div class="slc-share">SHARE THIS PAGE | #1000StudentLeaders</div></div>
  <div class="pane-sharethis">  [php]  </div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'span8';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slc-upper-content">
<div class="slug">Student Leaders</div>
<div class="basic__content">[field_student_names] </div>
<div class="slug">Adult Supporter</div>
<div class="basic__content supporter">[field_submitters_lname] </div>
<div class="sharethis">[field_slc_facebook] </div>
<div class="sharethis">[field_slc_instagram] </div>
<div class="sharethis">[field_slc_twitter] </div>
<div class="slug">Age of Students</div>
<div class="basic__content">[field_age_grade] </div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'span4';
  /* Field: Content: Reflection Question 1: Please describe how your students exercised their leadership and the impact they had. */
  $handler->display->display_options['fields']['field_question1']['id'] = 'field_question1';
  $handler->display->display_options['fields']['field_question1']['table'] = 'field_data_field_question1';
  $handler->display->display_options['fields']['field_question1']['field'] = 'field_question1';
  $handler->display->display_options['fields']['field_question1']['label'] = 'Please describe how your students exercised their leadership and the impact they had.';
  $handler->display->display_options['fields']['field_question1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_question1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_question1']['element_label_class'] = 'NGMedium';
  $handler->display->display_options['fields']['field_question1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_question1']['element_wrapper_class'] = 'span12';
  /* Field: Content: Reflection Question 2: What role did you play in supporting your students’ leadership? */
  $handler->display->display_options['fields']['field_question2']['id'] = 'field_question2';
  $handler->display->display_options['fields']['field_question2']['table'] = 'field_data_field_question2';
  $handler->display->display_options['fields']['field_question2']['field'] = 'field_question2';
  $handler->display->display_options['fields']['field_question2']['label'] = 'What role did you play in supporting your students’ leadership?';
  $handler->display->display_options['fields']['field_question2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_question2']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_question2']['element_label_class'] = 'NGMedium';
  $handler->display->display_options['fields']['field_question2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_question2']['element_wrapper_class'] = 'span12';
  /* Field: Content: Reflection Question 3: What did you and your students learn in this activity that will endure beyond today? */
  $handler->display->display_options['fields']['field_question3']['id'] = 'field_question3';
  $handler->display->display_options['fields']['field_question3']['table'] = 'field_data_field_question3';
  $handler->display->display_options['fields']['field_question3']['field'] = 'field_question3';
  $handler->display->display_options['fields']['field_question3']['label'] = 'What did you and your students learn in this activity that will endure beyond today?';
  $handler->display->display_options['fields']['field_question3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_question3']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_question3']['element_label_class'] = 'NGMedium';
  $handler->display->display_options['fields']['field_question3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_question3']['element_wrapper_class'] = 'span12';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<h3">Please describe how your students exercised their leadership and the impact they had.</h3>
[field_question1] 

<h3">What role did you play in supporting your students’ leadership?</h3>
[field_question2] 

<h3">What did you and your students learn in this activity that will endure beyond today?</h3>
[field_question3] ';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;

  /* Display: SLC page images & video */
  $handler = $view->new_display('panel_pane', 'SLC page images & video', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photos_caption']['id'] = 'field_photos_caption';
  $handler->display->display_options['fields']['field_photos_caption']['table'] = 'field_data_field_photos_caption';
  $handler->display->display_options['fields']['field_photos_caption']['field'] = 'field_photos_caption';
  $handler->display->display_options['fields']['field_photos_caption']['label'] = '';
  $handler->display->display_options['fields']['field_photos_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photos_caption']['settings'] = array(
    'add' => 'Add',
    'edit' => 'Edit',
    'translate' => 'Translate',
    'delete' => 'Delete',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_photos_caption']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photos_caption']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_photos_caption']['separator'] = '';
  $handler->display->display_options['fields']['field_photos_caption']['field_api_classes'] = TRUE;
  /* Field: Content: Video links */
  $handler->display->display_options['fields']['field_video_link_caption']['id'] = 'field_video_link_caption';
  $handler->display->display_options['fields']['field_video_link_caption']['table'] = 'field_data_field_video_link_caption';
  $handler->display->display_options['fields']['field_video_link_caption']['field'] = 'field_video_link_caption';
  $handler->display->display_options['fields']['field_video_link_caption']['label'] = '';
  $handler->display->display_options['fields']['field_video_link_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_link_caption']['settings'] = array(
    'add' => 'Add',
    'edit' => 'Edit',
    'translate' => 'Translate',
    'delete' => 'Delete',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_video_link_caption']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_video_link_caption']['multi_type'] = 'ul';
  $export['slc_project_page'] = $view;

  return $export;
}
