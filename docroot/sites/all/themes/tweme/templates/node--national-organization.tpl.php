<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>


  <div class="content"<?php print $content_attributes; ?>>
    <?php
			print $title;
			
			print render($content['field_no_logo']);
			print render($content['field_no_image']);
			print render($content['field_blurb']);
			print render($content['field_links']);
			print render($content['field_no_image_map']);
			print render($content['field_no_image_static']);
			print render($content['field_ceo_profile']);
			print render($content['field_program_snapshot']);
			print render($content['field_local_context_info']);			
    ?>
  </div>

 
</div>
