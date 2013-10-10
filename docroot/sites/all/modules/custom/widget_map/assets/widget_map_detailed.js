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
			$zoomControls = $('.leaflet-control-zoom');

			map.doubleClickZoom.disable();
			map.scrollWheelZoom.disable();

			$.ajax({
				url: '/widget_map_detailedlist.json',
				success: function parseJson(data) {
					map.markerLayer.setGeoJSON(data);
				}
			});

			map.markerLayer.on('layeradd', function(e) {
				var marker = e.layer,feature = marker.feature;

				marker.setIcon(L.icon(feature.properties.icon));

				var popupContent =
								'<div class="slug">' + feature.properties.title + '</div>' +
								'<div class="widget-map__blurb">' + feature.properties.blurb + '</div>';

				marker.bindPopup(popupContent, {
					closeButton: false,
					minWidth: 320
				});
			});

			map.markerLayer.on('mouseover',function(e) {
				$mapTitle.hide()
				$zoomControls.hide();
				e.layer.openPopup();
			});

			map.markerLayer.on('mouseout',function(e) {
				$mapTitle.show();
				$zoomControls.show();
				e.layer.closePopup();
			});
		}
	};
}(jQuery));
