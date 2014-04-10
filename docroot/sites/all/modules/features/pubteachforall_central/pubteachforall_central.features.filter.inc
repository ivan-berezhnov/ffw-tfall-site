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

  // Exported format: WYSIWYG CKEditor.
  $formats['wysiwyg_ckeditor'] = array(
    'format' => 'wysiwyg_ckeditor',
    'name' => 'WYSIWYG CKEditor',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
