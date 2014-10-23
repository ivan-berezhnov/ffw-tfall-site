(function($) {
	Drupal.behaviors.widget_map = {
		attach: function(context, settings) {

			var map = L.mapbox.map('map', Drupal.settings.widget_map.key, {
				center: [30, 38],
				zoom: 2,
				minZoom: 2,
				maxZoom: 5,
				maxBounds: L.latLngBounds(L.latLng(-70, -210),L.latLng(130, 242))
			}),
			$mapTitle = $('.worldmap__title'),
			$zoomControls = $('.leaflet-control-zoom'),
			hasTouch = $('html').hasClass('touch');

			//prevents map repetition
			map.tileLayer.options.noWrap = true;

            var l = L.layerGroup().addTo(map)

            var featureLayer = L.mapbox.featureLayer(null).addTo(map);
            
            // Pass the current language to build the json output.
            var lang = Drupal.settings.widget_map.language;
            featureLayer.loadURL('/widget_map_detailedlist.json' + '/' + lang);

			map.doubleClickZoom.disable();
			map.scrollWheelZoom.disable();

			toggleMapTitle = function(element) {
				var $mapPopup = $('.leaflet-popup-pane');

				switch(element) {
					case 'marker':
						// Note: added 200ms delay for iOS7, as it was reaching the conditional before the the popup rendered
						setTimeout(function() {
							if ($mapPopup.children().length) {
								$mapTitle.hide();
								$zoomControls.hide();
							} else {
								$mapTitle.show();
								$zoomControls.show();
							}
						}, (hasTouch ? 200 : 0) );

						break;
					case 'map':
						if ($mapPopup.children().length) {
						  $mapTitle.hide();
						  $zoomControls.hide();
						} else {
						  $mapTitle.show();
						  $zoomControls.show();
						}

						break;
				}
			}

			featureLayer.on('layeradd', function (e) {
				var marker = e.layer,feature = marker.feature;

				marker.setIcon(L.icon(feature.properties.icon));

				var popupContent =
								'<a class="popup" href="' + feature.properties.url + '">' +
								'<div class="slug">' + feature.properties.title + '</div>' +
								'<div class="widget-map__blurb">' + feature.properties.blurb + '</div>'
								+ '</a>';

				marker.bindPopup(popupContent, {
					closeButton: false,
					minWidth: 320
				});

				marker.on('click', function(e){
					window.location = $(marker._popup._content).attr('href');
				});
			});

			featureLayer.on('mouseover', function (e) {
				//$mapTitle.hide()
				//$zoomControls.hide();
				e.layer.openPopup();
			});

			// map.markerLayer.on('mouseout',function(e) {
			// 	$mapTitle.show();
			// 	$zoomControls.show();
			// 	//e.layer.closePopup();
			// });

			map.on('popupopen', function(e){

				// had to go outside leaflet because they don't seem
				// to expose any methods to handle hover events on popups
				var popup = $('.leaflet-popup-content-wrapper');
				
				// using mouseleave as mouseout fires when hovering over
				// child elements
				popup.on('mouseleave', function(e){
					map.closePopup();
				});
			});


			if (hasTouch) {
				featureLayer.on('click', function (e) {
					toggleMapTitle('marker');
				});

				map.on('click', function() {
					toggleMapTitle('map');
				});
			}
		}
	};

}(jQuery));
