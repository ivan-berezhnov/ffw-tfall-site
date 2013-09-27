<div class="container">
  <h2 class="page-title">Latest News</h2>
  <div class="row-fluid">
    <div class="span12">
      <div class="row-fluid">
        <div class="span9">
          <div class="row-fluid">
            <div class="span12">
              <?php print render(views_embed_view('news','page_1')); //latest news ?>
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
