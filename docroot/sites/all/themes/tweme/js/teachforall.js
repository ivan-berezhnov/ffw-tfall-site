(function ($) {
  var sideMenuEnabled = false,
    hasTouch, mediaQuery768;

  initSideMenu = function() {
    $('.sidr-toggle').sidr({
      name: 'sidr-main',
      source: '#navbar nav'
    });

    // Enable swipe for touch-friendly devices
    if (hasTouch) {
      $(window).touchwipe({
        wipeLeft: function() {
          $.sidr('close', 'sidr-main'); // Close
        },
        wipeRight: function() {
          $.sidr('open', 'sidr-main'); // Open
        },
        preventDefaultEvents: false
      });
    }
  }

  $(document).ready(function() {
    hasTouch = $('html').hasClass('touch');

    mediaQuery768 = Harvey.attach('screen and (max-width:768px)', {
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