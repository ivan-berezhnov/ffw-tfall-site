(function ($) {

  // check http://www.owlcarousel.owlgraphic.com/docs/api-options.html for options
  Drupal.behaviors.frontPageCarousel = {
    attach: function (context, settings) {
      var $container = $('.owl-carousel', context);
      $container.owlCarousel({
        items: 1,
        loop: true,
        navigation: false,
        dots: false,
        responsive: {
          0: {
            items: 1,
            autoplay: true
          },
          580: {
            items: 2
          },
          768: {
            navigation: true,
            autoplay: false
          }
        }
      });
    }
  };

})(jQuery);
