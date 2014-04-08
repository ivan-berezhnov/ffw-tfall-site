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
        	autoHeight: false,
        	mouseDrag: true,
        	touchDrag: true,
          autoPlay: true,
          lazyLoad: true,
          itemsScaleUp: false,
          rewindNav: false,
        	itemsTablet: [1024,2],
        	itemsTabletSmall: [420,1],
          afterInit: function(){
            if(this.currentItem === 0){
              $('.owl-prev').hide();
            }
          },
          afterMove: function(){
            if(this.currentItem + 4 === this.itemsAmount){
              $('.owl-next').hide();
            }else{
              $('.owl-next').show();
            }
            if(this.currentItem >= 1){
              $('.owl-prev').show();
            }else{
              $('.owl-prev').hide();
            }
          },
        });
      });
    }
  }
})(jQuery);
