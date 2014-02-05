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
      <div class="span3 sidebar-right">
        <div class="constant-contact">
          <?php
          //including the file with the constant contact submit form block.
          include($GLOBALS['theme_path'] . "/includes/templates/t4all_constant_contact_block.inc");
          ?>
        </div>
        <?php print render(views_embed_view('tfall_tweets', 'block')); //twitter block ?>
        <?php $widget_facebook = widget_facebook_embed_homepage() //facebook widget; ?>
        <?php print render($widget_facebook); ?>
      </div>

      </div>
    </div>
  </div>
</div>
