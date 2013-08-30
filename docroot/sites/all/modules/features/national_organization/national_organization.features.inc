<?php
/**
 * @file
 * national_organization.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function national_organization_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function national_organization_node_info() {
  $items = array(
    'national_organization' => array(
      'name' => t('national organization'),
      'base' => 'node_content',
      'description' => t('national organization content type'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
