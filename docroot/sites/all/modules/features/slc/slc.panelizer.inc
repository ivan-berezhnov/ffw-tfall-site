<?php
/**
 * @file
 * slc.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function slc_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:student_leaders_campaign:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'student_leaders_campaign';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1a55d575-0f23-4d1c-b8b7-db535172d7c3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-73b30871-8689-4e2d-8736-a0d565d9680b';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_student_names';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '73b30871-8689-4e2d-8736-a0d565d9680b';
    $display->content['new-73b30871-8689-4e2d-8736-a0d565d9680b'] = $pane;
    $display->panels['contentmain'][0] = 'new-73b30871-8689-4e2d-8736-a0d565d9680b';
    $pane = new stdClass();
    $pane->pid = 'new-065c23fc-dc6a-4eb9-a887-eaecdd92e47c';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_age_grade';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '065c23fc-dc6a-4eb9-a887-eaecdd92e47c';
    $display->content['new-065c23fc-dc6a-4eb9-a887-eaecdd92e47c'] = $pane;
    $display->panels['contentmain'][1] = 'new-065c23fc-dc6a-4eb9-a887-eaecdd92e47c';
    $pane = new stdClass();
    $pane->pid = 'new-528c2922-582f-4ea5-9668-779f2e01093d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slc_facebook';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '528c2922-582f-4ea5-9668-779f2e01093d';
    $display->content['new-528c2922-582f-4ea5-9668-779f2e01093d'] = $pane;
    $display->panels['contentmain'][2] = 'new-528c2922-582f-4ea5-9668-779f2e01093d';
    $pane = new stdClass();
    $pane->pid = 'new-d9393c75-068d-4eeb-a537-d84af5beaaeb';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slc_twitter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd9393c75-068d-4eeb-a537-d84af5beaaeb';
    $display->content['new-d9393c75-068d-4eeb-a537-d84af5beaaeb'] = $pane;
    $display->panels['contentmain'][3] = 'new-d9393c75-068d-4eeb-a537-d84af5beaaeb';
    $pane = new stdClass();
    $pane->pid = 'new-12d33cfb-ee59-41d5-8cec-4c477e705348';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slc_instagram';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '12d33cfb-ee59-41d5-8cec-4c477e705348';
    $display->content['new-12d33cfb-ee59-41d5-8cec-4c477e705348'] = $pane;
    $display->panels['contentmain'][4] = 'new-12d33cfb-ee59-41d5-8cec-4c477e705348';
    $pane = new stdClass();
    $pane->pid = 'new-5c32ae0b-812e-42e8-8a08-1629e5741d49';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_question1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5c32ae0b-812e-42e8-8a08-1629e5741d49';
    $display->content['new-5c32ae0b-812e-42e8-8a08-1629e5741d49'] = $pane;
    $display->panels['contentmain'][5] = 'new-5c32ae0b-812e-42e8-8a08-1629e5741d49';
    $pane = new stdClass();
    $pane->pid = 'new-a5eead97-f681-4796-97ea-9e17f83afc1c';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_question2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a5eead97-f681-4796-97ea-9e17f83afc1c';
    $display->content['new-a5eead97-f681-4796-97ea-9e17f83afc1c'] = $pane;
    $display->panels['contentmain'][6] = 'new-a5eead97-f681-4796-97ea-9e17f83afc1c';
    $pane = new stdClass();
    $pane->pid = 'new-5edc76b2-3849-447e-9686-b151f66e621f';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_question3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '5edc76b2-3849-447e-9686-b151f66e621f';
    $display->content['new-5edc76b2-3849-447e-9686-b151f66e621f'] = $pane;
    $display->panels['contentmain'][7] = 'new-5edc76b2-3849-447e-9686-b151f66e621f';
    $pane = new stdClass();
    $pane->pid = 'new-83f5d165-895e-4d78-978d-70ea70a098d4';
    $pane->panel = 'footer';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_photos_caption';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'field_collection_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'edit' => 'Edit',
        'translate' => 'Translate',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => TRUE,
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '83f5d165-895e-4d78-978d-70ea70a098d4';
    $display->content['new-83f5d165-895e-4d78-978d-70ea70a098d4'] = $pane;
    $display->panels['footer'][0] = 'new-83f5d165-895e-4d78-978d-70ea70a098d4';
    $pane = new stdClass();
    $pane->pid = 'new-018822f8-6036-46df-9e74-2dbcaacdbcf9';
    $pane->panel = 'footer';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_link_caption';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'field_collection_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'edit' => 'Edit',
        'translate' => 'Translate',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => TRUE,
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '018822f8-6036-46df-9e74-2dbcaacdbcf9';
    $display->content['new-018822f8-6036-46df-9e74-2dbcaacdbcf9'] = $pane;
    $display->panels['footer'][1] = 'new-018822f8-6036-46df-9e74-2dbcaacdbcf9';
    $pane = new stdClass();
    $pane->pid = 'new-8eb90c96-ad10-4a40-baed-310a044de462';
    $pane->panel = 'footer';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_support_docs';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8eb90c96-ad10-4a40-baed-310a044de462';
    $display->content['new-8eb90c96-ad10-4a40-baed-310a044de462'] = $pane;
    $display->panels['footer'][2] = 'new-8eb90c96-ad10-4a40-baed-310a044de462';
    $pane = new stdClass();
    $pane->pid = 'new-c83895c4-a5df-408a-b521-7f43751e25bd';
    $pane->panel = 'footer';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c83895c4-a5df-408a-b521-7f43751e25bd';
    $display->content['new-c83895c4-a5df-408a-b521-7f43751e25bd'] = $pane;
    $display->panels['footer'][3] = 'new-c83895c4-a5df-408a-b521-7f43751e25bd';
    $pane = new stdClass();
    $pane->pid = 'new-c4c78fc8-10da-41ed-a20a-bd5854f11bed';
    $pane->panel = 'footer';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_submitters_lname';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c4c78fc8-10da-41ed-a20a-bd5854f11bed';
    $display->content['new-c4c78fc8-10da-41ed-a20a-bd5854f11bed'] = $pane;
    $display->panels['footer'][4] = 'new-c4c78fc8-10da-41ed-a20a-bd5854f11bed';
    $pane = new stdClass();
    $pane->pid = 'new-c73b0984-92a7-4581-bfa9-4cf4abcd058e';
    $pane->panel = 'footer';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_submitters_fname';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c73b0984-92a7-4581-bfa9-4cf4abcd058e';
    $display->content['new-c73b0984-92a7-4581-bfa9-4cf4abcd058e'] = $pane;
    $display->panels['footer'][5] = 'new-c73b0984-92a7-4581-bfa9-4cf4abcd058e';
    $pane = new stdClass();
    $pane->pid = 'new-957051a5-f7a3-4e1e-beab-b136eec8e81d';
    $pane->panel = 'footer';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_current_job';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '957051a5-f7a3-4e1e-beab-b136eec8e81d';
    $display->content['new-957051a5-f7a3-4e1e-beab-b136eec8e81d'] = $pane;
    $display->panels['footer'][6] = 'new-957051a5-f7a3-4e1e-beab-b136eec8e81d';
    $pane = new stdClass();
    $pane->pid = 'new-b3be5380-7a8f-4576-9331-b684c7392631';
    $pane->panel = 'footer';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_submitters_email';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b3be5380-7a8f-4576-9331-b684c7392631';
    $display->content['new-b3be5380-7a8f-4576-9331-b684c7392631'] = $pane;
    $display->panels['footer'][7] = 'new-b3be5380-7a8f-4576-9331-b684c7392631';
    $pane = new stdClass();
    $pane->pid = 'new-3423b4e8-3067-4180-b968-fe0e869436c7';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slc_headline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3423b4e8-3067-4180-b968-fe0e869436c7';
    $display->content['new-3423b4e8-3067-4180-b968-fe0e869436c7'] = $pane;
    $display->panels['header'][0] = 'new-3423b4e8-3067-4180-b968-fe0e869436c7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c73b0984-92a7-4581-bfa9-4cf4abcd058e';
  $panelizer->display = $display;
  $export['node:student_leaders_campaign:default'] = $panelizer;

  return $export;
}
