(function ($) {
  /* @functionality: custom slider */
  Drupal.behaviors.owlSlider = {
    attach: function (context, settings) {

      $('.view-id-tfall_marquee', context).once( 'owlSlider', function () {
        var slides = jQuery('.view-id-tfall_marquee .view-content',context);
        slides.owlCarousel({

        	items: 4,
        	navigation: true,
        	navigationText : false,
        	scrollPerPage: false,
        	pagination: false,
        	autoHeight: false,
        	mouseDrag: true,
        	touchDrag: true,
          autoPlay: true,
          itemsScaleUp: false,
        	itemsTablet: [1024,2],
        	itemsTabletSmall: [420,1],
        });

      });
    }
  }
})(jQuery);
