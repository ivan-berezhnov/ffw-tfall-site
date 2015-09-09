<?php
/**
 * @file
 * pubteachforall_central.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pubteachforall_central_filter_default_formats() {
  $formats = array();

  // Exported format: Advanced HTML Editor.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Advanced HTML Editor',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -7,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Primary Text Editor.
  $formats['wysiwyg_ckeditor'] = array(
    'format' => 'wysiwyg_ckeditor',
    'name' => 'Primary Text Editor',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(),
  );

  return $formats;
}
