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
								feature.properties.blurb;

				marker.bindPopup(popupContent, {
					closeButton: false,
					minWidth: 320
				});
			});

			map.markerLayer.on('mouseover',function(e) {			
				e.layer.openPopup();
			});

			map.markerLayer.on('mouseout',function(e) {			
				e.layer.closePopup();
			});


		}
	};
}(jQuery));
