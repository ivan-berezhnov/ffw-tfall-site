<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content"<?php print $content_attributes; ?>>

		<div><?php print $title; ?></div>

		<?php if (isset($content['field_news_byline'])): ?>
			<div><?php print render($content['field_news_byline']); ?></div>
		<?php endif; ?>

		<a href="<?php print drupal_get_path_alias('node/' . $node->nid); ?>">read more...</a> <!-- link to news --> 
		<div>
			<?php print format_date($node->created, 'short'); ?> <!-- publish date -->
		</div>
<?php print $feed_icons ?>
  </div>
</div>
