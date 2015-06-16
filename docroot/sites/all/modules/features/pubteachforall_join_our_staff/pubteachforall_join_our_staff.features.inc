<?php
/**
 * @file
 * pubteachforall_join_our_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pubteachforall_join_our_staff_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pubteachforall_join_our_staff_node_info() {
  $items = array(
    'page_join_our_staff' => array(
      'name' => t('Page - Join Our Staff'),
      'base' => 'node_content',
      'description' => t('Content type for the "Join Our Staff" page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
