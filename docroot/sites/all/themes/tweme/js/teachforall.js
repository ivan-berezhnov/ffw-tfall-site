(function ($) {
  var sideMenuEnabled = false,
    hasTouch, mediaQueryMobile;

  initSideMenu = function() {
    $('.sidr-toggle').sidr({
      name: 'sidr-main',
      source: '#navbar nav'
    });

    // Enable swipe for touch-friendly devices
    if (hasTouch) {
      $(window).touchwipe({
        wipeLeft: function(e) {
          $.sidr('close', 'sidr-main'); // Close
        },
        wipeRight: function(e) {
          $.sidr('open', 'sidr-main'); // Open
        },
        preventDefaultEvents: false
      });
    }
  }

  $(document).ready(function() {
    hasTouch = $('html').hasClass('touch');

    mediaQueryMobile = Harvey.attach('screen and (max-width:767px)', {
      on: function() {
        if (!sideMenuEnabled) {
          sideMenuEnabled = true;
          initSideMenu();
        }
      },
      off: function() {
        // Ensure mobile nav is hidden
        $.sidr('close', 'sidr-main');
      }
    });
  });
})(jQuery);