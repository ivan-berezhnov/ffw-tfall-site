<?php

/*
 * list of all NO markers
 */
function _widget_map_listofall() {

	$query = new EntityFieldQuery();

	$result = $query->entityCondition('entity_type', 'node')
			->entityCondition('bundle', 'national_organization')
			->propertyCondition('status', 1)
			->execute();

	if (isset($result['node'])) {
		$nids = array_keys($result['node']);
		$items = entity_load('node', $nids);
	}

	foreach ($items as $item) {
		$marker = null;
		$marker->type = 'Feature';
		$marker->geometry = array('type' => 'Point', 'coordinates' => array($item->field_location[LANGUAGE_NONE][0]['lon'], $item->field_location[LANGUAGE_NONE][0]['lat']));
		$marker->properties = array(
			'title' => $item->title,
			'url' => '/' . drupal_get_path_alias('node/' . $item->nid),
			'logo' => image_style_url('map_thumbnail',$item->field_no_logo[LANGUAGE_NONE][0][uri]),
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
