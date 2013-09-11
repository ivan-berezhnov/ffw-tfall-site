
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content"<?php print $content_attributes; ?>>

  	<div class="row-fluid">
  	  <div class="span9">

		    <h1 class="news__title"><?php print $title; ?></h1>

		    <div class="news__byline">
					<?php if (isset($content['field_news_byline'])): ?>
						<h3><?php print render($content['field_news_byline']); ?></h3>
					<?php endif; ?>
				</div>

				<div class="news__date">
					<?php print format_date($node->published_at, 'short'); ?> | <?php print render($content['field_category']); ?>
				</div>

				<div class="news__image">
					<?php if (isset($content['field_news_image'])): ?>
						<?php print render($content['field_news_image']); ?>
					<?php endif; ?>
				</div>

				<div class="news__content">
					<?php if (isset($content['body'])): ?>
						<div><?php print render($content['body']); ?></div>
					<?php endif; ?>
				</div>

				<div class="row-fluid">
				  <div class="span12">
				  	<a href="/">
							<div class="full-list"><?php print t('More Recent News'); ?> <span class="orange2">>></span></div>
						</a>
				  </div>
				</div>

  	  </div>

  	  <div class="span3">
  	  	<?php print render($page['sidebar_second']) ?>
  	  	<div class="twitter__sidebar">Todo: Twitter</div>
  	  	<div class="facebook__sidebar hidden-tablet">
  	  		<?php if (module_exists('widget_facebook')): ?>
						<?php print render(widget_facebook_embed_homepage()); ?>
					<?php endif; ?>
  	  	</div>
  	  </div>
  	</div>



  </div>
</div>
