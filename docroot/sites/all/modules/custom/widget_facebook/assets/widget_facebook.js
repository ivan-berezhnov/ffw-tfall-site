//generated with https://developers.facebook.com/docs/reference/plugins/like-box/

(function ($) {
	Drupal.behaviors.widget_facebook = {
	  attach: function (context, settings) {

			(function(d, s, id) {
				var js, fjs = d.getElementsByTagName(s)[0];
				if (d.getElementById(id))
					return;
				js = d.createElement(s);
				js.id = id;
				js.src = "//connect.facebook.net/en_GB/all.js#xfbml=1";
				fjs.parentNode.insertBefore(js, fjs);
			}(document, 'script', 'facebook-jssdk'));

	  }
	};
}(jQuery));