<?php
/**
 * @file
 * slc.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function slc_field_group_info() {
  $field_groups = array();

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
    'weight' => '3',
    'children' => array(
      0 => 'field_photos_caption',
      1 => 'field_slc_main_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Pictures',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'sub-fieldset',
        'description' => 'Please upload up to 6 picture that demonstrate your submission.The types of image files we can accept are: png, gif, jpg, jpeg.  Please make sure to abide by any policies of your school, organization or country that govern the publishing of students names and photos. Any inappropriate content will not be accepted. ',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_pic_caption|node|student_leaders_campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pics_videos_docs|node|student_leaders_campaign_|form';
  $field_group->group_name = 'group_pics_videos_docs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_leaders_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supporting Pictures, Videos, Documents',
    'weight' => '2',
    'children' => array(
      0 => 'group_vid_caption',
      1 => 'group_pic_caption',
      2 => 'group_support_docs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Supporting Pictures, Videos, Documents',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'main-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_pics_videos_docs|node|student_leaders_campaign_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pics_videos_docs|node|student_leaders_campaign|form';
  $field_group->group_name = 'group_pics_videos_docs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_leaders_campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supporting Pictures, Videos and Resources',
    'weight' => '3',
    'children' => array(
      0 => 'group_pic_caption',
      1 => 'group_support_docs',
      2 => 'group_vid_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Supporting Pictures, Videos and Resources',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'main-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_pics_videos_docs|node|student_leaders_campaign|form'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'field_age_grade',
      1 => 'field_question1',
      2 => 'field_question2',
      3 => 'field_question3',
      4 => 'field_student_names',
      5 => 'title',
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
  $field_groups['group_slc_info_reflection|node|student_leaders_campaign|form'] = $field_group;

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
    'weight' => '18',
    'children' => array(
      0 => 'field_slc_facebook',
      1 => 'field_slc_instagram',
      2 => 'field_slc_twitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Social Media',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'sub-fieldset',
        'description' => 'If you are active on social media and would like your Facebook, Twitter or Instagram ID made public so others can connect with you, please include those links below. Remember our hashtag #1000StudentLeaders',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_socialmedia|node|student_leaders_campaign|form'] = $field_group;

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
    'weight' => '4',
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
  $field_groups['group_studentleaders|node|student_leaders_campaign_|form'] = $field_group;

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
    'weight' => '1',
    'children' => array(
      0 => 'field_partner',
      1 => 'field_submitters_email',
      2 => 'field_submitters_fname',
      3 => 'field_submitters_lname',
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
  $field_groups['group_submitter_info|node|student_leaders_campaign_|form'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_support_docs',
      1 => 'field_support_info_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Supporting Resources',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'sub-fieldset',
        'description' => 'You can submit additional resources related to your submission by uploading them as documents or pasting the weblink. You can upload up to 3 supporting resources and submit up to 5 weblinks. These supporting resources are for internal use only and will not be made public on the campaign website. The types of files we can accept are: txt, pdf, doc, docx. Any inappropriate content will not be accepted.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_support_docs|node|student_leaders_campaign|form'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_video_link_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Videos ',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'sub-fieldset',
        'description' => 'Please submit a link to up to 2 videos that demonstrate your submission. Currently, we are only able to accept links to videos posted on YouTube or Vimeo.  Other video links (such as Facebook or Google) will not work. Please be sure to paste the link to the page, not the embed code. Any inappropriate content will not be accepted.
',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_vid_caption|node|student_leaders_campaign|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Internal');
  t('Pictures');
  t('Project Information and Reflection');
  t('Social Media');
  t('Submitter & Group Information');
  t('Supporting Pictures, Videos and Resources');
  t('Supporting Pictures, Videos, Documents');
  t('Supporting Resources');
  t('Videos ');

  return $field_groups;
}
