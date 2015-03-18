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
    'label' => 'map logo',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 84,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: map_thumbnail.
  $styles['map_thumbnail'] = array(
    'label' => 'map thumbnail',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 292,
          'height' => 164,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: national_organization_logo.
  $styles['national_organization_logo'] = array(
    'label' => 'National Organization Logo',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 152,
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
  drupal_alter('node_info', $items);
  return $items;
}
