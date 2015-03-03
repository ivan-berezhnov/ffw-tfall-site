<?php
  hide($content);
?>
  
<span id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>">
<span class="opinion-author-image">
<?php print theme('image_style', array('style_name' => $content['field_tfa_opinion_image'][0]['#image_style'] , 'path' => $content['field_tfa_opinion_image'][0]['#item']['uri'])); ?>
</span>
<span class="opinion-author-info">
<?php print render($content['field_tfa_opinion_author']); ?>
</span>
<span>
<?php print render($content['field_tfa_opinion_job_title']); ?>
</span>
</span>