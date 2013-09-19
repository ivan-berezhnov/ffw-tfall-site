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

  $export['views-teach_for_all_tweets-block'] = array(
    'cache' => -1,
    'delta' => 'teach_for_all_tweets-block',
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
  );

  return $export;
}
