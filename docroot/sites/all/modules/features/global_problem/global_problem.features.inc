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
    'label' => 'Global Problem Top Section Image',
    'effects' => array(
      8 => array(
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
  drupal_alter('node_info', $items);
  return $items;
}
