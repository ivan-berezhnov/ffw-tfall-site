<?php
/**
 * @file
 * national_organization.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function national_organization_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function national_organization_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function national_organization_image_default_styles() {
  $styles = array();

  // Exported image style: map_logo.
  $styles['map_logo'] = array(
    'name' => 'map_logo',
    'label' => 'map logo',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: map_thumbnail.
  $styles['map_thumbnail'] = array(
    'name' => 'map_thumbnail',
    'label' => 'map thumbnail',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 292,
          'height' => 156,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function national_organization_node_info() {
  $items = array(
    'national_organization' => array(
      'name' => t('National Organization'),
      'base' => 'node_content',
      'description' => t('national organization content type'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'national_organizations' => array(
      'name' => t('Page - National Organizations'),
      'base' => 'node_content',
      'description' => t('"National organization v2 page" - one page with custom fields and views.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
