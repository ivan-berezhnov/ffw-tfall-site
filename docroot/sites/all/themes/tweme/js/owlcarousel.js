(function ($) {
  /* @functionality: custom slider */
  Drupal.behaviors.owlSlider = {
    attach: function (context, settings) {

      $('.view-id-tfall_marquee', context).once( 'owlSlider', function () {

        var slides = $('.view-id-tfall_marquee .view-content',context);
        slides.owlCarousel({
        	items: 4,
        	navigation: true,
        	navigationText : false,
        	scrollPerPage: false,
        	pagination: false,
        	autoHeight: true,
        	mouseDrag: true,
        	touchDrag: true,
          autoPlay: false,
          lazyLoad: true,
          rewindNav: true,
        	itemsTablet: [1024,2],
        	itemsTabletSmall: [420,1],

          afterInit: function(){
            if(this.currentItem === 0){
              $('.owl-prev').fadeOut();
            }
          },
          afterMove: function(){
            if(this.currentItem + 4 === this.itemsAmount){
              $('.owl-next').fadeOut('fast');
            }else{
              $('.owl-next').fadeIn('fast');
            }
            if(this.currentItem >= 1){
              $('.owl-prev').fadeIn('fast');
            }else{
              $('.owl-prev').fadeOut('fast');
            }
          },
        });

        if($('html',context).hasClass('no-touch')){
          var content = "<div class=\"owl-item lb\"><div class=\"views-row\"></div></div>";
          slides.data('owlCarousel').addItem(content,0);
          slides.data('owlCarousel').addItem(content);
        }

      });
    }
  }
})(jQuery);
