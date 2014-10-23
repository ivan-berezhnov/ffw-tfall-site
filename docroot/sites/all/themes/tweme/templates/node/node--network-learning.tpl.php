<div class="container">
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="content"<?php print $content_attributes; ?>>
      <h2 class="page-title date"><?php print render($content['field_network_learning_tags']); ?></h2>
      <div class="row-fluid">
        <div class="span9">
		
		          <div class="slug">
                <span class="news__category"><?php print format_date($node->created, 'short'); ?></span>
          </div>

          <h1 class="news__title"><?php print $title; ?></h1>

		  <div class="news__byline">
            <?php if (isset($content['field_author'])): ?>
              <h3><?php print render($content['field_author']); ?></h3>
            <?php endif; ?>
          </div>

          <?php if (isset($content['field_embedded_video'])): ?>
            <div class="news__image news__video">
              <?php print render($content['field_embedded_video']); ?>
            </div>
          <?php else: ?>
            <div class="news__image">
              <?php if (isset($content['field_network_learning_image'])): ?>
                <?php print render($content['field_network_learning_image']); ?>
                <div class="news__image-caption">
                  <?php print render($content['field_network_learning_image']['#items'][0]['title']); ?>
                </div>
              <?php endif; ?>
            </div>
          <?php endif; ?>



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

          <div class="row-fluid">
            <div class="span12">
              <?php if (!empty($content['comments'])): ?>
              <?php print render($content['comments']); ?>
              <?php endif; ?>
            </div>
          </div>
          <div class="row-fluid news__node-links">
            <div class="span12">
              <?php
                if (isset($content['sharethis'])) {
                  print render($content['sharethis']);
                }
              ?>
              <a href="network-learning/latest">
                <div class="full-list"><?php print t('Network Learning Archive'); ?> <span class="orange2">>></span></div>
              </a>
            </div>
          </div>
        </div>
        <div class="span3">
          <?php print render(views_embed_view('tfall_tweets','block')); ?>
          <?php if (module_exists('widget_facebook')): ?>
            <?php $widget_facebook = widget_facebook_embed_homepage() ;?>
            <?php print render($widget_facebook); ?>
          <?php endif; ?>
        </div>
      </div>
    </div>
  </div>
</div>

