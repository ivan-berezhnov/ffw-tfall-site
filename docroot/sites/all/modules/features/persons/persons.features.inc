<?php
/**
 * @file
 * persons.features.inc
 */

/**
 * Implements hook_views_api().
 */
function persons_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function persons_image_default_styles() {
  $styles = array();

  // Exported image style: person_thumbnail__315x315_.
  $styles['person_thumbnail__315x315_'] = array(
    'name' => 'person_thumbnail__315x315_',
    'label' => 'Person Thumbnail (315x315)',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 315,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
