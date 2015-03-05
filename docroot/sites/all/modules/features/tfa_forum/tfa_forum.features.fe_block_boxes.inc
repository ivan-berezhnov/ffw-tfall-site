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
  $fe_block_boxes->body = '<h1>The Forum</h1>

<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam eleifend iaculis lacus. Etiam rutrum arcu sit amet suscipit luctus. Mauris eget dapibus risus.</p>
';

  $export['forum_overview_header'] = $fe_block_boxes;

  return $export;
}
