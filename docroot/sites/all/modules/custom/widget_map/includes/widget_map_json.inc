<?php

/*
 * list of all NO markers
 */
function _widget_map_listofall($language) {

	$query = new EntityFieldQuery();

	$result = $query->entityCondition('entity_type', 'node')
			->entityCondition('bundle', 'national_organization')
			->propertyCondition('status', 1)
			->fieldCondition('field_active_flag', 'value', 1)
			->execute();

	if (isset($result['node'])) {
		$nids = array_keys($result['node']);
		$items = entity_load('node', $nids);
	}

	foreach ($items as $item) {
    // Get item language.
	  $langtitle = field_language('node', $item, 'title_field', $language);
	  
    // Define the current country.
    $country = $item->field_country['en'][0]['value'];

	  // Build the marker.
		$marker = null;
		$marker->type = 'Feature';
		$marker->geometry = array('type' => 'Point', 'coordinates' => array($item->field_location[LANGUAGE_NONE][0]['lon'], $item->field_location[LANGUAGE_NONE][0]['lat']));
		$marker->properties = array(
			'title' => i18n_string('field:field_country:#allowed_values:' . $country, $country, array('langcode' => $language)),
			'name' => $item->title_field[$langtitle][0]['value'],
			'url' => $GLOBALS['base_url'] . $GLOBALS['base_path'] . $language . '/' . drupal_get_path_alias('node/' . $item->nid),
			'logo' => image_style_url('map_logo',$item->field_no_logo[LANGUAGE_NONE][0]['uri']),
			'mainpic' => image_style_url('map_thumbnail',$item->field_no_image[LANGUAGE_NONE][0]['uri']),
			'icon' => array(
				'iconUrl' => '/' . drupal_get_path('module', 'widget_map') . '/assets/map_marker.png',
				'iconSize' => array(21, 21),
				'iconAnchor' => array(10, 10),
				'popupAnchor' => array(0, -10)
			)
		);

		$output[] = $marker;
	};

	drupal_json_output($output);
}


function _widget_map_detailedlist($language) {

	sleep(1);
	$query = new EntityFieldQuery();

	$result = $query->entityCondition('entity_type', 'node')
			->entityCondition('bundle', 'national_organization')
			->propertyCondition('status', 1)
			->fieldCondition('field_active_flag', 'value', 1)
			->execute();

	if (isset($result['node'])) {
		$nids = array_keys($result['node']);
		$items = entity_load('node', $nids);
	}

	foreach ($items as $item) {
    // Get item language.
    $lang = field_language('node', $item, 'field_blurb', $language);
    
    // Define the current country.
    $country = $item->field_country['en'][0]['value'];
      
    // Build marker.
		$marker = null;
		$marker->type = 'Feature';
		$marker->geometry = array('type' => 'Point', 'coordinates' => array($item->field_location[LANGUAGE_NONE][0]['lon'], $item->field_location[LANGUAGE_NONE][0]['lat']));
		$marker->properties = array(
			'title' => i18n_string('field:field_country:#allowed_values:' . $country, $country, array('langcode' => $language)),
			'url' => $GLOBALS['base_url'] . $GLOBALS['base_path'] . $language . '/' . drupal_get_path_alias('node/' . $item->nid),
			'blurb' => $item->field_blurb[$lang][0]['value'],
			'icon' => array(
				'iconUrl' => '/' . drupal_get_path('module', 'widget_map') . '/assets/map_marker.png',
				'iconSize' => array(21, 21),
				'iconAnchor' => array(10, 10),
				'popupAnchor' => array(0, -10)
			)
		);

		$output[] = $marker;
	};

	drupal_json_output($output);
}
