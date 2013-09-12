(function($) {
	Drupal.behaviors.widget_map = {
		attach: function(context, settings) {


			var map = L.mapbox.map('map', 'andrew-ho-tfall.pubteach4allmap', {
			}).setView([30, 40], 2);

			map.doubleClickZoom.disable();
			map.scrollWheelZoom.disable();


		}
	};
}(jQuery));
