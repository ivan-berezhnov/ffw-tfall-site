<?php

/**
 * @file
 * Custom theme implementation to display a single Drupal page.
 */

?>
<div class="container header">
  <div class="row-fluid">
    <div class="uber-nav pull-left">
      <?php print render($page['header']) ?>
    </div>
    <div class="pull-right">
      <div class="donate pull-left">
        <a href="#">DONATE</a>
      </div>
      <a href="https://facebook.com/teachforall" target="_blank" class="social-media icon-twitter"></a>
      <a href="https://twitter.com/TeachForAll" target="_blank" class="social-media icon-facebook"></a>
      <a href="https://www.linkedin.com/company/teach-for-all" target="_blank" class="social-media icon-linkedin"></a>
      <a href="https://vimeo.com/teachforall" target="_blank" class="social-media icon-vimeo2"></a>
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
      <?php if ($has_sidebar_first): ?>
      <!-- Sidebar first -->
      <aside id="sidebar-first" class="sidebar span3 hidden-phone">
        <?php print render($page['sidebar_first']) ?>
        <?php print render($page['sidebar_first_affix']) ?>
      </aside>
      <?php endif ?>
      <!-- Content -->
      <section id="content" class="span<?php print $content_cols ?>">
        <?php print render($page['content']) ?>
      </section>
      <?php if ($has_sidebar_second): ?>
      <!-- Sidebar second -->
      <aside id="sidebar-second" class="sidebar span3 hidden-phone">
        <?php print render($page['sidebar_second']) ?>
        <?php print render($page['sidebar_second_affix']) ?>
      </aside>
      <?php endif ?>
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
