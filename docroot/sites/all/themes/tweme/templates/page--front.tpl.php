<div class="container header">
  <div class="row-fluid">
    <div class="uber-nav pull-left">
			<?php print render($page['header']) ?>
    </div>
    <div class="pull-right">
      <a class="donate" href="/donate">DONATE</a>
      <a class="social-media icon-twitter-sign"></a>
      <a class="social-media icon-facebook-sign"></a>
    </div>
  </div>
  <div class="row-fluid site-name">
    <div class="span12">
      <a href="/"><img src="/sites/all/themes/tweme/images/logo.png" /></a>
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


				<div style="border:2px red solid;padding:5px">
					todo:carousel
				</div>
				<br />
				<div class="page-title">
					<h2>The Global Network for Expanding Educational Opportunity</h2>
				</div>
				<div style="border:2px red solid;padding:5px">
					todo:insights
				</div>
				<br />

				<div class="row">
					<div class="span9">twitter feeds</div>
					<div class="span3">
						<?php if (module_exists('widget_facebook')): ?>
							<?php print render(widget_facebook_embed_homepage()); ?>
						<?php endif; ?>
					</div>
					
				</div>
				
      </section>
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
					<?php print render(widget_supporter_embed()); ?>
				<?php endif; ?>
      </div>
    </div>
  </div>
</footer>
