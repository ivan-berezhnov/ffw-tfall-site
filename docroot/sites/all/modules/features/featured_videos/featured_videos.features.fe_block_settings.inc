<?php
/**
 * @file
 * featured_videos.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function featured_videos_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-featured_videos-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'featured_videos-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
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

  $export['views-featured_videos-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'featured_videos-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
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
