(function($) {
	Drupal.behaviors.widget_map = {
		attach: function(context, settings) {

			var map = L.mapbox.map('map', Drupal.settings.widget_map.key, {
					center: [30, 25],
					zoom: 2,
					minZoom: 2,
					maxZoom: 5
				}),
				$mapTitle = $('.worldmap__title'),
				fadeAnimateTime = 200,
				noTouch = $('html').hasClass('no-touch');

			map.doubleClickZoom.disable();
			map.scrollWheelZoom.disable();

			$.ajax({
				url: '/widget_map_listofall.json',
				success: function parseJson(data) {
					map.markerLayer.setGeoJSON(data);
				}
			});

			toggleMapTitle = function(element) {
				var $mapPopup = $('.leaflet-popup-pane');

				switch(element) {
					case 'marker':
						if (noTouch) {
							if ($mapPopup.children().length) {
								$mapTitle.fadeIn(fadeAnimateTime);
							} else {
								$mapTitle.fadeOut(fadeAnimateTime);
							}
						} else {
							// Touch-enabled devices
							// Note: added 200ms delay for iOS7, as it was reaching the conditional before the the popup rendered
							setTimeout(function() {
								if ($mapPopup.children().length) {
									$mapTitle.fadeOut(fadeAnimateTime);
								} else {
									$mapTitle.fadeIn(fadeAnimateTime);
								}
							}, 200);
						}

						break;
					case 'map':
						if ($mapPopup.children().length) {
						  $mapTitle.fadeOut(fadeAnimateTime);
						} else {
						  $mapTitle.fadeIn(fadeAnimateTime);
						}

						break;
				}
			}

			map.markerLayer.on('layeradd', function(e) {
				var marker = e.layer,feature = marker.feature;

				marker.setIcon(L.icon(feature.properties.icon));

				var popupContent =
								'<a class="popup" href="' + feature.properties.url + '">' +
								'<div class="no__map-main-img"><img class="no__main-img" src="' + feature.properties.mainpic + '"></div>' +
								'<h2>' + feature.properties.title + '</h2>' +
								'<div class="no__logo"><img src="' + feature.properties.logo + '"></div>' +
								'</a>';

				marker.bindPopup(popupContent, {
					closeButton: false,
					minWidth: 291
				});

				marker.on('click', function(e){
					window.location = $(marker._popup._content).attr('href');
				})
					
			});

			if (noTouch) {
				map.markerLayer.on('mouseover',function(e) {
					$mapTitle.fadeOut(fadeAnimateTime);
					e.layer.openPopup();
				});

				map.on('popupopen', function(e){

					// had to go outside leaflet because they don't seem
					// to expose any methods to handle hover events on popups
					var popup = $('.leaflet-popup-content-wrapper');
					
					// using mouseleave as mouseout fires when hovering over
					// child elements
					popup.on('mouseleave', function(e){
						map.closePopup();
					});
				})
			}

			map.markerLayer.on('click', function(e) {
				toggleMapTitle('marker');
			});

			map.on('click', function() {
				toggleMapTitle('map');
			});
		}
	};
}(jQuery));
