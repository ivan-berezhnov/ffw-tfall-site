<?php
/**
 * @file
 * spotlight.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spotlight_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function spotlight_node_info() {
  $items = array(
    'spotlight' => array(
      'name' => t('Spotlight'),
      'base' => 'node_content',
      'description' => t('Spotlight posts'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
