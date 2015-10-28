<div class="container">
  <h1 class="title" id="page-title"><?php print t('News'); ?></h1>
  <div class="row-fluid">
    <div class="span9">
      <?php $_render = views_embed_view('news','block_1'); print render($_render); //flexslider ?>
      <div class="row-fluid">
        <div class="span12">
          <?php $_render = views_embed_view('news','page'); print render($_render); ?>
        </div>
      </div>
    </div>
    <div class="span3">
      <div class="stats">
        <?php print t('Subscribe to our Newsletter'); ?>
      </div>
    </div>
    <div class="span3 sidebar-right">
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
  </div>
  <?php
    global $language;
    if ($language->language == 'es') {
      print '<a href="/es/noticias/recientes?page=1" class="full-list">' . t('More News ') . '<span class="orange2">>></span></a>';
    }
    else {
      print '<a href="/en/news/latest/?page=1" class="full-list">' . t('More News ') . '<span class="orange2">>></span></a>';
    }
  ?>
</div>
