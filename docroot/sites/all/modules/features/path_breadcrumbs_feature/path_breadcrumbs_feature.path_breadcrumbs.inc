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
  $path_breadcrumb->machine_name = 'about_breadcrumb';
  $path_breadcrumb->name = 'About breadcrumb';
  $path_breadcrumb->path = 'about/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'About',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -88;
  $export['about_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'default';
  $path_breadcrumb->name = 'Default';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:menu-link:parent',
      1 => '%node:title',
    ),
    'paths' => array(
      0 => '%node:menu-link:path',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'national_organization' => 'national_organization',
              'network_learning' => 'network_learning',
              'news' => 'news',
            ),
          ),
          'context' => 'node',
          'not' => TRUE,
        ),
        3 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'our-answer/*
our-network-and-impact/*
our-answer/*
network-learning
get-involved/*',
          ),
          'context' => 'empty',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -89;
  $export['default'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'get_involved';
  $path_breadcrumb->name = 'Get Involved';
  $path_breadcrumb->path = 'get-involved';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Get Involved',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -85;
  $export['get_involved'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'get_involved_breadcrumb';
  $path_breadcrumb->name = 'Get Involved breadcrumb';
  $path_breadcrumb->path = 'get-involved/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Get Involved',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'get-involved',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -92;
  $export['get_involved_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'global_problem';
  $path_breadcrumb->name = 'Global Problem';
  $path_breadcrumb->path = 'global-problem';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Global Problem',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -83;
  $export['global_problem'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'main_news_page';
  $path_breadcrumb->name = 'Main News Page';
  $path_breadcrumb->path = 'news';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News',
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
  $export['main_news_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'national_organizations_breadcrumbs';
  $path_breadcrumb->name = 'National Organizations breadcrumbs';
  $path_breadcrumb->path = 'national-organization/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Network and Impact',
      1 => 'National Organizations',
      2 => '!page_title',
    ),
    'paths' => array(
      0 => 'our-network-and-impact',
      1 => 'our-network-and-impact/national-organizations',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -96;
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
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -97;
  $export['network_learning_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'network_learning_latest';
  $path_breadcrumb->name = 'Network Learning Latest';
  $path_breadcrumb->path = 'network-learning/latest';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Network Learning',
      1 => 'Latest',
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
  $path_breadcrumb->weight = -99;
  $export['network_learning_latest'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'network_learning_main';
  $path_breadcrumb->name = 'Network Learning Main';
  $path_breadcrumb->path = 'network-learning';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Network Learning',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -93;
  $export['network_learning_main'] = $path_breadcrumb;

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
  $path_breadcrumb->weight = -98;
  $export['news_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'news_latest';
  $path_breadcrumb->name = 'News Latest';
  $path_breadcrumb->path = 'news/latest';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News',
      1 => 'Latest',
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
  $path_breadcrumb->weight = -100;
  $export['news_latest'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'our_answer';
  $path_breadcrumb->name = 'Our Answer';
  $path_breadcrumb->path = 'our-answer';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Answer',
    ),
    'paths' => array(
      0 => 'our-answer',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -84;
  $export['our_answer'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'our_answer_breadcrumb';
  $path_breadcrumb->name = 'Our Answer breadcrumb';
  $path_breadcrumb->path = 'our-answer/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Answer',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'our-answer',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -91;
  $export['our_answer_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'our_network_and_impact';
  $path_breadcrumb->name = 'Main Our Network and Impact';
  $path_breadcrumb->path = 'our-network-and-impact';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Network and Impact',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -87;
  $export['our_network_and_impact'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'our_network_and_impact_breadcrumb';
  $path_breadcrumb->name = 'Our Network and Impact breadcrumb';
  $path_breadcrumb->path = 'our-network-and-impact/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Our Network and Impact',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'our-network-and-impact',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -90;
  $export['our_network_and_impact_breadcrumb'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'privacy_policy';
  $path_breadcrumb->name = 'Privacy Policy';
  $path_breadcrumb->path = 'privacy-policy';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Privacy Policy',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -86;
  $export['privacy_policy'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'search';
  $path_breadcrumb->name = 'Search';
  $path_breadcrumb->path = 'search/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Search',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -88;
  $export['search'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'spotlight';
  $path_breadcrumb->name = 'Spotlight';
  $path_breadcrumb->path = 'spotlight/*';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Spotlight',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -95;
  $export['spotlight'] = $path_breadcrumb;

  return $export;
}
