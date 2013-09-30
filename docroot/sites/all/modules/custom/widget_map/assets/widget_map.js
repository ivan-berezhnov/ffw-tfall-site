(function($) {
	Drupal.behaviors.widget_map = {
		attach: function(context, settings) {


			var map = L.mapbox.map('map', 'andrew-ho-tfall.pubteach4allmap', {
				center: [30, 25],
				zoom: 2,
				minZoom: 2,
				maxZoom: 5
			});

			map.doubleClickZoom.disable();
			map.scrollWheelZoom.disable();

			$.ajax({
				url: '/widget_map_listofall.json',
				success: function parseJson(data) {
					map.markerLayer.setGeoJSON(data);
				}
			});



			map.markerLayer.on('layeradd', function(e) {
				var marker = e.layer,feature = marker.feature;

				marker.setIcon(L.icon(feature.properties.icon));

				var popupContent =
								'<a class="popup" href="' + feature.properties.url + '">' +
								'<img class="no__main-img" src="' + feature.properties.mainpic + '">' +
								'<h2>' + feature.properties.title + '</h2>' +
								'<img src="' + feature.properties.logo + '">' +
								'</a>' +
								'<a class="btn btn-primary" href="' + feature.properties.url + '">Learn more</a>';

				marker.bindPopup(popupContent, {
					closeButton: false,
					minWidth: 320
				});
			});

		}
	};
}(jQuery));
