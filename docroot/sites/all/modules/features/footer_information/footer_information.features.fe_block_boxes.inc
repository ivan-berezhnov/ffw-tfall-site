<?php
/**
 * @file
 * footer_information.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function footer_information_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Information - copyright, address etc';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'footer_information';
  $fe_block_boxes->body = '2013 © Teach For All Inc. All rights reserved.
315 W. 36th St. New York, NY 10018
+1 646 898 4900';

  $export['footer_information'] = $fe_block_boxes;

  return $export;
}
