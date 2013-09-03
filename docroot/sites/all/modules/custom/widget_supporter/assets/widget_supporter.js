(function($) {
	Drupal.behaviors.widget_supporter = {
		attach: function(context, settings) {

			$('.flexslider_supporter').flexslider({
				animation: 'slide', //String: Select your animation type, "fade" or "slide"
				animationLoop: true, //Boolean: Should the animation loop? If false, directionNav will received "disable" classes at either end
				slideshow: true, //Boolean: Animate slider automatically
				slideshowSpeed: 5000, //Integer: Set the speed of the slideshow cycling, in milliseconds
				animationSpeed: 500, //Integer: Set the speed of animations, in milliseconds
				pauseOnHover: true, //Boolean: Pause the slideshow when hovering over slider, then resume when no longer hovering
				touch: true, //{NEW} Boolean: Allow touch swipe navigation of the slider on touch-enabled devices	
				selector: 'ul > li', //{NEW} Selector: Must match a simple pattern. '{container} > {slide}' -- Ignore pattern at your own peril
				controlNav: false, //Boolean: Create navigation for paging control of each clide? Note: Leave true for manualControls usage
				directionNav: false, //Boolean: Create navigation for previous/next navigation? (true/false)
				keyboard: false //Boolean: Allow slider navigating via keyboard left/right keys
			});
		}
	};
}(jQuery));