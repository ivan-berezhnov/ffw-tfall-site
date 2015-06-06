<?php
/**
 * @file
 * pubteachforall_donate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pubteachforall_donate_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pubteachforall_donate_node_info() {
  $items = array(
    'page_donate' => array(
      'name' => t('Page - Donate'),
      'base' => 'node_content',
      'description' => t('Donate page that is populated with the QGiv iFrame code.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
