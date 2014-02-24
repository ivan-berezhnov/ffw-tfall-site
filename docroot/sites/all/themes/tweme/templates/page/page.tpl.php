<?php
/**
 * @file
 * Custom theme implementation to display a single Drupal page.
 */

//including the file with the functionality to refresh the custom nodes created in the misc.module misc_menu function.
include ($directory."/includes/templates/t4all_custom_node_refresh.inc");

?>
<div class="container header">

  <div class="navbar navbar-medium navbar-inverse navbar-static-top visible-phone">
    <div class="sidr-toggle">
      <?php print $navbar_toggler ?>
    </div>
  </div>

  <div class="row-fluid">
    <div class="uber-nav pull-left hidden-phone">
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
    <div class="span6 offset3">
      <a href="/"><img src="/sites/all/themes/tweme/images/tfa-logo@x2.png" srcset="/sites/all/themes/tweme/images/tfa-logo.png 1x, /sites/all/themes/tweme/images/tfa-logo.png 1.5x, /sites/all/themes/tweme/images/tfa-logo@x2.png 2x"></a>
    </div>
  </div>
</div>

<!-- Navbar -->
<div id="navbar" class="navbar navbar-medium navbar-inverse navbar-static-top">
	<div class="navbar-inner">

		<div class="container">
			<nav role="navigation">
        <?php print render($page['main_navigation']) ?>
        <div class="visible-phone">
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
  </div>
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
        <?php
        $current_path = request_path();
        $path_snippets = explode('/', $current_path);
        $path_portion_to_check = $path_snippets[0];
        $does_path_begin_with_user = $path_portion_to_check == 'user' || $path_portion_to_check == 'users';

        if($does_path_begin_with_user){
            print('<div class="container">');
            print render($page['content']);
            print('</div>');
        }else{
            print render($page['content']);
        }

        ?>

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
          <div class="constant-contact">
            <?php
            //including the file with the constant contact submit form block.
            include ($directory."/includes/templates/t4all_constant_contact_block.inc");
            ?>
          </div>
        </div>
        <div class="footer__copyright">
          <p><?php print t('Copyright &#169; 2014<br /> TeachForAll, Inc.<br /> All rights reserved.'); ?></p>
        </div>
        <ul>
          <li><a class="privacy-policy" href="/privacy-policy">Privacy Policy</a></li>
        </ul>
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
