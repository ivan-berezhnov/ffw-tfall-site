<?php
/**
 * @file
 * partner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function partner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function partner_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('partner'),
      'base' => 'node_content',
      'description' => t('national organisation partner content type'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
