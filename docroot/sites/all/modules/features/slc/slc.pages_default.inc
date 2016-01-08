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
    $pane->pid = 'new-61584232-5eef-4985-ac6f-e310751e7d40';
    $pane->panel = 'header';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1967';
    $pane->shown = TRUE;
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
    $pane->uuid = '61584232-5eef-4985-ac6f-e310751e7d40';
    $display->content['new-61584232-5eef-4985-ac6f-e310751e7d40'] = $pane;
    $display->panels['header'][0] = 'new-61584232-5eef-4985-ac6f-e310751e7d40';
    $pane = new stdClass();
    $pane->pid = 'new-9e8a1f87-44ec-43ba-b4a2-bc9847cb73d2';
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
    $pane->uuid = '9e8a1f87-44ec-43ba-b4a2-bc9847cb73d2';
    $display->content['new-9e8a1f87-44ec-43ba-b4a2-bc9847cb73d2'] = $pane;
    $display->panels['sidebar'][0] = 'new-9e8a1f87-44ec-43ba-b4a2-bc9847cb73d2';
    $pane = new stdClass();
    $pane->pid = 'new-b75ebd65-88bb-4faa-a8d8-0764fe62bf3f';
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
    $pane->uuid = 'b75ebd65-88bb-4faa-a8d8-0764fe62bf3f';
    $display->content['new-b75ebd65-88bb-4faa-a8d8-0764fe62bf3f'] = $pane;
    $display->panels['sidebar'][1] = 'new-b75ebd65-88bb-4faa-a8d8-0764fe62bf3f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9e8a1f87-44ec-43ba-b4a2-bc9847cb73d2';
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
    $pane->pid = 'new-4c700685-68c4-495f-9937-dac428aeb21e';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4c700685-68c4-495f-9937-dac428aeb21e';
    $display->content['new-4c700685-68c4-495f-9937-dac428aeb21e'] = $pane;
    $display->panels['footer'][0] = 'new-4c700685-68c4-495f-9937-dac428aeb21e';
    $pane = new stdClass();
    $pane->pid = 'new-6b5f2a8d-b096-4b2c-9bf3-c7851988702f';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6b5f2a8d-b096-4b2c-9bf3-c7851988702f';
    $display->content['new-6b5f2a8d-b096-4b2c-9bf3-c7851988702f'] = $pane;
    $display->panels['footer'][1] = 'new-6b5f2a8d-b096-4b2c-9bf3-c7851988702f';
    $pane = new stdClass();
    $pane->pid = 'new-c23354b9-cc8b-4e01-90d5-bdf312ddbd80';
    $pane->panel = 'footer';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="slcfooter span4">  
<a href="#" class="full-list"> More Student Leaders Stories</a>
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
    $pane->uuid = 'c23354b9-cc8b-4e01-90d5-bdf312ddbd80';
    $display->content['new-c23354b9-cc8b-4e01-90d5-bdf312ddbd80'] = $pane;
    $display->panels['footer'][2] = 'new-c23354b9-cc8b-4e01-90d5-bdf312ddbd80';
    $pane = new stdClass();
    $pane->pid = 'new-9a880338-7283-4577-8d6d-9ea59df32c39';
    $pane->panel = 'header';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1967';
    $pane->shown = TRUE;
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
    $pane->uuid = '9a880338-7283-4577-8d6d-9ea59df32c39';
    $display->content['new-9a880338-7283-4577-8d6d-9ea59df32c39'] = $pane;
    $display->panels['header'][0] = 'new-9a880338-7283-4577-8d6d-9ea59df32c39';
    $pane = new stdClass();
    $pane->pid = 'new-1b0a85db-fccb-4840-8e16-c3895186b3b1';
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
    $pane->uuid = '1b0a85db-fccb-4840-8e16-c3895186b3b1';
    $display->content['new-1b0a85db-fccb-4840-8e16-c3895186b3b1'] = $pane;
    $display->panels['sidebar'][0] = 'new-1b0a85db-fccb-4840-8e16-c3895186b3b1';
    $pane = new stdClass();
    $pane->pid = 'new-2dbbd07b-2184-420e-b3dc-09414ca9ec15';
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
    $pane->uuid = '2dbbd07b-2184-420e-b3dc-09414ca9ec15';
    $display->content['new-2dbbd07b-2184-420e-b3dc-09414ca9ec15'] = $pane;
    $display->panels['sidebar'][1] = 'new-2dbbd07b-2184-420e-b3dc-09414ca9ec15';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1b0a85db-fccb-4840-8e16-c3895186b3b1';
  $handler->conf['display'] = $display;
  $export['node_view__student_leaders_campaign_page'] = $handler;

  return $export;
}
