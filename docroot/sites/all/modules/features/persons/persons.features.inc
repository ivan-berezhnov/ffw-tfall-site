<?php
/**
 * @file
 * persons.features.inc
 */

/**
 * Implements hook_views_api().
 */
function persons_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function persons_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: board_list
  $nodequeues['board_list'] = array(
    'name' => 'board_list',
    'title' => 'board list',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'person',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: leaders_list
  $nodequeues['leaders_list'] = array(
    'name' => 'leaders_list',
    'title' => 'leaders list',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'person',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function persons_image_default_styles() {
  $styles = array();

  // Exported image style: person_thumbnail__315x315_.
  $styles['person_thumbnail__315x315_'] = array(
    'label' => 'Person Thumbnail (315x315)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 315,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
