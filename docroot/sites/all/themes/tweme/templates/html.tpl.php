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
    <?php print $head ?>
    <title><?php print $head_title ?></title>
    <?php print $styles ?>
    <!--[if lte IE 8]>
    <link rel="stylesheet" type="text/css" href="/sites/all/themes/tweme/stylesheets/ie8.css">
    <![endif]-->
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
