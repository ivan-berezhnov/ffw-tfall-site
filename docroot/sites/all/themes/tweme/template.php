<?php

/**
 * @file
 * Provides preprocess logic and other functionality for theming.
 */

// Ensure that __DIR__ constant is defined:
if (!defined('__DIR__')) {
  define('__DIR__', dirname(__FILE__));
}

// Require files:
require_once __DIR__ . '/includes/helpers.inc';
require_once __DIR__ . '/includes/libraries.inc';
require_once __DIR__ . '/includes/menus.inc';
require_once __DIR__ . '/includes/theme.inc';

// Require module-specific files:
$requires = file_scan_directory(__DIR__ . '/includes/modules', '/\.inc$/');
foreach ($requires as $require) {
  if (module_exists($require->name)) {
    require_once $require->uri;
  }
}

/**
 * Implements hook_theme().
 */
function tweme_theme($existing, $type, $theme, $path) {
  return array(
    'navbar_brand' => array(
      'variables' => array(
        'name' => NULL,
        'href' => NULL,
        'logo' => NULL,
      ),
    ),
    'navbar_toggler' => array(),
    'preface' => array(
      'path' => $path . '/templates',
      'template' => 'preface',
      'variables' => array(
        'breadcrumb' => NULL,
        'title_prefix' => array(),
        'title' => NULL,
        'title_suffix' => array(),
        'messages' => NULL,
        'help' => array(),
        'tabs' => array(),
        'actions' => array(),
      ),
    ),
    'copyright' => array(
      'variables' => array(
        'name' => NULL,
      ),
    ),
    'pure_form_wrapper' => array(
      'render element' => 'element',
    ),
    'search_input_wrapper' => array(
      'render element' => 'element',
    ),
  );
}

/**
 * Implements hook_css_alter().
 */
function tweme_css_alter(&$css) {
  unset($css['modules/poll/poll.css']);
}

/**
 * Implements hook_js_alter().
 */
function tweme_js_alter(&$js) {
  _tweme_upgrade_jquery($js['misc/jquery.js']);
}

/*
 * Implements hook_preprocess_field
 * extend support for fields
 */
function tweme_preprocess_field(&$vars, $hook) {
	$element = $vars['element'];
	$function_name = __FUNCTION__ . '__' . $element['#field_name'];
	if (function_exists($function_name)) {
		$function_name($vars);
	}
}

/*
 * Implements hook_preprocess_node
 * extend support for node view modes templates if needed
 */
function tweme_preprocess_node(&$vars) {

	if (empty($vars['node'])) {
		return;
	}

	$vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $vars['node']->nid;
	$vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $vars['view_mode'];
	$vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $vars['view_mode'] . '__' . $vars['node']->nid;

	$function_name = __FUNCTION__ . '__' . $vars['node']->type;
	if (function_exists($function_name)) {
		$function_name($vars);
	}
}

function tweme_preprocess_views_view_unformatted(&$vars) {
	$function_name = __FUNCTION__ . '__' . $vars['view']->name;
	if (function_exists($function_name)) {
		$function_name($vars);
	}
}

function tweme_preprocess_views_view(&$vars) {
	$function_name = __FUNCTION__ . '__' . $vars['view']->name;
	if (function_exists($function_name)) {
		$function_name($vars);
	}
}

function tweme_preprocess_views_view_unformatted__nos_az(&$vars) {

	$results = $vars['view']->result;
	$rows = $vars['rows'];

	$groups = array();

	$n = 0;
	foreach ($results as $result) {
		$groups[$result->field_data_field_country_field_country_value][] = $rows[$n];
		$n++;
	}

	$count = sizeof($groups);

	$cols = array();
	$spread = array(ceil($count / 3), ceil(($count - ceil($count / 3)) / 2), $count - ceil($count / 3) - ceil(($count - ceil($count / 3)) / 2));

	$c = $n = 0;
	foreach ($groups as $gk => $gv) {
		if ($n < $spread[$c]) {
			$cols[$c][$gk] = $gv;
			$n++;
		} else {
			$n = 0;
			$c++;
		}
	}

	$vars['cols'] = $cols;
}
