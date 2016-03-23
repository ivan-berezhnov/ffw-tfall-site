<?php
/**
 * @file
 * press_center_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function press_center_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presskits|node|press_center|form';
  $field_group->group_name = 'group_presskits';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_center';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Press Kit Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_pc_press_kit_info',
      1 => 'field_pc_download',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Press Kit Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-presskits field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_presskits|node|press_center|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pressvideoinfo|node|press_center|form';
  $field_group->group_name = 'group_pressvideoinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_center';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Press & Video Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_pc_publication_date',
      1 => 'field_pc_publication_name',
      2 => 'field_pc_partner',
      3 => 'field_pc_country',
      4 => 'field_pc_credit_names',
      5 => 'field_pc_summary',
      6 => 'field_pc_external_link',
      7 => 'field_pc_article_language',
      8 => 'field_pc_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pressvideoinfo field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pressvideoinfo|node|press_center|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Press & Video Info');
  t('Press Kit Info');

  return $field_groups;
}
