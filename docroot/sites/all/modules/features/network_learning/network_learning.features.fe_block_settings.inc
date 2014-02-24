<?php
/**
 * @file
 * network_learning.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function network_learning_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facebook_comments_box-facebook_comments_box'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'facebook_comments_box',
    'module' => 'facebook_comments_box',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'theme' => 'seven',
      ),
      'tweme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tweme',
        'weight' => -16,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
