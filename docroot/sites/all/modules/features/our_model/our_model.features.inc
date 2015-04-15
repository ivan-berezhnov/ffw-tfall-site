<?php
/**
 * @file
 * our_model.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function our_model_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function our_model_image_default_styles() {
  $styles = array();

  // Exported image style: spotlight_ourmodel.
  $styles['spotlight_ourmodel'] = array(
    'label' => 'spotlight ourmodel',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 202,
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
function our_model_node_info() {
  $items = array(
    'page_our_model' => array(
      'name' => t('Page - Our Model'),
      'base' => 'node_content',
      'description' => t('custom page for Our Model'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
