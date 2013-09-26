<?php
/**
 * @file
 * tfa_supporter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tfa_supporter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tfa_supporter_node_info() {
  $items = array(
    'tfa_supporter' => array(
      'name' => t('TFA Supporter'),
      'base' => 'node_content',
      'description' => t('Teach for all supporters.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
