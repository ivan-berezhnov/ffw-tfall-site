<?php
/**
 * @file
 * results.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function results_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function results_node_info() {
  $items = array(
    'page_results' => array(
      'name' => t('Page - Results'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
