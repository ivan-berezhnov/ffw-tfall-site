<?php
/**
 * @file
 * tfa_forum.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tfa_forum_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-forum_overview_header'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'forum_overview_header',
    'module' => 'block',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
