<?php
/**
 * @file
 * national_organization.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function national_organization_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|node|national_organization|form';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'national_organization';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '14',
    'children' => array(
      0 => 'field_about',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_about|node|national_organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_context_info|node|national_organization|form';
  $field_group->group_name = 'group_context_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'national_organization';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Local context info',
    'weight' => '15',
    'children' => array(
      0 => 'field_avg_total_years_of_edu',
      1 => 'field_living_below_poverty_line',
      2 => 'field_population',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_context_info|node|national_organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_snapshot_info|node|national_organization|form';
  $field_group->group_name = 'group_snapshot_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'national_organization';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program snapshot info',
    'weight' => '13',
    'children' => array(
      0 => 'field_alumni',
      1 => 'field_cohorts_placed',
      2 => 'field_program_launched',
      3 => 'field_schools',
      4 => 'field_teachers_active',
      5 => 'field_city_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_snapshot_info|node|national_organization|form'] = $field_group;

  return $export;
}
