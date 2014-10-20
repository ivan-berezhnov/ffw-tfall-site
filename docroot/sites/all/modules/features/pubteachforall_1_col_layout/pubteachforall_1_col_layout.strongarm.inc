<?php
/**
 * @file
 * pubteachforall_1_col_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pubteachforall_1_col_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page_1_col_layout';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page_1_col_layout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page_1_col_layout';
  $strongarm->value = '4';
  $export['language_content_type_page_1_col_layout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page_1_col_layout';
  $strongarm->value = array(
    0 => 'menu-primary-navigation',
    1 => 'menu-uber-nav',
  );
  $export['menu_options_page_1_col_layout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page_1_col_layout';
  $strongarm->value = 'menu-primary-navigation:0';
  $export['menu_parent_page_1_col_layout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page_1_col_layout';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page_1_col_layout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page_1_col_layout';
  $strongarm->value = '1';
  $export['node_preview_page_1_col_layout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page_1_col_layout';
  $strongarm->value = 0;
  $export['node_submitted_page_1_col_layout'] = $strongarm;

  return $export;
}
