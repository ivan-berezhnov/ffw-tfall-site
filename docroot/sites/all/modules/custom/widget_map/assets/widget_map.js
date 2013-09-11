(function($) {
	Drupal.behaviors.widget_map = {
		attach: function(context, settings) {


			var map = L.mapbox.map('map', 'andrew-ho-tfall.map-412vhuu4')
							.setView([30, 10], 2);

		}
	};
}(jQuery));