<?php
/**
 * @file
 * pubteachforall_marquee.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pubteachforall_marquee_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-nodequeue_3-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_3-block',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
