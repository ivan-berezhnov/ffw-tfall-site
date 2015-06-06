(function ($) {

  // check http://www.owlcarousel.owlgraphic.com/docs/api-options.html for options
  Drupal.behaviors.owlSlideshow = {
    attach: function (context, settings) {
      var $container = $('.owl-carousel', context);
      $container.owlCarousel({
        items: 1,
        navigation: true,
        dots: true,
        autoplay: true,
        autoplayHoverPause: true,
        loop: true
      });
    }
  };

})(jQuery);
