<?php
/**
 * @file
 * teach_for_all_tweets.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function teach_for_all_tweets_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'twitter_frontpage';
  $context->description = '';
  $context->tag = 'Social Media';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-tfall_tweets-block_1' => array(
          'module' => 'views',
          'delta' => 'tfall_tweets-block_1',
          'region' => 'twitter_front',
          'weight' => '-10',
        ),
        'views-tfall_tweets-block_2' => array(
          'module' => 'views',
          'delta' => 'tfall_tweets-block_2',
          'region' => 'twitter_front',
          'weight' => '-9',
        ),
        'views-tfall_tweets-block_3' => array(
          'module' => 'views',
          'delta' => 'tfall_tweets-block_3',
          'region' => 'twitter_front',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Social Media');
  $export['twitter_frontpage'] = $context;

  return $export;
}
