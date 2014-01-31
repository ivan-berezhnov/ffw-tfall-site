<?php
/**
 * @file
 * pubteachforall_menus.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pubteachforall_menus_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-primary-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-primary-navigation',
    'module' => 'menu',
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
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-uber-nav'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-uber-nav',
    'module' => 'menu',
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
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
