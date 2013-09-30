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
 * Implements hook_fe_nodequeue_export_fields().
 */
function tfa_supporter_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: supporter_list
  $nodequeues['supporter_list'] = array(
    'name' => 'supporter_list',
    'title' => 'supporter list',
    'subqueue_title' => '',
    'size' => 5,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'tfa_supporter',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
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
