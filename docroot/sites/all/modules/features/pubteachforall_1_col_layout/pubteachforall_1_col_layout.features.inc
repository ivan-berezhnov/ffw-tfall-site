<?php
/**
 * @file
 * pubteachforall_1_col_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pubteachforall_1_col_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function pubteachforall_1_col_layout_image_default_styles() {
  $styles = array();

  // Exported image style: 1_column_layout_image.
  $styles['1_column_layout_image'] = array(
    'name' => '1_column_layout_image',
    'label' => '1 Column Layout Image',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 658,
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
function pubteachforall_1_col_layout_node_info() {
  $items = array(
    'page_1_col_layout' => array(
      'name' => t('Page - 1 Col Layout'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Page Title'),
      'help' => '',
    ),
  );
  return $items;
}
