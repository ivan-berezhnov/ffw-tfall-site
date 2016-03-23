<?php
/**
 * @file
 * press_center_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function press_center_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function press_center_content_type_node_info() {
  $items = array(
    'press_center' => array(
      'name' => t('Press Center'),
      'base' => 'node_content',
      'description' => t('Press Center for external press & press kits'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
