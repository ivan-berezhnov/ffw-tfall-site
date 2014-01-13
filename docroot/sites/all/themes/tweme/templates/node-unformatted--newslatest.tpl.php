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
		<?php print $feed_icons ?>
        <div class="span3">
		  <div class="h2"><a href="http://visitor.r20.constantcontact.com/d.jsp?llr=vzkgftcab&p=oi&m=1102302096181&sit=hvovzjvdb&f=895e9d0b-40b4-4a78-a191-e132c5636555" target="_blank"> Subscribe to our newsletter</a></div>
          <?php print render(views_embed_view('tfall_tweets','block')); //tweeter block ?>
          <?php $widget_facebook = widget_facebook_embed_homepage() //facebook widget; ?>
          <?php print render($widget_facebook); ?>
        </div>
      </div>
    </div>
  </div>
</div>
