<?php
/**
 * @file
 * pubteachforall_media_grid.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pubteachforall_media_grid_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pubteachforall_media_grid_node_info() {
  $items = array(
    'page_story_grid' => array(
      'name' => t('Page - Story Grid'),
      'base' => 'node_content',
      'description' => t('This page provides you with either 2 or 4 story blocks which contain custom images and text.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
