<?php

/**
 * @file
 * Custom theme implementation to display the basic html structure of a single
 * Drupal page.
 */

?>

<!DOCTYPE html>

<html lang="<?php print $language->language ?>" class="no-js">
  <head profile="<?php print $grddl_profile ?>">
    <meta http-equiv="X-UA-Compatible" content="IE=edge, chrome=1">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="pinterest" content="nopin" />
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
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-M8L63M"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-M8L63M');</script>
<!-- End Google Tag Manager -->
    <div id="fb-root"></div>
    <?php print $page_top ?>
    <?php print $page ?>
    <?php print $page_bottom ?>
  </body>
</html>
