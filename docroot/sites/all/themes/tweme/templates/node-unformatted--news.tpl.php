<div class="container">
  <h2 class="page-title">NEWS</h2>
  <div class="row-fluid">
    <div class="span9">
      <?php print render(views_embed_view('news','block_1')); //flexslider ?>
      <div class="row-fluid">
        <div class="span12">
          <?php print render(views_embed_view('news','page')); ?>
        </div>
      </div>
    </div>
    <div class="span3">
      <?php print render(views_embed_view('tfall_tweets','block')); //twitter block ?>
      <?php $widget_facebook = widget_facebook_embed_homepage() //facebook widget; ?>
      <?php print render($widget_facebook); ?>
    </div>
  </div>
  <div class="row-fluid">
    <div class="span12">
      <a href="/news/latest"><div class="full-list">More News <span class="orange2">>></span></div></a>
    </div>
  </div>
</div>
