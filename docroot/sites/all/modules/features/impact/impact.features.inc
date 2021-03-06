<?php
/**
 * @file
 * impact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function impact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
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
function impact_node_info() {
  $items = array(
    'bean_block_page' => array(
      'name' => t('Bean block page'),
      'base' => 'node_content',
      'description' => t('Used for stacking Bean blocks'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
