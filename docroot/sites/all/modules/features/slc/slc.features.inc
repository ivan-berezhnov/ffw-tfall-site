<?php
/**
 * @file
 * slc.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slc_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slc_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function slc_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: slc_featured
  $nodequeues['slc_featured'] = array(
    'name' => 'slc_featured',
    'title' => 'SLC Featured',
    'subqueue_title' => '',
    'size' => 3,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => NULL,
    'subqueues' => 1,
    'types' => array(
      0 => 'student_leaders_campaign',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: slc_slider
  $nodequeues['slc_slider'] = array(
    'name' => 'slc_slider',
    'title' => 'SLC Slider',
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
    'insert_at_front' => NULL,
    'subqueues' => 1,
    'types' => array(
      0 => 'student_leaders_campaign',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function slc_node_info() {
  $items = array(
    'student_leaders_campaign' => array(
      'name' => t('Student Leaders Campaign'),
      'base' => 'node_content',
      'description' => t('Project submission form for Student Leaders Campaign'),
      'has_title' => '1',
      'title_label' => t('Project Headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
