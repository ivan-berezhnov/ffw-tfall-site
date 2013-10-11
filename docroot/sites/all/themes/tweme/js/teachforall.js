(function ($) {

  // brought in from assets/js/drupal.js
  $(document).ready(function() {
    $('.field-type-text-long table').addClass('table table-bordered');
    $('.field-type-text-with-summary table').addClass('table table-bordered');

    $("a[title^='About']").click(function(e) {
        e.preventDefault();// suppress the 'About' link in the Uber Nav
    });
  });

  var $body,
    sideMenuEnabled = false,
    hasTouch, mediaQueryMobile;

  initSideMenu = function() {
    $('.sidr-toggle').sidr({
      name: 'sidr-main',
      source: '#navbar nav'
    });

    // Enable swipe for touch-friendly devices
    if (hasTouch) {
      $body.touchwipe({
        wipeLeft: function(e) {
          $.sidr('close', 'sidr-main'); // Close
        },
        wipeRight: function(e) {
          $.sidr('open', 'sidr-main'); // Open
        },
        preventDefaultEvents: 'x-axis'
      });
    }
  }

  togglePersonFullBio = function() {
    // Update both Mobile (one-col) and Tablet/Desktop (two-col) elements
    var $this = $(this),
      selectedBioName = $this.parent().parent().attr('class').split(' ')[1],
      $bioItems = $('#main .view-persons .' + selectedBioName),
      $bioTextElements = $bioItems.find('.person-bio, .person-bio-truncated'),
      $readMoreButtons = $bioItems.find('.read-more-btn'),
      $collapseButtons = $bioItems.find('.collapse-btn');

    $bioTextElements.toggleClass('is-visible');
    $readMoreButtons.toggleClass('is-visible');
    $collapseButtons.toggleClass('is-visible');
  }

  $(document).ready(function() {
    $body = $('body');

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


    if ($body.hasClass('page-leadership') || $body.hasClass('page-board')) {
      $('#main .view-persons .person-copy').each(function() {
        var $this = $(this),
          $bioTextTruncated = $this.children('.person-bio-truncated'),
          $readMoreButton = $this.children('.read-more-btn'),
          $collapseButton = $this.children('.collapse-btn');

          $bioTextTruncated.addClass('is-visible');
          $readMoreButton.addClass('is-visible').on('click', togglePersonFullBio);
          $collapseButton.on('click', togglePersonFullBio);
      });
    } else if ($body.hasClass('page-news') || $body.hasClass('page-network-learning')) {
      var $moreContentBtn = $('#main .full-list');

      if ($moreContentBtn.length > 0) {
        $('#main .page-title').next().children().first().append($moreContentBtn);
      }
    }
  });

})(jQuery);