<?php
/**
 * @file
 * news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_slider';
  $context->description = 'News sliding block.';
  $context->tag = 'News';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'widget_facebook-tfall_facebook_block' => array(
          'module' => 'widget_facebook',
          'delta' => 'tfall_facebook_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('News sliding block.');
  $export['news_slider'] = $context;

  return $export;
}
