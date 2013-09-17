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
}

/**
 * Implements hook_views_api().
 */
function pubteachforall_marquee_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function pubteachforall_marquee_image_default_styles() {
  $styles = array();

  // Exported image style: marquee_full_width.
  $styles['marquee_full_width'] = array(
    'name' => 'marquee_full_width',
    'label' => 'Marquee Full Width',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'marquee_vertical_image',
    'label' => 'Marquee Vertical Image',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
