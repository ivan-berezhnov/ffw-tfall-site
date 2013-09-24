<?php
/**
 * @file
 * news.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function news_filter_default_formats() {
  $formats = array();

  // Exported format: WYSIWYG.
  $formats['wysiwyg'] = array(
    'format' => 'wysiwyg',
    'name' => 'WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(),
  );

  return $formats;
}
