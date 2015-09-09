<h1 class="title" id="page-title"><?php print t('Press'); ?></h1>
<div class="span3 press-sidebar">
  <div class="row-fluid">
    <div>
      <?php $_render = views_embed_view('press','block_1'); print render($_render); //flexslider ?>
      <div class="row-fluid">
        <div>
          <?php $_render = views_embed_view('press','page'); print render($_render); ?>
        </div>
      </div>
    </div>
    <div>
      <div class="stats">
        <?php print t('Subscribe to our Newsletter'); ?>
      </div>
    </div>
    <div>
  	  <div class="constant-contact">
        <?php
          //including the file with the constant contact submit form block.
          include ($GLOBALS['theme_path']."/includes/templates/t4all_constant_contact_block.inc");
        ?>
      </div>
        <?php $_render = views_embed_view('tfall_tweets','block'); print render($_render); //twitter block ?>
        <?php $widget_facebook = widget_facebook_embed_homepage() //facebook widget; ?>
        <?php print render($widget_facebook); ?>
    </div>
    <a href="press/latest" class="full-list"><?php print t('More Press '); ?><span class="orange2">>></span></a>
  </div>
</div>
