<?php
/**
 * @file
 * slc.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function slc_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'slc_logo_link';
  $content->admin_title = 'SLC top logo w/link';
  $content->admin_description = 'Top page logo for SLC pages with link to main SLC page';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'SLC top logo w/link',
    'title' => '',
    'body' => '<p style="text-align: center;"><a href="/student-leaders-campaign"><img class="panopoly-image-full" src="/sites/default/files/general/1000SL-logo.png" /></a></p>
',
    'format' => 'wysiwyg_ckeditor',
    'substitute' => 1,
  );
  $export['slc_logo_link'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'slc_top_logo_link';
  $content->admin_title = 'SLC top logo w/link';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'SLC top logo w/link',
    'title' => '',
    'body' => '<p style="text-align:center"><a href="/student-leaders-campaign"><img class="panopoly-image-full" src="/sites/default/files/general/1000SL-logo.png" /></a></p>
',
    'format' => 'wysiwyg_ckeditor',
    'substitute' => 1,
  );
  $export['slc_top_logo_link'] = $content;

  return $export;
}
