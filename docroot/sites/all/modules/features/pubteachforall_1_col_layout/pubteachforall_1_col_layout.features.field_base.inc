<?php
/**
 * @file
 * pubteachforall_1_col_layout.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function pubteachforall_1_col_layout_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_1_column_row'
  $field_bases['field_1_column_row'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_1_column_row',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
