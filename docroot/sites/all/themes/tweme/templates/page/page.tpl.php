<?php
/**
 * @file
 * Custom theme implementation to display a single Drupal page.
 */

//including the file with the functionality to refresh the custom nodes created in the misc.module misc_menu function.
include ($directory."/includes/templates/t4all_custom_node_refresh.inc");

?>
<div class="container header">

  <nav class="effeckt-off-screen-nav" id="effeckt-off-screen-nav">

    <h4>
      <?php print t('Teach For All'); ?>
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

    <div class="uber-nav pull-left hidden-phone">
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
    <div class="span6 offset3">
      <a href="<?php print $front_page; ?>"><img src="/sites/all/themes/tweme/images/prod/tfa-logo@x2.png" srcset="/sites/all/themes/tweme/images/prod/tfa-logo.png 1x, /sites/all/themes/tweme/images/prod/tfa-logo.png 1.5x, /sites/all/themes/tweme/images/prod/tfa-logo@x2.png 2x"></a>
    </div>
  </div>
</div>

<!-- Navbar -->
<div id="navbar" class="navbar navbar-medium navbar-inverse navbar-static-top">
	<div class="navbar-inner">

		<div class="container">
			<nav role="navigation">
        <?php print render($page['main_navigation']); ?>
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

      <!-- Page Title H1 -->
      <?php if (!isset($node->type) || ($node->type != 'news' && $node->type != 'network_learning')): ?>
        <?php if ($title): ?>
          <div class="region-title">
            <?php print render($title_prefix); ?>
            <h1 class="title" id="page-title"><?php print $title; ?></h1>
            <?php print render($title_suffix); ?>
          </div>
        <?php endif; ?>
      <?php endif; ?>

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
          <p><?php print t('Search the Site'); ?></p>
          <?php print $navbar_search ?>
        </div>
        <div class="footer__contact-us"><a href="/contact-us"><?php print t('Contact Us'); ?></a></div>
        <div class="footer__contact-us">
          <p><?php print t('Subscribe to our Newsletter'); ?></p>
          <div class="constant-contact">
            <?php
            //including the file with the constant contact submit form block.
            include ($directory."/includes/templates/t4all_constant_contact_block.inc");
            ?>
          </div>
        </div>
        <div class="footer__copyright">
          <p><?php print t('Copyright &#169; 2015<br /> TeachForAll, Inc.<br /> All rights reserved.'); ?></p>
        </div>
        <ul>
          <li><a class="privacy-policy" href="/privacy-policy"><?php print t('Privacy Policy'); ?></a></li>
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
