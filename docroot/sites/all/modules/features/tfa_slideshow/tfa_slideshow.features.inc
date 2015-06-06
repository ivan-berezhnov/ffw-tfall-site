<?php
/**
 * @file
 * tfa_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tfa_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tfa_slideshow_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
