<?php
/**
 * @file
 * network_learning.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function network_learning_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function network_learning_node_info() {
  $items = array(
    'network_learning' => array(
      'name' => t('Network Learning'),
      'base' => 'node_content',
      'description' => t('Network Learning content type'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  return $items;
}
