<?php
/**
 * @file
 * path_breadcrumbs_feature.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function path_breadcrumbs_feature_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'default';
  $path_breadcrumb->name = 'Default';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['default'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'national_organizations_breadcrumbs';
  $path_breadcrumb->name = 'National Organizations breadcrumbs';
  $path_breadcrumb->path = 'national-organization/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'National Organizations',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'national-organizations',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['national_organizations_breadcrumbs'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'network_learning_breadcrumb';
  $path_breadcrumb->name = 'Network Learning Breadcrumb';
  $path_breadcrumb->path = 'network-learning/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Network Learning',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'network-learning',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['network_learning_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'news_breadcrumb';
  $path_breadcrumb->name = 'News Breadcrumb';
  $path_breadcrumb->path = 'news/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'news',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['news_breadcrumb'] = $path_breadcrumb;

  return $export;
}
