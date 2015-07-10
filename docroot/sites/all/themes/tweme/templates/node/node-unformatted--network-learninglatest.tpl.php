<div class="container">
  <h1 class="title" id="page-title"><?php print t('Latest Network Learnings'); ?></h1>
  <div class="row-fluid">
    <div class="span12">
      <div class="row-fluid">
        <div class="span9">
          <div class="row-fluid">
            <div class="span12">
              <?php print render(views_embed_view('network_learning','page_1')); //latest news ?>
            </div>
          </div>
        </div>
        <div class="span3">
          <?php print render(views_embed_view('tfall_tweets','block')); //tweeter block ?>
          <?php $widget_facebook = widget_facebook_embed_homepage() //facebook widget; ?>
          <?php print render($widget_facebook); ?>
        </div>
      </div>
    </div>
  </div>
</div>
