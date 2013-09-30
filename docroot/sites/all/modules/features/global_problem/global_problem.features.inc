<?php
/**
 * @file
 * global_problem.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function global_problem_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function global_problem_image_default_styles() {
  $styles = array();

  // Exported image style: global_problem_top_section_image.
  $styles['global_problem_top_section_image'] = array(
    'name' => 'global_problem_top_section_image',
    'label' => 'Global Problem Top Section Image',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 370,
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
function global_problem_node_info() {
  $items = array(
    'global_problem' => array(
      'name' => t('Page - A Global Problem'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
