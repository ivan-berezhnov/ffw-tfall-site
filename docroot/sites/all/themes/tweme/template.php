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

	$variables['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $vars['node']->nid;
	$variables['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $vars['view_mode'];
	$variables['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $vars['view_mode'] . '__' . $vars['node']->nid;

	$function_name = __FUNCTION__ . '__' . $vars['node']->type;
	if (function_exists($function_name)) {
		$function_name($vars);
	}
}