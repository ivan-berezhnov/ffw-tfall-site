<span>
	<a href="<?php print drupal_get_path_alias('node/' . $node->nid); ?>">
		<?php print render($content['field_spotlight_image']); ?>
		<?php print $title; ?>
	</a>
</span>