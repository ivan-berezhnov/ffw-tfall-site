<?php
/**
 * @file
 * tfa_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tfa_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function tfa_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: slide.
  $styles['slide'] = array(
    'label' => 'Slide 16:9',
    'effects' => array(
      11 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 1170,
          'height' => 658,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'slide',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tfa_slideshow_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
