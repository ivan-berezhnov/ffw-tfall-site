<?php
/**
 * @file
 * tfa_forum.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tfa_forum_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tfa_forum_moderator|node|tfa_forum_post|form';
  $field_group->group_name = 'group_tfa_forum_moderator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tfa_forum_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Moderator Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_moderator_bio',
      1 => 'field_moderator_external_link',
      2 => 'field_moderator_image',
      3 => 'field_moderator_name',
      4 => 'field_moderator_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tfa-forum-moderator field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tfa_forum_moderator|node|tfa_forum_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tfa_opinion_author_info|node|tfa_opinion|form';
  $field_group->group_name = 'group_tfa_opinion_author_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tfa_opinion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_tfa_opinion_author',
      1 => 'field_tfa_opinion_author_bio',
      2 => 'field_tfa_opinion_external_link',
      3 => 'field_tfa_opinion_image',
      4 => 'field_tfa_opinion_job_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tfa-opinion-author-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tfa_opinion_author_info|node|tfa_opinion|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Author Information');
  t('Moderator Information');

  return $field_groups;
}
