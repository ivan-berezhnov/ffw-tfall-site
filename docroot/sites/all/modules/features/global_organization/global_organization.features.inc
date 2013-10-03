<?php
/**
 * @file
 * global_organization.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function global_organization_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function global_organization_node_info() {
  $items = array(
    'page_global_organization' => array(
      'name' => t('Page - Global Organization'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
