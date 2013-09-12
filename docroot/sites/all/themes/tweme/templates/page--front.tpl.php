<div class="container header">
  <div class="row-fluid">
    <div class="uber-nav pull-left hidden-phone">
			<?php print render($page['header']) ?>
    </div>
    <div class="pull-right">
      <div class="donate pull-left">
        <a href="#"><?php print t('DONATE'); ?></a>
      </div>
      <a href="https://facebook.com/teachforall" target="_blank" class="social-media ico-twitter"></a>
      <a href="https://twitter.com/TeachForAll" target="_blank" class="social-media ico-facebook"></a>
      <a href="https://www.linkedin.com/company/teach-for-all" target="_blank" class="social-media ico-linkedin"></a>
      <a href="https://vimeo.com/teachforall" target="_blank" class="social-media ico-vimeo"></a>
    </div>
  </div>
  <div class="row-fluid site-name">
    <div class="span12">
      <a href="/"><img src="/sites/all/themes/tweme/images/teach-for-all-logo@x2.png" srcset="/sites/all/themes/tweme/images/logo.png 1x, /sites/all/themes/tweme/images/logo.png 1.5x, /sites/all/themes/tweme/images/teach-for-all-logo@x2.png 2x"></a>
    </div>
  </div>
</div>

<!-- Navbar -->
<div id="navbar" class="navbar navbar-medium navbar-inverse navbar-static-top">
	<div class="navbar-inner">
		<div class="container">
			<?php print $navbar_toggler ?>
			<nav class="nav-collapse collapse" role="navigation">
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

<div class="container-wrapper marquee">
  <div class="container">
    <div class="row-fluid">
      <div class="span12">
        <div class="marquee__large">
          <div class="marquee__1" data-effeckt-type="cover-fade">
            <img src="/sites/all/themes/tweme/images/marquee_large.jpg" />
            <div class="marquee__hover">
              <div class="marquee__info-wrapper">
                <div class="marquee__category slug">Supporter Spotlight</div>
                <h2 class="marquee__title">Student Voice: Learning to be a Super Hero</h2>
                <div class="marquee__preview">The students of Nirali Vasisht (Teach For India)
                  talk about their vision and the skills they learn in the classroom.</div>
                <div class="marquee__link">Watch Video >></div>
              </div>
            </div>
          </div>
        </div>
        <div class="marquee__small hidden-phone">
          <div class="marquee__2">
            <img src="/sites/all/themes/tweme/images/marquee-small1.jpg" />
          </div>
          <div class="marquee__3">
            <img src="/sites/all/themes/tweme/images/marquee-small2.jpg" />
          </div>
        </div>
        <div class="marquee__medium hidden-phone">
          <div class="marquee__4">
            <img src="/sites/all/themes/tweme/images/marquee-vertical1.jpg" />
          </div>
        </div>
      </div>
    </div>
  </div>
</div>

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
					<h2 class="site-slogan"><?php print t('The Global Network for Expanding Educational Opportunity'); ?></h2>
				</div>
			</section>
		</div>
	</div>
</div>

<div id="worldmap" class="container-wrapper">
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

<!-- insights -->
<div id="insights" class="container-wrapper">
	<div class="container">
		<div class="row-fluid">
			<div class="span12">
        <h2><?php print t('Insights'); ?></h2>
				coming soon
      </div>
		</div>
	</div>
</div>


<!-- feeds -->
<div id="feeds" class="container-wrapper">
	<div class="container">
		<div class="row-fluid">
			<div class="span9">
        <h2><?php print t('Twitter'); ?></h2>
      </div>
			<div class="span3">
				<?php if (module_exists('widget_facebook')): ?>
          <?php $widget_facebook = widget_facebook_embed_homepage();
            print render($widget_facebook);
          ?>
				<?php endif; ?>
			</div>
		</div>
	</div>
</div>

<!-- Footer -->
<footer id="footer" class="container-wrapper">
  <div class="container">
    <div class="row-fluid">
      <div class="span9 footer-menu footer-links">
        <?php print render($page['footer']) ?>
      </div>
      <div class="span3 footer-links widget_supporters">
				<?php if (module_exists('widget_supporter')): ?>
          <?php $supporter = widget_supporter_embed();
            print render($supporter);
          ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
</footer>
