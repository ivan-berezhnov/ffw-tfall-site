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
          $.sidr('close', 'sidr-main'); // Close
        },
        wipeRight: function(e) {
          $.sidr('open', 'sidr-main'); // Open
        },
        preventDefaultEvents: 'x-axis'
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

    if ($body.hasClass('front') || $body.hasClass('node-type-national-organizations') || $body.hasClass('node-type-national-organization')) {
      $('#map').on('click', function() {
        var $mapPopup = $('.leaflet-popup-pane'),
          $mapTitle = $('.worldmap__title'),
          fadeAnimateTime = 200;

        if ($mapPopup.children().length) {
          $mapTitle.fadeOut(fadeAnimateTime);
        } else {
          $mapTitle.fadeIn(fadeAnimateTime);
        }
      });
    } else if ($body.hasClass('page-leadership') || $body.hasClass('page-board')) {
      $('#main .view-persons .person-copy').each(function() {
        var $bio = $(this).children('.person-bio'),
          $bioMoreParagraphs = $bio.find(':not(:first-child)'),
          $readMoreButton = $bio.next(),
          $collapseButton = $readMoreButton.next();

          if ($bio.find(':not(:first-child)').length > 0) {
            $bioMoreParagraphs.addClass('is-hidden');

            $readMoreButton
              .addClass('is-visible')
              .on('click', function() {
                // Update both Mobile (one-col) and Tablet/Desktop (two-col) elements
                var selectedBioName = $readMoreButton.parent().parent().attr('class').split(' ')[1],
                  $bioElements = $('#main .view-persons .' + selectedBioName),
                  $readMoreButtons = $bioElements.find('.read-more-btn'),
                  $collapseButtons = $bioElements.find('.collapse-btn'),
                  $hiddenParagraphs = $bioElements.find('.person-copy .person-bio :not(:first-child)');

                $readMoreButtons.toggleClass('is-visible');
                $collapseButtons.toggleClass('is-visible');
                $hiddenParagraphs.toggleClass('is-hidden');
              });

            $collapseButton.on('click', function() {
              // Update both Mobile (one-col) and Tablet/Desktop (two-col) elements
              var selectedBioName = $readMoreButton.parent().parent().attr('class').split(' ')[1],
                $bioElements = $('#main .view-persons .' + selectedBioName),
                $readMoreButtons = $bioElements.find('.read-more-btn'),
                  $collapseButtons = $bioElements.find('.collapse-btn'),
                $hiddenParagraphs = $bioElements.find('.person-copy .person-bio :not(:first-child)');

              $readMoreButtons.toggleClass('is-visible');
              $collapseButtons.toggleClass('is-visible');
              $hiddenParagraphs.toggleClass('is-hidden');
            });
          }
      });
    } else if ($body.hasClass('page-news') || $body.hasClass('page-network-learning')) {
      var $moreContentBtn = $('#main .full-list');

      if ($moreContentBtn.length > 0) {
        $('#main .page-title').next().children().first().append($moreContentBtn);
      }
    }
  });

  // on 2 column layout page the information beside the image needs to be centered //
  $(document).ready(function() {
    var $window_width = $(window).width(); // grab window width
    if ($window_width > 1199) {
      var $margin = $('.group_info_row').height()/2;
      $('.group_info_row').css({'margin-top' : $margin});
    }
  });

})(jQuery);
