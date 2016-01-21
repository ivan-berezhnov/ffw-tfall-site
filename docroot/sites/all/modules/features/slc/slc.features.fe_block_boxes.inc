<?php
/**
 * @file
 * slc.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function slc_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '1000 SLC - sidebar';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'slc_sidebar_block';
  $fe_block_boxes->body = '<div class="page-section headlines"><a href="/en/student-leaders-campaign">1000 Student Leaders  <span class="headlinearrows">&gt;&gt;</span></a></div>

<p></br>Student leaders are all around us. We invite you to explore this page to discover how students are demonstrating their leadership all around the world. Then take action with your students to help them discover their own leadership potential and submit your story to the campaign. Tell the world about your students acts of leadership.</p>

<div class="page-section headlines"><a href="/en/share-your-story">About the Campaign <span class="headlinearrows">&gt;&gt;</span></a></div>

<div class="page-section headlines"><a href="/en/student-leaders-campaign-resources">Resources <span class="headlinearrows">&gt;&gt;</span></a></div>

<div class="page-section headlines"><a href="/en/share-your-story">FAQs <span class="headlinearrows">&gt;&gt;</span></a></div>

<div class="page-section headlines"><a href="/en/student-leaders-campaign-contact-form">Contact Us <span class="headlinearrows">&gt;&gt;</span></a></div>

<div class="page-section headlines"><a href="https://twitter.com/hashtag/1000studentleaders">#1000StudentLeaders <span class="headlinearrows">&gt;&gt;</span></a></div>';

  $export['slc_sidebar_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '1000 SLC - sidebar top';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'slc_sidebartop_block';
  $fe_block_boxes->body = '<div style="text-align: center;"  class="page-section xlbutton"><a href="http://share-your-story">Share Your Story  <span class="headlinearrows">&gt;&gt;</span></a></div>
';

  $export['slc_sidebartop_block'] = $fe_block_boxes;

  return $export;
}
