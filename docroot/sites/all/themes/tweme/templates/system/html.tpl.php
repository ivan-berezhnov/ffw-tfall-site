<?php

/**
 * @file
 * Custom theme implementation to display the basic html structure of a single
 * Drupal page.
 */

?>

<!DOCTYPE html>

<!--[if lte IE 8]><html lang="<?php print $language->language ?>" class="no-js lte-ie8"><![endif]-->
<!--[if gt IE 8]><!--><html lang="<?php print $language->language ?>" class="no-js"><!--<![endif]-->
  <head profile="<?php print $grddl_profile ?>">
    <meta http-equiv="X-UA-Compatible" content="IE=edge, chrome=1">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <script type="text/javascript">
 
var _gaq = _gaq || [];
_gaq.push(["_setAccount", "UA-22561801-1"]);
_gaq.push(['_setDomainName', 'teachforall.org']);
_gaq.push(['_setAllowLinker', true]);
_gaq.push(["_trackPageview"]);
 
(function() {
        var ga = document.createElement("script"); ga.type = "text/javascript"; ga.async = true;
        ga.src = ("https:" == document.location.protocol ? "https://ssl" : "http://www") + ".google-analytics.com/ga.js";
       var s = document.getElementsByTagName("script")[0];s.parentNode.insertBefore(ga, s);
})();
 
</script>

    <?php print $head ?>
    <title><?php print $head_title ?></title>
    <?php print $styles ?>
    <!--[if lte IE 8]>
    <link rel="stylesheet" type="text/css" href="/sites/all/themes/tweme/stylesheets/ie8.css">
    <![endif]-->
    <link rel="stylesheet" href="http://fonts.typotheque.com/WF-021707-002785.css" type="text/css" />
    <?php print $scripts ?>
    <?php print $head_bottom ?>
  </head>
  <body class="<?php print $classes ?>"<?php print $attributes ?>>
		<div id="fb-root"></div>
    <?php print $page_top ?>
    <?php print $page ?>
    <?php print $page_bottom ?>
  </body>
</html>
