<?php
/**
 * @file
 * impact.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function impact_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = '2_col_graphic_text';
  $bean_type->label = '2 column graphic left text right';
  $bean_type->options = '';
  $bean_type->description = 'Impact page: A two column section with image on left (1/4), text on right (3/4)';
  $export['2_col_graphic_text'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = '2_tier_graphic_read_more';
  $bean_type->label = '2 tier graphic read more';
  $bean_type->options = '';
  $bean_type->description = 'Impact page: Two tiers, graphic over text with read more option.';
  $export['2_tier_graphic_read_more'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = '2_tier_video_caption';
  $bean_type->label = '2 tier video over caption';
  $bean_type->options = '';
  $bean_type->description = 'Impact page: Video over text caption with attribution. Video opens in modal.  Three across.';
  $export['2_tier_video_caption'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'graphic_over_text';
  $bean_type->label = '2 or 3 tier graphic over text';
  $bean_type->options = '';
  $bean_type->description = 'Impact page: 2 or 3 tiers. Graphic over extra-large, medium, or regular text. Four across.';
  $export['graphic_over_text'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'section_intro';
  $bean_type->label = 'Section intro';
  $bean_type->options = '';
  $bean_type->description = 'Impact page: blurb used to intro a section. Text &amp; title, both optional';
  $export['section_intro'] = $bean_type;

  return $export;
}
