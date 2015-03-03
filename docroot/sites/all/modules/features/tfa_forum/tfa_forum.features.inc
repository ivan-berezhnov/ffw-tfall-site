<?php
/**
 * @file
 * tfa_forum.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tfa_forum_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tfa_forum_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tfa_forum_node_info() {
  $items = array(
    'tfa_forum_post' => array(
      'name' => t('Forum Post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tfa_opinion' => array(
      'name' => t('Opinion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
