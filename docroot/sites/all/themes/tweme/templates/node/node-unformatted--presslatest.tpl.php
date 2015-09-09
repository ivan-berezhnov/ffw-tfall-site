<div class="container">
  <h1 class="title" id="page-title"><?php print t('Latest Press'); ?></h1>
  <div class="row-fluid">
    <div class="span12">
      <div class="row-fluid">
        <div class="span9">
          <div class="row-fluid">
            <div class="span12">
              <?php $_render = views_embed_view('press','page_1'); print render($_render); //latest news ?>
            </div>
          </div>
        </div>
      <div class="span3 sidebar-right">
        <div class="constant-contact">
          <?php
          //including the file with the constant contact submit form block.
          include($GLOBALS['theme_path'] . "/includes/templates/t4all_constant_contact_block.inc");
          ?>
        </div>
        <?php $_render = views_embed_view('tfall_tweets', 'block'); print render($_render); //twitter block ?>
        <?php $widget_facebook = widget_facebook_embed_homepage() //facebook widget; ?>
        <?php print render($widget_facebook); ?>
      </div>

      </div>
    </div>
  </div>
</div>
