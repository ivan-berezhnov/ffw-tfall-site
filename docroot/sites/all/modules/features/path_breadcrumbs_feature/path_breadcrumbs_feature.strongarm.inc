<?php
/**
 * @file
 * path_breadcrumbs_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function path_breadcrumbs_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_breadcrumbs_delimiter';
  $strongarm->value = '|';
  $export['path_breadcrumbs_delimiter'] = $strongarm;

  return $export;
}
