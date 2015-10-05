<?php
/**
 * @file
 * tfa_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tfa_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function tfa_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: 16_9_slide.
  $styles['16_9_slide'] = array(
    'label' => '16:9 Slide',
    'effects' => array(
      14 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 1170,
          'height' => 658,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => '16_9_slide',
        ),
        'weight' => 0,
      ),
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2340,
          'height' => 1316,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
      16 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#000000',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 2340,
            'height' => 1316,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 3,
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
