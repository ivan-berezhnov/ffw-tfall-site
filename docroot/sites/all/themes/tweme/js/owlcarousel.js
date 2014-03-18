


    	jQuery(document).ready(function() {


      jQuery('.view-id-tfall_marquee').once( 'customSlider', function () {
        var slides = jQuery('.view-id-tfall_marquee .view-content');
        slides.owlCarousel();
		//get carousel instance data and store it in variable owl
		var owl = slides.data('owlCarousel');

		//Public methods
		owl.next()   // Go to next slide
		owl.prev()   // Go to previous slide
		owl.goTo(x)  // Go to x slide
		owl.jumpTo(x)  // Go to x slide without slide animation
		 
		//Auto Play
		owl.play() // Autoplay
		owl.stop() // Autoplay Stop
		 
      });


  		});


