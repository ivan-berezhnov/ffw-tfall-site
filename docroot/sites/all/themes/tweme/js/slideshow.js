(function ($) {

  // check http://www.owlcarousel.owlgraphic.com/docs/api-options.html for options
  Drupal.behaviors.owlSlideshow = {
    attach: function (context, settings) {
      var $container = $('.owl-carousel', context);

      // It's necessary to bind the onChange event before the .owlCarousel()
      // call so it fires on initialization too.
      $container.bind('onChange', function(e) {
        var $container = $(e.target);
        var data = $container.data();
        var count, position;
        if (data && data.owlCarousel) {
          count = data.owlCarousel.num.oItems;
          position = data.owlCarousel.pos.current + 1;
        }
        else {
          // On the first call data.owlCarousel is not available.
          count = $('.owl-item:not(.cloned)', e.target).size();
          position = 1;
          $container.find('.owl-dots').before('<div class="owl-custom-counter" />');
        }
        $container.find('.owl-custom-counter').text(position + '/' + count);
      });

      $container.owlCarousel({
        items: 1,
        navigation: true,
        dots: true,
        autoplay: true,
        autoplayHoverPause: true,
        callbacks: true,
        loop: true
      });
    }
  };

})(jQuery);
