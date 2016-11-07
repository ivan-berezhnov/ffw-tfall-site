<?php
/**
 * @file
 * press_center_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function press_center_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'leadership_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Leadership videos';
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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span3';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'video_archive';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
h3.news__title {
  min-height: 75px;
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'leadership_videos' => 'leadership_videos',
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
    'slc_slider' => 0,
    'slc_recent' => 0,
    'press_center_slideshow' => 0,
    'press_center_video_slideshow' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'news' => 'news',
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
  /* Filter criterion: Field: Embedded Video (field_embedded_video:video_url) */
  $handler->display->display_options['filters']['field_embedded_video_video_url']['id'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['field'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['value'] = 'vimeo';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['group'] = 1;
  /* Filter criterion: Content: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = array(
    916 => '916',
  );
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'news';

  /* Display: Leadership videos */
  $handler = $view->new_display('page', 'Leadership videos', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container news-latest';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'video_archive';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Embedded Video */
  $handler->display->display_options['fields']['field_embedded_video']['id'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['field'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['label'] = '';
  $handler->display->display_options['fields']['field_embedded_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_embedded_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_embedded_video']['settings'] = array(
    'video_style' => 'teaser',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'black';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Embedded Video (field_embedded_video:video_url) */
  $handler->display->display_options['filters']['field_embedded_video_video_url']['id'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['field'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'network_learning' => 'network_learning',
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'leadership-videos';

  /* Display: Leadership videos block */
  $handler = $view->new_display('block', 'Leadership videos block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span4';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: embed video - inside */
  $handler->display->display_options['fields']['field_embedded_video']['id'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['field'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['ui_name'] = 'embed video - inside';
  $handler->display->display_options['fields']['field_embedded_video']['label'] = '';
  $handler->display->display_options['fields']['field_embedded_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_embedded_video']['alter']['text'] = '[field_embedded_video-video_url] 
';
  $handler->display->display_options['fields']['field_embedded_video']['alter']['path'] = '[field_embedded_video-video_url] ';
  $handler->display->display_options['fields']['field_embedded_video']['alter']['rel'] = 'shadowbox';
  $handler->display->display_options['fields']['field_embedded_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_embedded_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_embedded_video']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_embedded_video']['settings'] = array(
    'video_style' => 'fullsize',
    'image_style' => 'video_teaser',
  );
  /* Field: embed video - trigger */
  $handler->display->display_options['fields']['field_embedded_video_1']['id'] = 'field_embedded_video_1';
  $handler->display->display_options['fields']['field_embedded_video_1']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video_1']['field'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video_1']['ui_name'] = 'embed video - trigger';
  $handler->display->display_options['fields']['field_embedded_video_1']['label'] = '';
  $handler->display->display_options['fields']['field_embedded_video_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_embedded_video_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_embedded_video_1']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_embedded_video_1']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_embedded_video_1']['settings'] = array(
    'image_style' => 'video_teaser',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'black';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['block_description'] = 'Leadership videos block';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span4';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'videoarchive';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'video archive block 2';

  /* Display: Global Conf videos */
  $handler = $view->new_display('block', 'Global Conf videos', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Global Conference Videos 2016';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span4';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'videoarchive';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'global_conference_videos_2016' => 'global_conference_videos_2016',
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
    'slc_slider' => 0,
    'slc_recent' => 0,
    'press_center_slideshow' => 0,
    'leadership_videos' => 0,
  );
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Field: Embedded Video (field_embedded_video:video_url) */
  $handler->display->display_options['filters']['field_embedded_video_video_url']['id'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['field'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['value'] = 'vimeo';
  $handler->display->display_options['block_description'] = 'video archive block 2';
  $export['leadership_videos'] = $view;

  $view = new view();
  $view->name = 'press_center';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press Center';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Press Center';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row-fluid';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Press type */
  $handler->display->display_options['fields']['field_pc_press_type']['id'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['field'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_pc_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_pc_country']['id'] = 'field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['table'] = 'field_data_field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['field'] = 'field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['label'] = '';
  $handler->display->display_options['fields']['field_pc_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_country']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Partner */
  $handler->display->display_options['fields']['field_pc_partner']['id'] = 'field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['table'] = 'field_data_field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['field'] = 'field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['label'] = '';
  $handler->display->display_options['fields']['field_pc_partner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_partner']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_pc_publication_date']['id'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['field'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Credit name(s) */
  $handler->display->display_options['fields']['field_pc_credit_names']['id'] = 'field_pc_credit_names';
  $handler->display->display_options['fields']['field_pc_credit_names']['table'] = 'field_data_field_pc_credit_names';
  $handler->display->display_options['fields']['field_pc_credit_names']['field'] = 'field_pc_credit_names';
  $handler->display->display_options['fields']['field_pc_credit_names']['label'] = '';
  $handler->display->display_options['fields']['field_pc_credit_names']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_credit_names']['type'] = 'text_plain';
  /* Field: Content: Publication name */
  $handler->display->display_options['fields']['field_pc_publication_name']['id'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['table'] = 'field_data_field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['field'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_name']['element_label_colon'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_pc_summary']['id'] = 'field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['table'] = 'field_data_field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['field'] = 'field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['label'] = '';
  $handler->display->display_options['fields']['field_pc_summary']['element_label_colon'] = FALSE;
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_pc_external_link']['id'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['table'] = 'field_data_field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['field'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_pc_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pc_external_link']['type'] = 'link_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Publication date (field_pc_publication_date) */
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['id'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['field'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['order'] = 'DESC';
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Content: Press type (field_pc_press_type) */
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['id'] = 'field_pc_press_type_tid_1';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['field'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['value'] = array(
    757 => '757',
  );
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['vocabulary'] = 'press_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'press-center';

  /* Display: Block: TFAll Press */
  $handler = $view->new_display('block', 'Block: TFAll Press', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<div class="slug-medium">Teach For All Press</div>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6 col-sm-6 col-xs-12';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Press type */
  $handler->display->display_options['fields']['field_pc_press_type']['id'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['field'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_pc_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_pc_publication_date']['id'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['field'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_pc_external_link']['id'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['table'] = 'field_data_field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['field'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['text'] = '<h3><a href="[field_pc_external_link] " target="_blank">[title]</a></h3>';
  $handler->display->display_options['fields']['field_pc_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pc_external_link']['type'] = 'link_plain';
  /* Field: Content: Publication name */
  $handler->display->display_options['fields']['field_pc_publication_name']['id'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['table'] = 'field_data_field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['field'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['text'] = ', [field_pc_publication_name] ';
  $handler->display->display_options['fields']['field_pc_publication_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Credit name(s) */
  $handler->display->display_options['fields']['field_pc_credit_names']['id'] = 'field_pc_credit_names';
  $handler->display->display_options['fields']['field_pc_credit_names']['table'] = 'field_data_field_pc_credit_names';
  $handler->display->display_options['fields']['field_pc_credit_names']['field'] = 'field_pc_credit_names';
  $handler->display->display_options['fields']['field_pc_credit_names']['label'] = '';
  $handler->display->display_options['fields']['field_pc_credit_names']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_credit_names']['alter']['text'] = 'by [field_pc_credit_names]<span class="publicationname">[field_pc_publication_name] </span>
';
  $handler->display->display_options['fields']['field_pc_credit_names']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_credit_names']['empty'] = '<span class="publicationname">[field_pc_publication_name] </span>';
  $handler->display->display_options['fields']['field_pc_credit_names']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pc_credit_names']['type'] = 'text_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publication date (field_pc_publication_date) */
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['id'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['field'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['order'] = 'DESC';
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Content: Press type (field_pc_press_type) */
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['id'] = 'field_pc_press_type_tid_1';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['field'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['value'] = array(
    726 => '726',
  );
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['vocabulary'] = 'press_type';

  /* Display: Block: Partner Press */
  $handler = $view->new_display('block', 'Block: Partner Press', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<div class="slug-medium">Partner Press</div>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6 col-sm-6 col-xs-12';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Press type */
  $handler->display->display_options['fields']['field_pc_press_type']['id'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['field'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_pc_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_pc_publication_date']['id'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['field'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_pc_external_link']['id'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['table'] = 'field_data_field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['field'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['text'] = '<h3><a href="[field_pc_external_link] " target="_blank">[title]</a></h3>';
  $handler->display->display_options['fields']['field_pc_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pc_external_link']['type'] = 'link_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_pc_country']['id'] = 'field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['table'] = 'field_data_field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['field'] = 'field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['label'] = '';
  $handler->display->display_options['fields']['field_pc_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_country']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Partner */
  $handler->display->display_options['fields']['field_pc_partner']['id'] = 'field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['table'] = 'field_data_field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['field'] = 'field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['label'] = '';
  $handler->display->display_options['fields']['field_pc_partner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_partner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_partner']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication name */
  $handler->display->display_options['fields']['field_pc_publication_name']['id'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['table'] = 'field_data_field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['field'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['text'] = '[field_pc_partner], <span class="publicationname">[field_pc_publication_name] </font>';
  $handler->display->display_options['fields']['field_pc_publication_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publication date (field_pc_publication_date) */
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['id'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['field'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['order'] = 'DESC';
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Content: Press type (field_pc_press_type) */
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['id'] = 'field_pc_press_type_tid_1';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['field'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['value'] = array(
    721 => '721',
  );
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['vocabulary'] = 'press_type';

  /* Display: Teach For All Press */
  $handler = $view->new_display('page', 'Teach For All Press', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Press type */
  $handler->display->display_options['fields']['field_pc_press_type']['id'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['field'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_pc_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_pc_publication_date']['id'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['field'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_pc_external_link']['id'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['table'] = 'field_data_field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['field'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['text'] = '<h2><a href="[field_pc_external_link] " target="_blank">[title]</a></h2>';
  $handler->display->display_options['fields']['field_pc_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pc_external_link']['type'] = 'link_plain';
  /* Field: Content: Publication name */
  $handler->display->display_options['fields']['field_pc_publication_name']['id'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['table'] = 'field_data_field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['field'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['text'] = ' [field_pc_publication_name] ';
  $handler->display->display_options['fields']['field_pc_publication_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Credit name(s) */
  $handler->display->display_options['fields']['field_pc_credit_names']['id'] = 'field_pc_credit_names';
  $handler->display->display_options['fields']['field_pc_credit_names']['table'] = 'field_data_field_pc_credit_names';
  $handler->display->display_options['fields']['field_pc_credit_names']['field'] = 'field_pc_credit_names';
  $handler->display->display_options['fields']['field_pc_credit_names']['label'] = '';
  $handler->display->display_options['fields']['field_pc_credit_names']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_credit_names']['alter']['text'] = 'by [field_pc_credit_names], <span class="publicationname">[field_pc_publication_name] </span>';
  $handler->display->display_options['fields']['field_pc_credit_names']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_credit_names']['empty'] = '<span class="publicationname">[field_pc_publication_name] </span>';
  $handler->display->display_options['fields']['field_pc_credit_names']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pc_credit_names']['type'] = 'text_plain';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_pc_summary']['id'] = 'field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['table'] = 'field_data_field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['field'] = 'field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['label'] = '';
  $handler->display->display_options['fields']['field_pc_summary']['element_class'] = 'large-body';
  $handler->display->display_options['fields']['field_pc_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publication date (field_pc_publication_date) */
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['id'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['field'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['order'] = 'DESC';
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Content: Press type (field_pc_press_type) */
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['id'] = 'field_pc_press_type_tid_1';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['field'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['value'] = array(
    726 => '726',
  );
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['vocabulary'] = 'press_type';
  $handler->display->display_options['path'] = 'teach-for-all-press';

  /* Display: Partner Press */
  $handler = $view->new_display('page', 'Partner Press', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Press type */
  $handler->display->display_options['fields']['field_pc_press_type']['id'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['field'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_pc_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_pc_publication_date']['id'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['field'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_pc_external_link']['id'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['table'] = 'field_data_field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['field'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['text'] = '<h2><a href="[field_pc_external_link] " target="_blank">[title]</a></h2>';
  $handler->display->display_options['fields']['field_pc_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pc_external_link']['type'] = 'link_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_pc_country']['id'] = 'field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['table'] = 'field_data_field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['field'] = 'field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['label'] = '';
  $handler->display->display_options['fields']['field_pc_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_country']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Partner */
  $handler->display->display_options['fields']['field_pc_partner']['id'] = 'field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['table'] = 'field_data_field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['field'] = 'field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['label'] = '';
  $handler->display->display_options['fields']['field_pc_partner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_partner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_partner']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication name */
  $handler->display->display_options['fields']['field_pc_publication_name']['id'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['table'] = 'field_data_field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['field'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['text'] = '[field_pc_partner], <span class="publicationname">[field_pc_publication_name] </span>';
  $handler->display->display_options['fields']['field_pc_publication_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publication date (field_pc_publication_date) */
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['id'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['field'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['order'] = 'DESC';
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Content: Press type (field_pc_press_type) */
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['id'] = 'field_pc_press_type_tid_1';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['field'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['value'] = array(
    721 => '721',
  );
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['vocabulary'] = 'press_type';
  $handler->display->display_options['path'] = 'partner-press';

  /* Display: Broadcast Media */
  $handler = $view->new_display('page', 'Broadcast Media', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Press type */
  $handler->display->display_options['fields']['field_pc_press_type']['id'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['field'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_pc_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_pc_external_link_1']['id'] = 'field_pc_external_link_1';
  $handler->display->display_options['fields']['field_pc_external_link_1']['table'] = 'field_data_field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link_1']['field'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_pc_external_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_external_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_external_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pc_external_link_1']['type'] = 'link_plain';
  /* Field: Content: Image needed for video links */
  $handler->display->display_options['fields']['field_pc_image']['id'] = 'field_pc_image';
  $handler->display->display_options['fields']['field_pc_image']['table'] = 'field_data_field_pc_image';
  $handler->display->display_options['fields']['field_pc_image']['field'] = 'field_pc_image';
  $handler->display->display_options['fields']['field_pc_image']['label'] = '';
  $handler->display->display_options['fields']['field_pc_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_image']['alter']['text'] = '<a href="[field_pc_external_link_1]" target="_blank">[field_pc_image]</a>
<div class="icon-play"></div>';
  $handler->display->display_options['fields']['field_pc_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_image']['element_wrapper_class'] = 'span4';
  $handler->display->display_options['fields']['field_pc_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pc_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = '<none>';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_pc_publication_date',
    1 => 'title',
    2 => 'field_pc_external_link',
    3 => 'field_pc_publication_name',
    4 => 'field_pc_summary',
    5 => 'edit_node',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'span8';
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_pc_publication_date']['id'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['field'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_pc_external_link']['id'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['table'] = 'field_data_field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['field'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['text'] = '<h3><a href="[field_pc_external_link] " target="_blank">[title]</a></h3>';
  $handler->display->display_options['fields']['field_pc_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pc_external_link']['type'] = 'link_plain';
  /* Field: Content: Publication name */
  $handler->display->display_options['fields']['field_pc_publication_name']['id'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['table'] = 'field_data_field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['field'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['text'] = '<span class="publicationname">[field_pc_publication_name] </span>';
  $handler->display->display_options['fields']['field_pc_publication_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_name']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_pc_summary']['id'] = 'field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['table'] = 'field_data_field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['field'] = 'field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['label'] = '';
  $handler->display->display_options['fields']['field_pc_summary']['element_class'] = 'large-body';
  $handler->display->display_options['fields']['field_pc_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publication date (field_pc_publication_date) */
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['id'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['field'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['order'] = 'DESC';
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Content: Press type (field_pc_press_type) */
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['id'] = 'field_pc_press_type_tid_1';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['field'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['value'] = array(
    741 => '741',
  );
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['vocabulary'] = 'press_type';
  $handler->display->display_options['path'] = 'tv-news-video';

  /* Display: Press Releases */
  $handler = $view->new_display('block', 'Press Releases', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<div class="slug-medium">Press Releases</div>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Press type */
  $handler->display->display_options['fields']['field_pc_press_type']['id'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['field'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_pc_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_pc_publication_date']['id'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['field'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Downloadable files */
  $handler->display->display_options['fields']['field_pc_download']['id'] = 'field_pc_download';
  $handler->display->display_options['fields']['field_pc_download']['table'] = 'field_data_field_pc_download';
  $handler->display->display_options['fields']['field_pc_download']['field'] = 'field_pc_download';
  $handler->display->display_options['fields']['field_pc_download']['label'] = '';
  $handler->display->display_options['fields']['field_pc_download']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_download']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_download']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pc_download']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_pc_download']['settings'] = array(
    'text' => 'Download ',
  );
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_pc_external_link']['id'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['table'] = 'field_data_field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['field'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_pc_external_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['text'] = '<h3><a href="[field_pc_external_link] [field_pc_download]" target="_blank">[title]</a></h3>';
  $handler->display->display_options['fields']['field_pc_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pc_external_link']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3><a href="[field_pc_external_link] [field_pc_download]" target="_blank">[title]</a></h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Content: Press type (field_pc_press_type) */
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['id'] = 'field_pc_press_type_tid_1';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['field'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['value'] = array(
    736 => '736',
  );
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['vocabulary'] = 'press_type';

  /* Display: Downloads */
  $handler = $view->new_display('block', 'Downloads', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<div class="slug-medium">Downloads</div>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Press type */
  $handler->display->display_options['fields']['field_pc_press_type']['id'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['field'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_pc_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Downloadable files */
  $handler->display->display_options['fields']['field_pc_download']['id'] = 'field_pc_download';
  $handler->display->display_options['fields']['field_pc_download']['table'] = 'field_data_field_pc_download';
  $handler->display->display_options['fields']['field_pc_download']['field'] = 'field_pc_download';
  $handler->display->display_options['fields']['field_pc_download']['label'] = '';
  $handler->display->display_options['fields']['field_pc_download']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_download']['alter']['text'] = '<h3><a href="[field_pc_download]">[title]</a></h3>';
  $handler->display->display_options['fields']['field_pc_download']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_download']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pc_download']['type'] = 'file_url_plain';
  /* Field: Content: Press kit file info */
  $handler->display->display_options['fields']['field_pc_press_kit_info']['id'] = 'field_pc_press_kit_info';
  $handler->display->display_options['fields']['field_pc_press_kit_info']['table'] = 'field_data_field_pc_press_kit_info';
  $handler->display->display_options['fields']['field_pc_press_kit_info']['field'] = 'field_pc_press_kit_info';
  $handler->display->display_options['fields']['field_pc_press_kit_info']['label'] = '';
  $handler->display->display_options['fields']['field_pc_press_kit_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_press_kit_info']['type'] = 'text_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Content: Press type (field_pc_press_type) */
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['id'] = 'field_pc_press_type_tid_1';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['field'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['value'] = array(
    731 => '731',
  );
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['vocabulary'] = 'press_type';

  /* Display: Partner Press2 */
  $handler = $view->new_display('page', 'Partner Press2', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Press type */
  $handler->display->display_options['fields']['field_pc_press_type']['id'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['field'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_pc_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_pc_publication_date']['id'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['field'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_pc_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_pc_external_link']['id'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['table'] = 'field_data_field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['field'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['text'] = '<h3><a href="[field_pc_external_link] " target="_blank">[title]</a></h3>';
  $handler->display->display_options['fields']['field_pc_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pc_external_link']['type'] = 'link_plain';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_pc_country']['id'] = 'field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['table'] = 'field_data_field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['field'] = 'field_pc_country';
  $handler->display->display_options['fields']['field_pc_country']['label'] = '';
  $handler->display->display_options['fields']['field_pc_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_country']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Partner */
  $handler->display->display_options['fields']['field_pc_partner']['id'] = 'field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['table'] = 'field_data_field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['field'] = 'field_pc_partner';
  $handler->display->display_options['fields']['field_pc_partner']['label'] = '';
  $handler->display->display_options['fields']['field_pc_partner']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_partner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_partner']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Publication name */
  $handler->display->display_options['fields']['field_pc_publication_name']['id'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['table'] = 'field_data_field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['field'] = 'field_pc_publication_name';
  $handler->display->display_options['fields']['field_pc_publication_name']['label'] = '';
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pc_publication_name']['alter']['text'] = 'Re: [field_pc_partner] - [field_pc_country], <em>[field_pc_publication_name] </em>';
  $handler->display->display_options['fields']['field_pc_publication_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_publication_name']['type'] = 'taxonomy_term_reference_plain';
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Content: Press type (field_pc_press_type) */
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['id'] = 'field_pc_press_type_tid_1';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['field'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['value'] = array(
    481 => '481',
  );
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_pc_press_type_tid_1']['vocabulary'] = 'press_type';
  $handler->display->display_options['path'] = 'partner-press';
  $export['press_center'] = $view;

  $view = new view();
  $view->name = 'press_center_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press Center slider';
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
    'press_center_slideshow' => 'press_center_slideshow',
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
    'slc_slider' => 0,
    'slc_recent' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Publication date (field_pc_publication_date) */
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['id'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['field'] = 'field_pc_publication_date_value';
  $handler->display->display_options['sorts']['field_pc_publication_date_value']['order'] = 'DESC';
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Content: Press type (field_pc_press_type) */
  $handler->display->display_options['filters']['field_pc_press_type_tid']['id'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['filters']['field_pc_press_type_tid']['field'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid']['value'] = array(
    0 => '501',
  );
  $handler->display->display_options['filters']['field_pc_press_type_tid']['vocabulary'] = 'press_type';

  /* Display: News */
  $handler = $view->new_display('page', 'News', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container news-page';
  $handler->display->display_options['display_description'] = 'display list of news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
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
  /* Field: Content: Marquee Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Marquee Blurb */
  $handler->display->display_options['fields']['field_news_byline']['id'] = 'field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['table'] = 'field_data_field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['field'] = 'field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['label'] = '';
  $handler->display->display_options['fields']['field_news_byline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_byline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_byline']['hide_empty'] = TRUE;
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
  /* Field: Field: Embedded Video */
  $handler->display->display_options['fields']['field_embedded_video']['id'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['field'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['label'] = '';
  $handler->display->display_options['fields']['field_embedded_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_embedded_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_embedded_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_embedded_video']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'news-view';

  /* Display: Latest News */
  $handler = $view->new_display('page', 'Latest News', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container news-latest';
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
  /* Field: Content: Marquee Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Network Learning image */
  $handler->display->display_options['fields']['field_network_learning_image']['id'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['table'] = 'field_data_field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['field'] = 'field_network_learning_image';
  $handler->display->display_options['fields']['field_network_learning_image']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_learning_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_network_learning_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Marquee Blurb */
  $handler->display->display_options['fields']['field_news_byline']['id'] = 'field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['table'] = 'field_data_field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['field'] = 'field_news_byline';
  $handler->display->display_options['fields']['field_news_byline']['label'] = '';
  $handler->display->display_options['fields']['field_news_byline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_byline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_byline']['hide_empty'] = TRUE;
  /* Field: Content: Blurb */
  $handler->display->display_options['fields']['field_network_learning_byline']['id'] = 'field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['table'] = 'field_data_field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['field'] = 'field_network_learning_byline';
  $handler->display->display_options['fields']['field_network_learning_byline']['label'] = '';
  $handler->display->display_options['fields']['field_network_learning_byline']['element_label_colon'] = FALSE;
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
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['path'] = 'news-latest-view';

  /* Display: Press Center Flexslider */
  $handler = $view->new_display('block', 'Press Center Flexslider', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'news-flexslider';
  $handler->display->display_options['display_description'] = 'Available for Press Center pages';
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
  /* Field: Content: Press type */
  $handler->display->display_options['fields']['field_pc_press_type']['id'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['field'] = 'field_pc_press_type';
  $handler->display->display_options['fields']['field_pc_press_type']['label'] = '';
  $handler->display->display_options['fields']['field_pc_press_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_press_type']['element_label_colon'] = FALSE;
  /* Field: Content: Image needed for video links */
  $handler->display->display_options['fields']['field_pc_image']['id'] = 'field_pc_image';
  $handler->display->display_options['fields']['field_pc_image']['table'] = 'field_data_field_pc_image';
  $handler->display->display_options['fields']['field_pc_image']['field'] = 'field_pc_image';
  $handler->display->display_options['fields']['field_pc_image']['label'] = '';
  $handler->display->display_options['fields']['field_pc_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pc_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_pc_external_link']['id'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['table'] = 'field_data_field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['field'] = 'field_pc_external_link';
  $handler->display->display_options['fields']['field_pc_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_pc_external_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_external_link']['alter']['text'] = '<h3><a href="[field_pc_external_link] " target="_blank">[title]</a></h3>';
  $handler->display->display_options['fields']['field_pc_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pc_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pc_external_link']['type'] = 'link_absolute';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_pc_summary']['id'] = 'field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['table'] = 'field_data_field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['field'] = 'field_pc_summary';
  $handler->display->display_options['fields']['field_pc_summary']['label'] = '';
  $handler->display->display_options['fields']['field_pc_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_summary']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news__flexslider__wrapper flexslider-wrapper">
[field_pc_image] 
<div class="news__flexslider__info flexslider-info">
<h2><a href="[field_pc_external_link] " target="_blank">[title]</a></h2>
   <div class="news__preview flexslider-preview visible-desktop">
[field_pc_summary] 
    </div>
<div class="news__link flexslider-link hidden-phone">
      <span><a href="[field_pc_external_link] " target="_blank">WATCH VIDEO <span class="orange2">&gt;&gt;</span></a></span>    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_pc_publication_date']['id'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['table'] = 'field_data_field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['field'] = 'field_pc_publication_date';
  $handler->display->display_options['fields']['field_pc_publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pc_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
    'press_center' => 'press_center',
  );
  /* Filter criterion: Content: Press type (field_pc_press_type) */
  $handler->display->display_options['filters']['field_pc_press_type_tid']['id'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid']['table'] = 'field_data_field_pc_press_type';
  $handler->display->display_options['filters']['field_pc_press_type_tid']['field'] = 'field_pc_press_type_tid';
  $handler->display->display_options['filters']['field_pc_press_type_tid']['value'] = array(
    0 => '741',
  );
  $handler->display->display_options['filters']['field_pc_press_type_tid']['vocabulary'] = 'press_type';
  $handler->display->display_options['block_description'] = 'Flexslider Press Center Block';
  $export['press_center_slider'] = $view;

  $view = new view();
  $view->name = 'press_video_archive';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press video archive';
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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '12';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span3';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'video_archive';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
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
    'news' => 'news',
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
  /* Filter criterion: Field: Embedded Video (field_embedded_video:video_url) */
  $handler->display->display_options['filters']['field_embedded_video_video_url']['id'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['field'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['value'] = 'vimeo';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['group'] = 1;

  /* Display: News video archive page */
  $handler = $view->new_display('page', 'News video archive page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container news-latest';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'videoarchive';
  $handler->display->display_options['row_options']['links'] = FALSE;
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
  /* Field: Field: Embedded Video */
  $handler->display->display_options['fields']['field_embedded_video']['id'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['field'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['label'] = '';
  $handler->display->display_options['fields']['field_embedded_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_embedded_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_embedded_video']['settings'] = array(
    'video_style' => 'teaser',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'black';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Embedded Video (field_embedded_video:video_url) */
  $handler->display->display_options['filters']['field_embedded_video_video_url']['id'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['field'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'network_learning' => 'network_learning',
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'news-video-archive';

  /* Display: Video archive block */
  $handler = $view->new_display('block', 'Video archive block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span4';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: embed video - inside */
  $handler->display->display_options['fields']['field_embedded_video']['id'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['field'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video']['ui_name'] = 'embed video - inside';
  $handler->display->display_options['fields']['field_embedded_video']['label'] = '';
  $handler->display->display_options['fields']['field_embedded_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_embedded_video']['alter']['text'] = '[field_embedded_video-video_url] 
';
  $handler->display->display_options['fields']['field_embedded_video']['alter']['path'] = '[field_embedded_video-video_url] ';
  $handler->display->display_options['fields']['field_embedded_video']['alter']['rel'] = 'shadowbox';
  $handler->display->display_options['fields']['field_embedded_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_embedded_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_embedded_video']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_embedded_video']['settings'] = array(
    'video_style' => 'fullsize',
    'image_style' => 'video_teaser',
  );
  /* Field: embed video - trigger */
  $handler->display->display_options['fields']['field_embedded_video_1']['id'] = 'field_embedded_video_1';
  $handler->display->display_options['fields']['field_embedded_video_1']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video_1']['field'] = 'field_embedded_video';
  $handler->display->display_options['fields']['field_embedded_video_1']['ui_name'] = 'embed video - trigger';
  $handler->display->display_options['fields']['field_embedded_video_1']['label'] = '';
  $handler->display->display_options['fields']['field_embedded_video_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_embedded_video_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_embedded_video_1']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_embedded_video_1']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_embedded_video_1']['settings'] = array(
    'image_style' => 'video_teaser',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'black';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
    'news' => 'news',
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
  /* Filter criterion: Field: Embedded Video (field_embedded_video:video_url) */
  $handler->display->display_options['filters']['field_embedded_video_video_url']['id'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['table'] = 'field_data_field_embedded_video';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['field'] = 'field_embedded_video_video_url';
  $handler->display->display_options['filters']['field_embedded_video_video_url']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Press video archive block';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span4';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'videoarchive';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'video archive block 2';
  $export['press_video_archive'] = $view;

  return $export;
}
