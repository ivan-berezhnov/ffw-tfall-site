<?php
/**
 * @file
 * slc.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function slc_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slc-sidebar';
  $context->description = '';
  $context->tag = 'slc';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'en/student-leaders-campaign-contact-form' => 'en/student-leaders-campaign-contact-form',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-41' => array(
          'module' => 'block',
          'delta' => '41',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'block-36' => array(
          'module' => 'block',
          'delta' => '36',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('slc');
  $export['slc-sidebar'] = $context;

  return $export;
}
