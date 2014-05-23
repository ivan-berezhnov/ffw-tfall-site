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
          rewindNav: false,
        	itemsTablet: [1024,2],
        	itemsTabletSmall: [420,1],

          afterInit: function(){
            if(this.currentItem === 0){
              $('.owl-prev').fadeOut();
            }
            //only for no touch
            if($('html',context).hasClass('touch')){
              $('.view-id-tfall_marquee').append('<div class="swipe"></div>');            
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
            //only for no touch
            if($('html',context).hasClass('touch')){
              $('.swipe').hide();
            }
          },
        });

        //only for no touch
        if($('html',context).hasClass('no-touch')){
          $('.view-id-tfall_marquee').append('<div class="swipe"></div>');            
        }


        if($('html',context).hasClass('no-touch')){
          //add spacers left and right
          var content = "<div class=\"owl-item lb\"><div class=\"views-row\"></div></div>";
          slides.data('owlCarousel').addItem(content,0);
          slides.data('owlCarousel').addItem(content);

          //move items in twos
          $('.owl-next').bind('click',function(){
            slides.data('owlCarousel').next();
          });
          $('.owl-prev').bind('click',function(){
            slides.data('owlCarousel').prev();
          });
        }

      });
    }
  }
})(jQuery);
