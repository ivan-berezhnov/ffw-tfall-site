(function ($) {

  // check http://www.owlcarousel.owlgraphic.com/docs/api-options.html for options
  Drupal.behaviors.owlSlideshow = {
    attach: function (context, settings) {
      var $container = $('.owl-carousel', context);
      $container.owlCarousel({
        animateOut: 'fadeOut',
        animateIn: 'fadeOut',
        items: 1,
        navigation: false,
        dots: true,
        autoplay: true,
        smartSpeed: 450
      });
    }
  };

})(jQuery);
