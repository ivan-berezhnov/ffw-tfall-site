<?php
/**
 * @file
 * pubteachforall_menus.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pubteachforall_menus_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'primary_nav';
  $context->description = 'Primary Navigation';
  $context->tag = 'Navigation';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-primary-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-primary-navigation',
          'region' => 'main_navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation');
  t('Primary Navigation');
  $export['primary_nav'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'uber_nav';
  $context->description = 'Uber Navigation';
  $context->tag = 'Navigation';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-uber-nav' => array(
          'module' => 'menu',
          'delta' => 'menu-uber-nav',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation');
  t('Uber Navigation');
  $export['uber_nav'] = $context;

  return $export;
}
