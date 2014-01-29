<div class="container header">
  <div class="row-fluid">
    <div class="uber-nav pull-left visible-desktop">
			<?php print render($page['header']) ?>
    </div>
    <div class="pull-right">
      <div class="donate pull-left">
        <a href="/get-involved/donate"><?php print t('DONATE'); ?></a>
      </div>
      <a href="https://twitter.com/TeachForAll" target="_blank" class="social-media icon-twitter"></a>
      <a href="https://facebook.com/teachforall" target="_blank" class="social-media icon-facebook"></a>
      <a href="https://www.linkedin.com/company/teach-for-all" target="_blank" class="social-media icon-linkedin"></a>
      <a href="https://vimeo.com/teachforall" target="_blank" class="social-media icon-vimeo"></a>
	  <a href="/news/feed" target="_blank" class="social-media icon-feed"></a>
    </div>
  </div>
  <div class="row-fluid site-name">
    <div class="span12">
      <a href="/"><img src="/sites/all/themes/tweme/images/tfa-logo@x2.png" srcset="/sites/all/themes/tweme/images/tfa-logo.png 1x, /sites/all/themes/tweme/images/tfa-logo.png 1.5x, /sites/all/themes/tweme/images/tfa-logo@x2.png 2x"></a>
    </div>
  </div>
</div>

<!-- Navbar -->
<div id="navbar" class="navbar navbar-medium navbar-inverse navbar-static-top">
	<div class="navbar-inner">
    <div class="sidr-toggle">
      <?php print $navbar_toggler ?>
    </div>

		<div class="container">
			<nav role="navigation">
				<?php print render($page['main_navigation']) ?>
        <div class="hidden-desktop">
          <?php print render($page['header']['menu_menu-uber-nav']); ?>
        </div>
      </nav>
		</div>
	</div>
</div>

<?php if ($page['featured']): ?>
	<!-- Featured -->
	<div id="featured" class="container-wrapper hidden-phone">
	  <div class="container">
			<?php print render($page['featured']) ?>
	  </div>
	</div>
<?php endif ?>

<!-- front page marquee block -->
<?php print render($page['marquee']) ?>

<?php if ($preface): ?>
	<!-- Header -->
	<header id="header" class="container-wrapper">
	  <div class="container">
			<?php print $preface ?>
	  </div>
	</header>
<?php endif ?>

<!-- Main -->
<div id="main">
	<div class="container">
		<?php print $messages ?>
		<div class="row row-toggle">
			<!-- Content -->
			<section id="content" class="span<?php print $content_cols ?>">
				<div>
          <h2 class="site-slogan"><?php print $site_slogan; ?></h2>
				</div>
			</section>
		</div>
	</div>
</div>

<div id="worldmap" class="container-wrapper worldmap__national-orgs">
  <div class="container">
    <!-- world map -->
    <div class="row-fluid">
      <div class="span12">
        <?php if (module_exists('widget_map')): ?>
          <?php $widget_map = widget_map_embed();
            print render($widget_map);
          ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
</div>

<!-- network learning -->
<div class="container-wrapper network-learning-front-block">
	<div class="container">
		<div class="row-fluid">
			<div class="span12">
        <a href="network-learning" class="network-learning-main"><?php print t('Network Learning'); ?></a>
        <?php print $network_learning_block; //front block ?>
      </div>
		</div>
	</div>
</div>


<!-- feeds -->
<div id="feeds" class="container-wrapper">
	<div class="container">
		<div class="row-fluid">
			<div class="span9">
        <h3>TWITTER</h3>
        <?php print render($page['twitter_front']); ?>
      </div>
			<div class="span3 facebook">
				<?php if (module_exists('widget_facebook')): ?>
          <?php $widget_facebook = widget_facebook_embed_homepage() ;?>
          <?php print render($widget_facebook); ?>
        <?php endif; ?>
			</div>
		</div>
	</div>
</div>

<!-- Footer -->
<footer id="footer" class="container-wrapper">
  <div class="container">
    <div class="row-fluid">
      <div class="span2 footer-menu footer-links">
        <?php print render($page['footer']) ?>
      </div>
      <div class="span2 footer-menu footer-links-2">
        <?php print render($page['footer']) ?>
      </div>
      <div class="span2">
        <?php print render($page['uber_bottom']) ?>
      </div>
      <div class="span3">
        <div class="donate pull-left">
          <a href="/get-involved/donate"><?php print t('DONATE'); ?></a>
        </div>
        <a href="https://twitter.com/TeachForAll" target="_blank" class="social-media icon-twitter"></a>
        <a href="https://facebook.com/teachforall" target="_blank" class="social-media icon-facebook"></a>
        <a href="https://www.linkedin.com/company/teach-for-all" target="_blank" class="social-media icon-linkedin"></a>
        <a href="https://vimeo.com/teachforall" target="_blank" class="social-media icon-vimeo"></a>
		<a href="/news/feed" target="_blank" class="social-media icon-feed"></a>
        <div class="footer__search">
          <p>Search the Site</p>
          <?php print $navbar_search ?>
        </div>
        <div class="footer__contact-us"><a href="/contact-us">Contact Us</a></div>
        <div class="footer__contact-us">
          <?php
          //including the file with the constant contact submit form block.
          include ($directory."/includes/templates/t4all_constant_contact_block.inc");
          ?>
        </div>
        <div class="footer__copyright">
          <p><?php print t('Copyright &#169; 2013<br />  TeachForAll, Inc.<br /> All rights reserved.'); ?></p>
        </div>
        <ul>
          <li><a class="privacy-policy" href="/privacy-policy">Privacy Policy</a></li>
        </ul>
      </div>
      <div class="span3 footer-links widget_supporters">
				<?php if (module_exists('widget_supporter')): ?>
          <?php $widget_supporter = widget_supporter_embed(); ?>
          <?php print $widget_supporter; ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
</footer>
