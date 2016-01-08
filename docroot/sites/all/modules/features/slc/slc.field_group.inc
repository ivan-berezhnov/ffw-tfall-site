<?php
/**
 * @file
 * slc.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function slc_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pic_caption|node|student_leaders_campaign|form';
  $field_group->group_name = 'group_pic_caption';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_leaders_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pics_videos_docs';
  $field_group->data = array(
    'label' => 'Pictures',
    'weight' => '7',
    'children' => array(
      0 => 'field_photos_caption',
      1 => 'field_slc_main_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Pictures',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'sub-fieldset',
        'description' => 'Add up to 6 images that demonstrate or support the project, along with captions. The types of documents allowed are: jpg, png. Note that the first image will be used as the main image. You can use the handle at the left of the images to drag and reorder images. ',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_pic_caption|node|student_leaders_campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slc_info_reflection|node|student_leaders_campaign|form';
  $field_group->group_name = 'group_slc_info_reflection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_leaders_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Information and Reflection',
    'weight' => '1',
    'children' => array(
      0 => 'field_age_grade',
      1 => 'field_student_names',
      2 => 'field_question1',
      3 => 'field_question2',
      4 => 'field_question3',
      5 => 'field_slc_headline',
      6 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Project Information and Reflection',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'main-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_slc_info_reflection|node|student_leaders_campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_socialmedia|node|student_leaders_campaign|form';
  $field_group->group_name = 'group_socialmedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_leaders_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_submitter_info';
  $field_group->data = array(
    'label' => 'Social Media',
    'weight' => '21',
    'children' => array(
      0 => 'field_slc_facebook',
      1 => 'field_slc_twitter',
      2 => 'field_slc_instagram',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Social Media',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'sub-fieldset',
        'description' => 'Add links to your Facebook, Twitter & Instagram accounts so we can follow you or your group. This will be displayed on the website.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_socialmedia|node|student_leaders_campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_studentleaders|node|student_leaders_campaign_|form';
  $field_group->group_name = 'group_studentleaders';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_leaders_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Internal',
    'weight' => '3',
    'children' => array(
      0 => 'field_project_summary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Internal',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'admin-main-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_studentleaders|node|student_leaders_campaign_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submitter_info|node|student_leaders_campaign_|form';
  $field_group->group_name = 'group_submitter_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_leaders_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Submitter & Group Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_submitters_fname',
      1 => 'field_submitters_lname',
      2 => 'field_submitters_email',
      3 => 'field_partner',
      4 => 'group_socialmedia',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Submitter & Group Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'main-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_submitter_info|node|student_leaders_campaign_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_support_docs|node|student_leaders_campaign|form';
  $field_group->group_name = 'group_support_docs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_leaders_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pics_videos_docs';
  $field_group->data = array(
    'label' => 'Supporting Resources',
    'weight' => '10',
    'children' => array(
      0 => 'field_support_docs',
      1 => 'field_support_info_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Supporting Resources',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'sub-fieldset',
        'description' => 'Upload up to 5 documents that support or are related to your project. The following types of documents are allowed: txt, pdf, doc, docx',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_support_docs|node|student_leaders_campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vid_caption|node|student_leaders_campaign|form';
  $field_group->group_name = 'group_vid_caption';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_leaders_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pics_videos_docs';
  $field_group->data = array(
    'label' => 'Videos ',
    'weight' => '9',
    'children' => array(
      0 => 'field_video_link_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Videos ',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'sub-fieldset',
        'description' => 'Provide the link to the page of the Vimeo or YouTube video (other video links will not work). Paste the link the page, not the embed code.
',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_vid_caption|node|student_leaders_campaign|form'] = $field_group;

  return $export;
}
