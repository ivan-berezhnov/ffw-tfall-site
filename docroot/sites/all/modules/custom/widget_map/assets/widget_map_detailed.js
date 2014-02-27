(function ($) {
    Drupal.behaviors.widget_map = {
        attach: function (context, settings) {

            var map = L.mapbox.map('map', Drupal.settings.widget_map.key, {
                    center: [30, 25],
                    zoom: 2,
                    minZoom: 2,
                    maxZoom: 5
                }),
                $mapTitle = $('.worldmap__title'),
                fadeAnimateTime = 200,
                noTouch = $('html').hasClass('no-touch');

            var l = L.layerGroup().addTo(map)

            var featureLayer = L.mapbox.featureLayer(null).addTo(map);
            featureLayer.loadURL('/widget_map_detailedlist.json');

            map.doubleClickZoom.disable();
            map.scrollWheelZoom.disable();

            toggleMapTitle = function (element) {
                var $mapPopup = $('.leaflet-popup-pane');

                switch (element) {
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
                            setTimeout(function () {
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

            featureLayer.on('layeradd', function (e) {
                var marker = e.layer, feature = marker.feature;

                marker.setIcon(L.icon(feature.properties.icon));

                var popupContent =
                    '<div class="slug">' + feature.properties.title + '</div>' +
                        '<div class="widget-map__blurb">' + feature.properties.blurb + '</div>';

                marker.bindPopup(popupContent, {
                    closeButton: false,
                    minWidth: 291
                });

                marker.on('click', function (e) {
                    window.location = $(marker._popup._content).attr('href');
                })

            });

            if (noTouch) {
                featureLayer.on('mouseover', function (e) {
                    $mapTitle.fadeOut(fadeAnimateTime);
                    e.layer.openPopup();
                });

                map.on('popupopen', function (e) {

// had to go outside leaflet because they don't seem
// to expose any methods to handle hover events on popups
                    var popup = $('.leaflet-popup-content-wrapper');

// using mouseleave as mouseout fires when hovering over
// child elements
                    popup.on('mouseleave', function (e) {
                        map.closePopup();
                    });
                });
                map.on('popupclose', function (e) {
                    $mapTitle.fadeIn(fadeAnimateTime);
                });
            }

            featureLayer.on('click', function (e) {
                toggleMapTitle('marker');
            });

            map.on('click', function () {
                toggleMapTitle('map');
            });
        }
    };
}(jQuery));
