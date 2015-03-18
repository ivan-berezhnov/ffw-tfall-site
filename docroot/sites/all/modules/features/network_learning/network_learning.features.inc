<?php
/**
 * @file
 * network_learning.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function network_learning_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function network_learning_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function network_learning_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: network_learning_front_list
  $nodequeues['network_learning_front_list'] = array(
    'name' => 'network_learning_front_list',
    'title' => 'network learning front list',
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
    'subqueues' => 1,
    'types' => array(
      0 => 'network_learning',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function network_learning_image_default_styles() {
  $styles = array();

  // Exported image style: network_learning_front_thumbnail.
  $styles['network_learning_front_thumbnail'] = array(
    'label' => 'Network Learning Front Thumbnail (370 x 210)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function network_learning_node_info() {
  $items = array(
    'network_learning' => array(
      'name' => t('Network Learning'),
      'base' => 'node_content',
      'description' => t('Network Learning content type'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
