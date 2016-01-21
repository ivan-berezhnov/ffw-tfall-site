<?php
/**
 * @file
 * slc.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slc_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__slc_landing';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'SLC Landing',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'slc-campaign-landing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'slc_landing',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'student-leaders-campaign',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->title = '';
  $display->uuid = '675a87c9-915d-41f7-9d6f-4d67fdb3ee4b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eeaf6297-beb2-43ea-90d7-d912c059f9af';
    $pane->panel = 'contentmain';
    $pane->type = 'views';
    $pane->subtype = 'slc_landing_slider';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eeaf6297-beb2-43ea-90d7-d912c059f9af';
    $display->content['new-eeaf6297-beb2-43ea-90d7-d912c059f9af'] = $pane;
    $display->panels['contentmain'][0] = 'new-eeaf6297-beb2-43ea-90d7-d912c059f9af';
    $pane = new stdClass();
    $pane->pid = 'new-60d53b12-9040-4b2a-b8ca-ae05fc9f66c0';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'slc_landing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'news__content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '60d53b12-9040-4b2a-b8ca-ae05fc9f66c0';
    $display->content['new-60d53b12-9040-4b2a-b8ca-ae05fc9f66c0'] = $pane;
    $display->panels['footer'][0] = 'new-60d53b12-9040-4b2a-b8ca-ae05fc9f66c0';
    $pane = new stdClass();
    $pane->pid = 'new-f4de853d-88d5-41a4-bbbf-183a88101f91';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'slc_landing-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f4de853d-88d5-41a4-bbbf-183a88101f91';
    $display->content['new-f4de853d-88d5-41a4-bbbf-183a88101f91'] = $pane;
    $display->panels['footer'][1] = 'new-f4de853d-88d5-41a4-bbbf-183a88101f91';
    $pane = new stdClass();
    $pane->pid = 'new-faaf0749-f819-4ba0-8505-2a81f3c19b72';
    $pane->panel = 'header';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1946';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'slc-leaders',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'faaf0749-f819-4ba0-8505-2a81f3c19b72';
    $display->content['new-faaf0749-f819-4ba0-8505-2a81f3c19b72'] = $pane;
    $display->panels['header'][0] = 'new-faaf0749-f819-4ba0-8505-2a81f3c19b72';
    $pane = new stdClass();
    $pane->pid = 'new-e51b69f0-c676-4391-9389-85e76677a642';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'wysiwyg_ckeditor',
      'substitute' => TRUE,
      'name' => 'slc_top_logo_link',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'slc-leaders',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e51b69f0-c676-4391-9389-85e76677a642';
    $display->content['new-e51b69f0-c676-4391-9389-85e76677a642'] = $pane;
    $display->panels['header'][1] = 'new-e51b69f0-c676-4391-9389-85e76677a642';
    $pane = new stdClass();
    $pane->pid = 'new-c48764de-9266-4e44-a656-6409767bf07b';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'block-38';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'slc-panel top',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c48764de-9266-4e44-a656-6409767bf07b';
    $display->content['new-c48764de-9266-4e44-a656-6409767bf07b'] = $pane;
    $display->panels['sidebar'][0] = 'new-c48764de-9266-4e44-a656-6409767bf07b';
    $pane = new stdClass();
    $pane->pid = 'new-1ddc4b46-378f-425f-aa86-168db4259800';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'block-37';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'slc-panel',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1ddc4b46-378f-425f-aa86-168db4259800';
    $display->content['new-1ddc4b46-378f-425f-aa86-168db4259800'] = $pane;
    $display->panels['sidebar'][1] = 'new-1ddc4b46-378f-425f-aa86-168db4259800';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__slc_landing'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__student_leaders_campaign_page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Student Leaders Campaign page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'slc-campaign-page ',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'student_leaders_campaign_page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'student_leaders_campaign' => 'student_leaders_campaign',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->title = '';
  $display->uuid = '5d688502-fa8f-4128-96cd-f4c749737cc6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cf7e5bcb-df44-4cca-b502-8475a566142e';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'slc_project_page-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'news__content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf7e5bcb-df44-4cca-b502-8475a566142e';
    $display->content['new-cf7e5bcb-df44-4cca-b502-8475a566142e'] = $pane;
    $display->panels['contentmain'][0] = 'new-cf7e5bcb-df44-4cca-b502-8475a566142e';
    $pane = new stdClass();
    $pane->pid = 'new-14b5f8ae-ae66-435d-a659-65e7f3cc10e6';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'field_collection_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '14b5f8ae-ae66-435d-a659-65e7f3cc10e6';
    $display->content['new-14b5f8ae-ae66-435d-a659-65e7f3cc10e6'] = $pane;
    $display->panels['footer'][0] = 'new-14b5f8ae-ae66-435d-a659-65e7f3cc10e6';
    $pane = new stdClass();
    $pane->pid = 'new-18214f98-ea79-45c3-8a97-c2e5250d971c';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'field_collection_view-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '18214f98-ea79-45c3-8a97-c2e5250d971c';
    $display->content['new-18214f98-ea79-45c3-8a97-c2e5250d971c'] = $pane;
    $display->panels['footer'][1] = 'new-18214f98-ea79-45c3-8a97-c2e5250d971c';
    $pane = new stdClass();
    $pane->pid = 'new-74d97c0b-a060-407f-8252-eeade165c498';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="slcfooter span4">  
<a href="/student-leaders-campaign" class="full-list"> CONTINUE EXPLORING STUDENT LEADERSHIP</a>
</div>
<div class="slcfooter span4">

</div>
<div class="slcfooter span4">
<div class="NGMedium large orange">SHARE THIS PAGE </div><div class="sociallinks"><a class="social-media icon-twitter" target="_blank" href="https://twitter.com/TeachForAll"></a>  <a class="social-media icon-facebook" target="_blank" href="https://facebook.com/teachforall"></a>  <a class="social-media icon-linkedin" target="_blank" href="https://www.linkedin.com/company/teach-for-all"></a> <a class="social-media icon-vimeo" target="_blank" href="https://vimeo.com/teachforall"></a></div>
</div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '74d97c0b-a060-407f-8252-eeade165c498';
    $display->content['new-74d97c0b-a060-407f-8252-eeade165c498'] = $pane;
    $display->panels['footer'][2] = 'new-74d97c0b-a060-407f-8252-eeade165c498';
    $pane = new stdClass();
    $pane->pid = 'new-2bf62318-4585-4aff-bf4d-9eb9cfc8a29e';
    $pane->panel = 'header';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1946';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'slc-leaders',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2bf62318-4585-4aff-bf4d-9eb9cfc8a29e';
    $display->content['new-2bf62318-4585-4aff-bf4d-9eb9cfc8a29e'] = $pane;
    $display->panels['header'][0] = 'new-2bf62318-4585-4aff-bf4d-9eb9cfc8a29e';
    $pane = new stdClass();
    $pane->pid = 'new-8f415114-d4cb-4b73-800d-25d901cf0da1';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="/student-leaders-campaign"><img class="panopoly-image-full" src="/sites/default/files/general/1000SL-logo.png"></a>',
      'format' => 'full_html',
      'substitute' => 1,
      'name' => 'slc_logo_link',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'slc-leaders',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8f415114-d4cb-4b73-800d-25d901cf0da1';
    $display->content['new-8f415114-d4cb-4b73-800d-25d901cf0da1'] = $pane;
    $display->panels['header'][1] = 'new-8f415114-d4cb-4b73-800d-25d901cf0da1';
    $pane = new stdClass();
    $pane->pid = 'new-034291d2-8181-4b39-a10b-a0034f82cbc7';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'block-41';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'slc-panel top',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '034291d2-8181-4b39-a10b-a0034f82cbc7';
    $display->content['new-034291d2-8181-4b39-a10b-a0034f82cbc7'] = $pane;
    $display->panels['sidebar'][0] = 'new-034291d2-8181-4b39-a10b-a0034f82cbc7';
    $pane = new stdClass();
    $pane->pid = 'new-d09f6f01-0692-4432-90d0-88510ee52b19';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'block-36';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'slc-panel',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd09f6f01-0692-4432-90d0-88510ee52b19';
    $display->content['new-d09f6f01-0692-4432-90d0-88510ee52b19'] = $pane;
    $display->panels['sidebar'][1] = 'new-d09f6f01-0692-4432-90d0-88510ee52b19';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__student_leaders_campaign_page'] = $handler;

  return $export;
}
