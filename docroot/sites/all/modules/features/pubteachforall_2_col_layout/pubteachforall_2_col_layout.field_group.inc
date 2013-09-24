<?php
/**
 * @file
 * pubteachforall_2_col_layout.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pubteachforall_2_col_layout_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_wrapper|field_collection_item|field_2_column_row|form';
  $field_group->group_name = 'group_info_wrapper';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_2_column_row';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_headline',
      1 => 'field_byline',
      2 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Information Wrapper',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'alex-class',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_info_wrapper|field_collection_item|field_2_column_row|form'] = $field_group;

  return $export;
}
