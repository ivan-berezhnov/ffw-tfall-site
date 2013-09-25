<?php
/**
 * @file
 * pubteachforall_1_col_layout.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pubteachforall_1_col_layout_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page_1_col_layout-body'
  $field_instances['node-page_1_col_layout-body'] = array(
    'bundle' => 'page_1_col_layout',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Put whatever you want in this field and use the \'Styles\' tab in the WYSIWYG editor to apply any type styles you may need.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Put whatever you want in this field and use the \'Styles\' tab in the WYSIWYG editor to apply any type styles you may need.');

  return $field_instances;
}
