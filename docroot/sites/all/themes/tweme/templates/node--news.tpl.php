
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content"<?php print $content_attributes; ?>>
    
		<div class="page-title">
      <h2 class="title"><?php print $title; ?></h2> <!--title is headline --> 
    </div>
		
	
			<?php if (isset($content['field_news_byline'])): ?>
				<div><?php print render($content['field_news_byline']); ?></div>
			<?php endif; ?>
			<?php if (isset($content['field_news_blurb'])): ?>
				<div><?php print render($content['field_news_blurb']); ?></div>
			<?php endif; ?>
			<?php if (isset($content['field_news_image'])): ?>
				<div><?php print render($content['field_news_image']); ?></div>
			<?php endif; ?>
		
			<?php if (isset($content['body'])): ?>
				<div><?php print render($content['body']); ?></div>
			<?php endif; ?>
		
				
			<?php print format_date($node->published_at, 'short'); ?> <!-- publish date --> 
					
  </div>
</div>
