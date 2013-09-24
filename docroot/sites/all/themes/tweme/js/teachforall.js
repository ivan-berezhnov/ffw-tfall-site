(function ($) {
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
          e.preventDefault();
          e.stopImmediatePropagation();
          $.sidr('close', 'sidr-main'); // Close
        },
        wipeRight: function(e) {
          e.preventDefault();
          e.stopImmediatePropagation();
          $.sidr('open', 'sidr-main'); // Open
        },
        preventDefaultEvents: false
      });
    }
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

    if ($body.hasClass('page-leaders') || $body.hasClass('page-board')) {
      $('#main .view-persons .person-copy').each(function() {
        var $bio = $(this).children('.person-bio'),
          $bioMoreParagraphs = $bio.find(':not(:first-child)'),
          $readMoreBtn = $bio.next(),
          $collapseBtn = $readMoreBtn.next();

          if ($bio.find(':not(:first-child)').length > 0) {
            $bioMoreParagraphs.addClass('is-hidden');

            $readMoreBtn
              .addClass('is-visible')
              .on('click', function() {
                var selectedBioName = $readMoreBtn.parent().parent().attr('class').split(' ')[1],
                  $bioElements = $('#main .view-persons .' + selectedBioName),
                  $hiddenParagraphs = $bioElements.find(':not(:first-child)');

                $readMoreBtn.toggleClass('is-visible');
                $collapseBtn.toggleClass('is-visible');
                $hiddenParagraphs.toggleClass('is-hidden');
              });

            $collapseBtn.on('click', function() {
              var selectedBioName = $readMoreBtn.parent().parent().attr('class').split(' ')[1],
                $bioElements = $('#main .view-persons .' + selectedBioName),
                $hiddenParagraphs = $bioElements.find(':not(:first-child)');

              $readMoreBtn.toggleClass('is-visible');
              $collapseBtn.toggleClass('is-visible');
              $hiddenParagraphs.toggleClass('is-hidden');
            });
          }
      });
    }
  });
})(jQuery);