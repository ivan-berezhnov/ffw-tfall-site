<?php
/**
 * @file
 * pubteachforall_1_col_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pubteachforall_1_col_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pubteachforall_1_col_layout_node_info() {
  $items = array(
    'page_1_col_layout' => array(
      'name' => t('Page - 1 Col Layout'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Page Title'),
      'help' => '',
    ),
  );
  return $items;
}
