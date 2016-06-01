<div class="container header">

  <nav class="effeckt-off-screen-nav" id="effeckt-off-screen-nav">

    <h4>
      Teach For All
      <a href="#0" id="effeckt-off-screen-nav-close" class="effeckt-off-screen-nav-close">×</a>
    </h4>

    <?php print render($page['main_navigation']); ?>
    <?php print render($page['header']); ?>

  </nav>

  <button class="off-screen-nav-button pull-left" data-effeckt-type="effeckt-off-screen-nav-left-push">
    <span class="icon-bar"></span>
    <span class="icon-bar"></span>
    <span class="icon-bar"></span>
  </button>

  <div class="row-fluid">

    <div class="uber-nav pull-left">
      <?php print render($page['header']); ?>
    </div>

    <div class="pull-right">
      <div class="donate-social-media-block">
        <div class="donate pull-left">
          <a href="<?php print t('@donate', array('@donate' => url('get-involved/donate'))); ?>"><?php print t('DONATE'); ?></a>
        </div>
        <a href="https://twitter.com/TeachForAll" target="_blank" class="social-media icon-twitter"></a>
        <a href="https://facebook.com/teachforall" target="_blank" class="social-media icon-facebook"></a>
        <a href="https://www.linkedin.com/company/teach-for-all" target="_blank" class="social-media icon-linkedin"></a>
        <a href="https://vimeo.com/teachforall" target="_blank" class="social-media icon-vimeo"></a>
  	    <a href="/news/feed" target="_blank" class="social-media icon-feed"></a>
      </div>
  	  <div class="language-switcher-block">
        <?php $block = module_invoke('locale', 'block_view', 'language'); print $block['content']; ?>
      </div>
    </div>
  </div>
  <div class="row-fluid site-name">
    <div class="span12">
      <a href="<?php print $front_page; ?>">
        <img src="/sites/all/themes/tweme/images/tfa-logo.png" alt="<?php print $site_name; ?>" />
      </a><!<?php //print $front_page; ?>!>
    </div>
  </div>
</div>

<!-- Navbar -->
<div id="navbar" class="navbar navbar-medium navbar-inverse navbar-static-top">
	<div class="navbar-inner">

		<div class="container">
			<nav role="navigation">
				<?php print render($page['main_navigation']) ?>
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
        <?php
          render($page['content']);
        ?>
			<section id="content" class="span<?php print $content_cols ?>">
				<div>
          <h1 class="site-slogan"><?php print $site_slogan; ?></h1>
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
<div id="mobileworldmap" class="worldmap__national-orgs">
  <!--<a class="btn__red" href="/our-network-and-impact/national-organizations" title="National Organizations"><?php print t('See All National Organizations'); ?></a>-->
  <!--<img src="<?php print drupal_get_path('theme', 'tweme') . '/images/mobile-homepage-map.jpg' ?>" alt="World Map of National Organizations" />-->
  <div class="button-center-div">
    <div class="fake-table">
      <div class="fake-table-cell">
        <a class="btn__red mobilemap" href="/our-network-and-impact/national-organizations" title="National Organizations"><?php print t('See All Network Partners'); ?></a>
      </div>
    </div>
  </div>
</div>


<!-- network learning -->
<div class="container-wrapper network-learning-front-block">
	<div class="container">
		<div class="row-fluid">
			<div class="span12">
<!--         <a href="<?php print t('@network-learning', array('@network-learning' => url('network-learning'))); ?>" class="network-learning-main"><?php print t('Network Learning'); ?></a> -->
        <?php print render($page['net_learning_front']) ?>
      </div>
		</div>
	</div>
</div>


<!-- feeds -->
<div id="feeds" class="container-wrapper">
	<div class="container">
		<div class="row-fluid">
			<div class="span9">
        <h3><?php print t('TWITTER'); ?></h3>
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
          <p><?php print t('Search the Site'); ?></p>
          <?php print $navbar_search ?>
        </div>
        <div class="footer__contact-us"><a href="/contact-us"><?php print t('Contact Us'); ?></a></div>
        <div class="footer__contact-us">
          <a href="/subscribe-to-newsletter"><?php print t('Subscribe to <br>our Newsletter'); ?></a>
<!--           <div class="constant-contact">
            <?php
            //including the file with the constant contact submit form block.
            // include ($directory."/includes/templates/t4all_constant_contact_block.inc");
            ?>
          </div> -->
        </div>
        <div class="footer__copyright">
          <p><?php print t('Copyright &#169; 2016<br /> TeachForAll, Inc.<br /> All rights reserved.'); ?></p>
        </div>
        <ul>
          <li><a class="privacy-policy" href="/privacy-policy"><?php print t('Privacy Policy'); ?></a></li>
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
