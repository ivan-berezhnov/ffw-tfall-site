<?php
/**
 * @file
 * pubteachforall_press.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function pubteachforall_press_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'main_press_page';
  $path_breadcrumb->name = 'Main Press Page';
  $path_breadcrumb->path = 'press';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -94;
  $export['main_press_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'press_latest';
  $path_breadcrumb->name = 'Press Latest';
  $path_breadcrumb->path = 'press/latest';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Press',
      1 => 'Latest',
    ),
    'paths' => array(
      0 => 'press',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -100;
  $export['press_latest'] = $path_breadcrumb;

  return $export;
}
