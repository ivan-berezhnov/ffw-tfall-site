<?php
/**
 * @file
 * tfa_forum.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tfa_forum_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forum_landing_page';
  $context->description = '';
  $context->tag = 'Forum';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'forum_landing_page' => 'forum_landing_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-31' => array(
          'module' => 'block',
          'delta' => '31',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forum');
  $export['forum_landing_page'] = $context;

  return $export;
}
