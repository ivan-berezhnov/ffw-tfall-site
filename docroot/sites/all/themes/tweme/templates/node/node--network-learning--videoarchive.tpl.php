
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  			<div class="news__image news__video">
              <?php print render($content['field_embedded_video']); ?>
            </div>  
              <h3 class="news__title"><?php print $title; ?></h3>



  </div>
