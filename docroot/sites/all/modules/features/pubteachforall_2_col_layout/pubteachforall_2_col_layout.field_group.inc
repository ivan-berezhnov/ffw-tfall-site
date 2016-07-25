<?php
/**
 * @file
 * pubteachforall_2_col_layout.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pubteachforall_2_col_layout_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_row|field_collection_item|field_2_column_row|default';
  $field_group->group_name = 'group_image_row';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_2_column_row';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_wrapper';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'span6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image_row|field_collection_item|field_2_column_row|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_row|field_collection_item|field_2_column_row|default';
  $field_group->group_name = 'group_info_row';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_2_column_row';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_wrapper';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'group_row_headline',
      1 => 'group_row_byline',
      2 => 'group_link_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'span6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_info_row|field_collection_item|field_2_column_row|default'] = $field_group;

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
  $field_groups['group_info_wrapper|field_collection_item|field_2_column_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|field_collection_item|field_2_column_row|default';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_2_column_row';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_row';
  $field_group->data = array(
    'label' => '',
    'weight' => '9',
    'children' => array(
      0 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link_wrapper|field_collection_item|field_2_column_row|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_wrapper|node|page_2_col_layout|default';
  $field_group->group_name = 'group_link_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_2_col_layout';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link_wrapper|node|page_2_col_layout|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_byline|field_collection_item|field_2_column_row|default';
  $field_group->group_name = 'group_row_byline';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_2_column_row';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_row';
  $field_group->data = array(
    'label' => '',
    'weight' => '8',
    'children' => array(
      0 => 'field_byline',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_byline|field_collection_item|field_2_column_row|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_headline|field_collection_item|field_2_column_row|default';
  $field_group->group_name = 'group_row_headline';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_2_column_row';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_row';
  $field_group->data = array(
    'label' => '',
    'weight' => '7',
    'children' => array(
      0 => 'field_headline',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'slug-medium',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_headline|field_collection_item|field_2_column_row|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_wrapper|field_collection_item|field_2_column_row|default';
  $field_group->group_name = 'group_row_wrapper';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_2_column_row';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'group_info_row',
      1 => 'group_image_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'row-fluid',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_wrapper|field_collection_item|field_2_column_row|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Information Wrapper');

  return $field_groups;
}
