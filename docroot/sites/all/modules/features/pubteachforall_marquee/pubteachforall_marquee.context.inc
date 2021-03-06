<?php
/**
 * @file
 * pubteachforall_marquee.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pubteachforall_marquee_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marquee';
  $context->description = 'Main front page media block.';
  $context->tag = 'Marquee';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-tfall_marquee-block' => array(
          'module' => 'views',
          'delta' => 'tfall_marquee-block',
          'region' => 'marquee',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Main front page media block.');
  t('Marquee');
  $export['marquee'] = $context;

  return $export;
}
