<?php
/**
 * @file
 * our_model.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function our_model_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function our_model_node_info() {
  $items = array(
    'page_our_model' => array(
      'name' => t('Page - Our Model'),
      'base' => 'node_content',
      'description' => t('custom page for Our Model'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
