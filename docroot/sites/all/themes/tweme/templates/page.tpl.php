<?php

/**
 * @file
 * Custom theme implementation to display a single Drupal page.
 */

?>
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
    <div class="span6 offset3">
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
    <h2 class="page-title"><?php print $title; ?></h2>
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
      <div class="span4 footer-menu footer-links">
        <?php print render($page['footer']) ?>
      </div>
      <div class="span2">
        <?php print render($page['uber_bottom']) ?>
      </div>
      <div class="span3">
        <div class="donate pull-left">
          <a href="#"><?php print t('DONATE'); ?></a>
        </div>
        <a href="https://facebook.com/teachforall" target="_blank" class="social-media ico-twitter"></a>
        <a href="https://twitter.com/TeachForAll" target="_blank" class="social-media ico-facebook"></a>
        <a href="https://www.linkedin.com/company/teach-for-all" target="_blank" class="social-media ico-linkedin"></a>
        <a href="https://vimeo.com/teachforall" target="_blank" class="social-media ico-vimeo"></a>
        <div class="footer__copyright">
          <p><?php print t('Copyright &#169; 2013 TeachForAll, Inc. All rights reserved.'); ?></p>
        </div>
        <div class="footer__contact">
          <p>Teach For All<br /> 315 W.36th St.<br /> New York, NY<br /> 10018</p>
        </div>
      </div>
      <div class="span3 footer-links widget_supporters">
        <?php if (module_exists('widget_supporter')): ?>
          <?php $widget_supporter = widget_supporter_embed(); ?>
          <?php print render($widget_supporter); ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
</footer>
