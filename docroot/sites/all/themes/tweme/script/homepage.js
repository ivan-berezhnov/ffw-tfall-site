(function ($) {
	Drupal.behaviors.homepage = {
	  attach: function (context, settings) {

			var map;
			var MY_MAPTYPE_ID = 'pubteach4all';

			function initialize() {

				var featureOpts = [{"featureType": "water", "stylers": [{"color": "#80b4e4"}]}, {"featureType": "administrative", "stylers": [{"visibility": "off"}]}, {"featureType": "landscape", "stylers": [{"visibility": "on"}, {"color": "#e7e0d8"}]}, {"featureType": "road", "stylers": [{"visibility": "off"}]}, {"featureType": "poi", "stylers": [{"visibility": "off"}]}];

				var mapOptions = {
					zoom:2,
					center: new google.maps.LatLng(28,9),
					disableDefaultUI: true,
					disableDoubleClickZoom: true,
					zoomControl: true,
					scrollwheel: false,
					mapTypeControlOptions: {mapTypeIds: [google.maps.MapTypeId.ROADMAP, MY_MAPTYPE_ID]},
					mapTypeId: MY_MAPTYPE_ID
				};

				map = new google.maps.Map(document.getElementById('googlemap'), mapOptions);

				var customMapType = new google.maps.StyledMapType(featureOpts);

				map.mapTypes.set(MY_MAPTYPE_ID, customMapType);
			}

			google.maps.event.addDomListener(window, 'load', initialize);


	  }
	};
}(jQuery));