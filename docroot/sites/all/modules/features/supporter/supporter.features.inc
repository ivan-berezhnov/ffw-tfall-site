<?php
/**
 * @file
 * supporter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function supporter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function supporter_node_info() {
  $items = array(
    'supporter' => array(
      'name' => t('supporter'),
      'base' => 'node_content',
      'description' => t('supporter content type'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
