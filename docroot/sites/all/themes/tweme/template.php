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
      'path' => $path . '/templates/system',
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
	
  //Translate the countries string for titles.
  if ($vars['element']['#field_name'] == 'field_country') {
    global $language;

    // Translate if necessary.
    if ($language->language != 'en') {
      // Country string is always English.
      $country = $vars['items'][0]['#markup'];
      
      // Set translation.
      $vars['items'][0]['#markup'] = i18n_string('field:field_country:#allowed_values:' . $country, $country, array('langcode' => $language->language));
    }
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

  global $language;

  $groups = array();
	$n = 0;
	
	foreach ($results as $result) {
	
    //Translate the country name strings if necessary.
	  if ($language->language != 'en') {
	  
	    // Get the current country string (always English).
	    $curr_country = $result->field_data_field_country_field_country_value;
	    
	    $result->field_data_field_country_field_country_value = i18n_string('field:field_country:#allowed_values:' . $curr_country, $curr_country, array('langcode' => $language->language));
    }
	  
	  // Create the array to sort.
		$groups[$result->field_data_field_country_field_country_value][] = $rows[$n];
		$n++;
	}

  // Sort the array alphabetically depending on translated country key.
  ksort($groups);
  
	$count = sizeof($groups);

	$cols = array();
	$spread = array(ceil($count / 3), ceil(($count - ceil($count / 3)) / 2), $count - ceil($count / 3) - ceil(($count - ceil($count / 3)) / 2));

	$c = $n = 0;
	foreach ($groups as $gk => $gv) {
		if ($n < $spread[$c]) {
			$cols[$c][$gk] = $gv;
		} else {
			$n = 0;
			$c++;
			$cols[$c][$gk] = $gv;
		}
		$n++;
	}

	$vars['cols'] = $cols;
}

function tfallplp_preprocess_comment(&$vars, $hook) {
  $comment = $vars['comment'];
  $comment_wrapper = entity_metadata_wrapper('comment', $comment);
}

//Panopoly video functions
//check to see if the field is a video file

/**
 * @param $field_video_file
 * @param $field_video_pane_thumbnail
 * @return null|string $video_link
 */
function create_video_file_template($field_video_file, $field_video_pane_thumbnail = NULL)
{
  $wrapper = file_stream_wrapper_get_instance_by_uri($field_video_file['0']['uri']);
  $parts = $wrapper->get_parameters();
  $video_id = check_plain($parts['v']);
  $video_link = NULL;
  $baseurl = $GLOBALS['base_url'];

  if ($field_video_file['0']['filemime'] == 'video/youtube') {
    if (isset($field_video_pane_thumbnail)) {
      $image_uri = $baseurl .'/sites/default/files/' . $field_video_pane_thumbnail['0']['filename'];
      $video_link = create_youtube_link($video_id, $image_uri);
    } else {
      $video_link = create_youtube_link($video_id);
    }

  } elseif ($field_video_file['0']['filemime'] == 'video/vimeo') {
    if (isset($field_video_pane_thumbnail)) {
      $image_uri = $baseurl . '/sites/default/files/' . $field_video_pane_thumbnail['0']['filename'];
      $video_link = create_vimeo_link($video_id, $image_uri);
    } else {
      $video_link = create_vimeo_link($video_id);
    }
  }
  return $video_link;
}

/**
 * @param $video_id
 * @param null $image_uri
 * @return string
 */

function create_youtube_link($video_id, $image_uri = NULL)
{
  $image_link = NULL;
  if ($image_uri) {
    $image_link = $image_uri;
  } else {
    $image_link = 'http://img.youtube.com/vi/' . $video_id . '/hqdefault.jpg';
  }
  $link = '<a class="shadowboxvideo" rel="" href=http://www.youtube.com/watch_popup?v=' . $video_id . '/?autoplay=1><img src=' . $image_link . '></a>';
  return $link;

}

/**
 * @param $video_id
 * @param null $image_uri
 * @return string
 */
function create_vimeo_link($video_id, $image_uri = NULL)
{
  $image_link = NULL;
  if ($image_uri) {
    $image_link = $image_uri;
  } else {
    $image_link = getVimeoThumb($video_id);
  }
  $link = '<a class="shadowboxvideo" rel="" href=http://player.vimeo.com/video/' . $video_id . '/?autoplay=1><img src=' . $image_link . '></a>';
  return $link;

}

/**
 * @param $id
 * @return mixed
 */
function getVimeoThumb($id) {
  $data = file_get_contents("http://vimeo.com/api/v2/video/$id.json");
  $data = json_decode($data);
  return $data[0]->thumbnail_large;
}