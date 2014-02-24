<div class="container">
  <h2 class="page-title"><?php print t('PRESS'); ?></h2><?php print $feed_icons ?>
  <div class="row-fluid">
    <div class="span9">
      <?php print render(views_embed_view('press','block_1')); //flexslider ?>
      <div class="row-fluid">
        <div class="span12">
          <?php print render(views_embed_view('press','page')); ?>
        </div>
      </div>
    </div>
    <div class="span3 sidebar-right">
  	  <div class="constant-contact">
        <?php
        //including the file with the constant contact submit form block.
        include ($GLOBALS['theme_path']."/includes/templates/t4all_constant_contact_block.inc");
        ?>
      </div>
        <?php print render(views_embed_view('tfall_tweets','block')); //twitter block ?>
        <?php $widget_facebook = widget_facebook_embed_homepage() //facebook widget; ?>
        <?php print render($widget_facebook); ?>
    </div>
  </div>
  <a href="press/latest" class="full-list">More Press <span class="orange2">>></span></a>
</div>
<?php print $feed_icons ?>
