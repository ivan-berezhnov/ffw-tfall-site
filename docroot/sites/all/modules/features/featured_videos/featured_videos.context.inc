<?php
/**
 * @file
 * featured_videos.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function featured_videos_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'en_video_front_block';
  $context->description = 'Three video block for front page';
  $context->tag = 'Featured Video';
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
        'views-featured_videos-block' => array(
          'module' => 'views',
          'delta' => 'featured_videos-block',
          'region' => 'net_learning_front',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Video');
  t('Three video block for front page');
  $export['en_video_front_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'es_video_front_block';
  $context->description = 'ES Three video block for front page';
  $context->tag = 'Featured Video';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'es' => 'es',
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
        'views-featured_videos-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_videos-block_1',
          'region' => 'net_learning_front',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('ES Three video block for front page');
  t('Featured Video');
  $export['es_video_front_block'] = $context;

  return $export;
}
