<?php
/**
 * @file
 * tfa_forum.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tfa_forum_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The Forum';
  $fe_block_boxes->format = 'wysiwyg_ckeditor';
  $fe_block_boxes->machine_name = 'forum_overview_header';
  $fe_block_boxes->body = '<h1>The Teach For All Forum</h1>

<p>An online platform for interactive dialogue with expert practitioners, policymakers, and scholars from around the world.</p>';

  $export['forum_overview_header'] = $fe_block_boxes;

  return $export;
}
