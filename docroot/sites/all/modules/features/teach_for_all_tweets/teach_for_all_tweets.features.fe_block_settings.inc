<?php
/**
 * @file
 * teach_for_all_tweets.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function teach_for_all_tweets_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-tfall_tweets-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tfall_tweets-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'tfall-press',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'tweme' => array(
        'region' => 'sidebar_second_affix',
        'status' => 1,
        'theme' => 'tweme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-tfall_tweets-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tfall_tweets-block_1',
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

  $export['views-tfall_tweets-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tfall_tweets-block_2',
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

  $export['views-tfall_tweets-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tfall_tweets-block_3',
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
