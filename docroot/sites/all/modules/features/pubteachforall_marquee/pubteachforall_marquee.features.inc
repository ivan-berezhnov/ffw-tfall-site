<?php
/**
 * @file
 * pubteachforall_marquee.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pubteachforall_marquee_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pubteachforall_marquee_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function pubteachforall_marquee_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: marquee
  $nodequeues['marquee'] = array(
    'name' => 'marquee',
    'title' => 'Marquee',
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
    'subqueues' => 1,
    'types' => array(
      0 => 'network_learning',
      1 => 'news',
      2 => 'spotlight',
      3 => 'tfa_forum_post',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function pubteachforall_marquee_image_default_styles() {
  $styles = array();

  // Exported image style: marquee_full_width.
  $styles['marquee_full_width'] = array(
    'label' => 'Marquee Full Width',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 590,
          'height' => 345,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: marquee_vertical_image.
  $styles['marquee_vertical_image'] = array(
    'label' => 'Marquee Vertical Image',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 293,
          'height' => 343,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
