<?php

/*
 * widget_map admin settings form
 */

function widget_map_settings_form($form, &$form_state) {
	$form = array();

	$form['widget_map_mapboxid_generic'] = array(
		'#type' => 'textfield',
		'#title' => t('Widget Map - MapBox key for generic map'),
		'#description' => t('Used in homepage and NO pages'),
		'#default_value' => variable_get('widget_map_mapboxid_generic', ''),
	);

	$form['widget_map_mapboxid_statistics'] = array(
		'#type' => 'textfield',
		'#title' => t('Widget Map - MapBox key for statistics map'),
		'#description' => t('Used in Global problem'),
		'#default_value' => variable_get('widget_map_mapboxid_statistics', ''),
	);

	return system_settings_form($form);
}
