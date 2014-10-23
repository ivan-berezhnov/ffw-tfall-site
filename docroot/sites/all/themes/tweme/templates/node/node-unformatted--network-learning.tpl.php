<div class="container">
  <h2 class="page-title"><?php print t('NETWORK LEARNING'); ?></h2>
  <div class="row-fluid">
    <div class="span9">
      <?php
      $network_learning_block1 = views_embed_view('network_learning','block_1');
      print render($network_learning_block1); //flexslider ?>
      <div class="row-fluid">
        <div class="span12">
          <?php
          $network_learning_page = views_embed_view('network_learning','page');
          print render($network_learning_page); ?>
        </div>
      </div>
    </div>
    <div class="span3">
      <?php
      $tfall_tweets_block = views_embed_view('tfall_tweets','block');
      print render($tfall_tweets_block); //twitter block ?>
      <?php $widget_facebook = widget_facebook_embed_homepage() //facebook widget; ?>
      <?php print render($widget_facebook); ?>
    </div>
  </div>
  <a href="network-learning/latest" class="full-list"><?php print t('More Network Learnings '); ?><span class="orange2">>></span></a>
</div>
