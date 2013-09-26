<?php
/**
 * @file
 * global_problem.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function global_problem_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function global_problem_node_info() {
  $items = array(
    'global_problem' => array(
      'name' => t('Global Problem'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
