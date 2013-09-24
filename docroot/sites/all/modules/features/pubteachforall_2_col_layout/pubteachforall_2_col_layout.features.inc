<?php
/**
 * @file
 * pubteachforall_2_col_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pubteachforall_2_col_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pubteachforall_2_col_layout_node_info() {
  $items = array(
    'page_2_col_layout' => array(
      'name' => t('Page - 2 Col Layout'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Page Title'),
      'help' => '',
    ),
  );
  return $items;
}
