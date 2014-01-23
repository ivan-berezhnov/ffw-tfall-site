<div class="container">
  <h2 class="page-title"><?php print t('NETWORK LEARNING'); ?></h2>
  <div class="row-fluid">
    <div class="span9">
      <?php print render(views_embed_view('network_learning','block_1')); //flexslider ?>
      <div class="row-fluid">
        <div class="span12">
          <?php print render(views_embed_view('network_learning','page')); ?>
        </div>
      </div>
    </div>
    <div class="span3">
      <?php print render(views_embed_view('tfall_tweets','block')); //twitter block ?>
      <?php $widget_facebook = widget_facebook_embed_homepage() //facebook widget; ?>
      <?php print render($widget_facebook); ?>
    </div>
  </div>
  <a href="/network-learning/latest" class="full-list">More Network Learnings <span class="orange2">>></span></a>
</div>
