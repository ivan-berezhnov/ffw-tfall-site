<?php
/**
 * @file
 * ceo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ceo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ceo_node_info() {
  $items = array(
    'ceo' => array(
      'name' => t('CEO'),
      'base' => 'node_content',
      'description' => t('National organization\'s CEO bio'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
