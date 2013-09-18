<?php
/**
 * @file
 * twitter_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function twitter_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-tweets-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tweets-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'tweme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tweme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
