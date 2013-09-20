
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content"<?php print $content_attributes; ?>>

    <h2 class="page-title date"><?php print format_date($node->published_at, 'short'); ?></h2>

  	<div class="row-fluid">
  	  <div class="span12">

		    <h1 class="news__title"><?php print $title; ?></h1>

		    <div class="news__byline">
					<?php if (isset($content['field_news_byline'])): ?>
						<h3><?php print render($content['field_news_byline']); ?></h3>
					<?php endif; ?>
				</div>

				<div class="news__date">
					<div class="news__author-date">by <?php print $name; ?>
            <?php if (isset($content['field_category'])): ?>
             | <span class="news__category"><?php print render($content['field_category']); ?></span>
            <?php endif; ?>
          </div>
				</div>

				<div class="news__image">
					<?php if (isset($content['field_news_image'])): ?>
						<?php print render($content['field_news_image']); ?>
            <div class="news__image-caption">
              <?php print render($content['field_news_image']['#items'][0]['title']); ?>
            </div>
					<?php endif; ?>
				</div>

				<div class="news__content">
					<?php if (isset($content['body'])): ?>
						<?php print render($content['body']); ?>
					<?php endif; ?>
				</div>

				<div class="row-fluid news__node-links">
				  <div class="span12">
				  	<a href="/news/latest">
							<div class="full-list"><?php print t('More Recent News'); ?> <span class="orange2">>></span></div>
						</a>
				  </div>
				</div>

  	  </div>
  	</div>

  </div>
</div>
