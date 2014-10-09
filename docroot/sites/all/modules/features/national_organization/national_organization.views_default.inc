<?php
/**
 * @file
 * national_organization.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function national_organization_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nos_az';
  $view->description = 'list of national organization A to Z => for National Organizations landing page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'list of nos A-Z';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['text'] = 'oooo';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_country']['type'] = 'i18n_list_default';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Country (field_country) */
  $handler->display->display_options['sorts']['field_country_value']['id'] = 'field_country_value';
  $handler->display->display_options['sorts']['field_country_value']['table'] = 'field_data_field_country';
  $handler->display->display_options['sorts']['field_country_value']['field'] = 'field_country_value';
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
    'national_organization' => 'national_organization',
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Careers Pane */
  $handler = $view->new_display('panel_pane', 'Careers Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['text'] = 'oooo';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Careers Document */
  $handler->display->display_options['fields']['field_careers_document']['id'] = 'field_careers_document';
  $handler->display->display_options['fields']['field_careers_document']['table'] = 'field_data_field_careers_document';
  $handler->display->display_options['fields']['field_careers_document']['field'] = 'field_careers_document';
  $handler->display->display_options['fields']['field_careers_document']['label'] = '';
  $handler->display->display_options['fields']['field_careers_document']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_careers_document']['alter']['text'] = '<a href="[field_careers_document] ">Download Jobs List</a>';
  $handler->display->display_options['fields']['field_careers_document']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_careers_document']['element_class'] = 'red';
  $handler->display->display_options['fields']['field_careers_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_careers_document']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_careers_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_careers_document']['type'] = 'file_url_plain';
  /* Field: Content: Careers Page */
  $handler->display->display_options['fields']['field_careers_page']['id'] = 'field_careers_page';
  $handler->display->display_options['fields']['field_careers_page']['table'] = 'field_data_field_careers_page';
  $handler->display->display_options['fields']['field_careers_page']['field'] = 'field_careers_page';
  $handler->display->display_options['fields']['field_careers_page']['label'] = '';
  $handler->display->display_options['fields']['field_careers_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_careers_page']['alter']['text'] = '<a href="[field_careers_page-url]">Join the Team</a>';
  $handler->display->display_options['fields']['field_careers_page']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_careers_page']['element_class'] = 'red';
  $handler->display->display_options['fields']['field_careers_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_careers_page']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_careers_page']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_careers_page']['type'] = 'link_url';
  /* Field: Content: Contact Info */
  $handler->display->display_options['fields']['field_contact_info']['id'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['table'] = 'field_data_field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['field'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['label'] = '';
  $handler->display->display_options['fields']['field_contact_info']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_contact_info']['element_class'] = 'small-body';
  $handler->display->display_options['fields']['field_contact_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_info']['hide_empty'] = TRUE;

  /* Display: Teach Pane */
  $handler = $view->new_display('panel_pane', 'Teach Pane', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['text'] = 'oooo';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Contact Info */
  $handler->display->display_options['fields']['field_contact_info']['id'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['table'] = 'field_data_field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['field'] = 'field_contact_info';
  $handler->display->display_options['fields']['field_contact_info']['label'] = '';
  $handler->display->display_options['fields']['field_contact_info']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_contact_info']['element_class'] = 'small-body';
  $handler->display->display_options['fields']['field_contact_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_info']['hide_empty'] = TRUE;
  /* Field: Content: Teach Page */
  $handler->display->display_options['fields']['field_teach_page']['id'] = 'field_teach_page';
  $handler->display->display_options['fields']['field_teach_page']['table'] = 'field_data_field_teach_page';
  $handler->display->display_options['fields']['field_teach_page']['field'] = 'field_teach_page';
  $handler->display->display_options['fields']['field_teach_page']['label'] = '';
  $handler->display->display_options['fields']['field_teach_page']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_teach_page']['element_class'] = 'red';
  $handler->display->display_options['fields']['field_teach_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teach_page']['click_sort_column'] = 'url';
  $export['nos_az'] = $view;

  return $export;
}
