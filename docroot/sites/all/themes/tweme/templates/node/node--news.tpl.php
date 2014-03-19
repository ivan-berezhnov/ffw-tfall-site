<div class="container">
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <div class="content"<?php print $content_attributes; ?>>
      <h2 class="page-title date">NEWS</h2>

    	<div class="row-fluid">
    	  <div class="span9">
          <div class="slug">
          <div class="news__category"><?php print format_date($node->created, 'short'); ?></div>
        </div>
  		    <h1 class="news__title"><?php print $title; ?></h1>

  		    <div class="news__byline">
  					<?php if (isset($content['field_author'])): ?>
  						<h3><?php print render($content['field_author']); ?></h3>
  					<?php endif; ?>
  				</div>

  				<div class="news__date">
  					<div class="news__author-date">
              <?php if (isset($content['field_category'])): ?>
                <span class="news__category"><?php print render($content['field_category']); ?></span>
              <?php endif; ?>
            </div>
  				</div>

          <?php if (isset($content['field_embedded_video'])): ?>
            <div class="news__image news__video">
              <?php print render($content['field_embedded_video']); ?>
            </div>
          <?php else: ?>
          <div class="news__image">
            <?php print render($content['field_news_image']); ?>
            <div class="news__image-caption">
              <?php print render($content['field_news_image']['#items'][0]['title']); ?>
            </div>
            <div class="news__byline">
              <h3><?php print render($content['field_image_credit']); ?></h3>
            </div>
          </div>
          <?php endif; ?>

          <!--<div class="news__byline">
            <?php if (isset($content['field_image_credit'])): ?>
              <h3><?php print t('Image Credit:'); ?>
              <?php print render($content['field_image_credit']); ?></h3>
            <?php endif; ?>
          </div> -->

  				<div class="news__content">
            <?php if (isset($content['field_embedded_video'])): ?>
              <div class="news__video-caption">
                <?php print render($content['field_embedded_video']['#items'][0]['description']); ?>
              </div>
            <?php endif; ?>
  					<?php if (isset($content['body'])): ?>
  						<?php print render($content['body']); ?>
  					<?php endif; ?>
  				</div>

  				<div class="row-fluid news__node-links">
  				  <div class="span12">
              <?php
                if (isset($content['sharethis'])) {
                  print render($content['sharethis']);
                }
              ?>
            <a href="/news/latest">
	            <div class="full-list"><?php print t('More Recent News'); ?> <span class="orange2">>></span></div>
            </a>
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
          <?php print render(views_embed_view('tfall_tweets','block')); //twitter block ?>
          <?php $widget_facebook = widget_facebook_embed_homepage() //facebook widget; ?>
          <?php print render($widget_facebook); ?>
        </div>
    	</div>

    </div>
  </div>
<?php print $feed_icons ?>
</div> <!-- container end -->
