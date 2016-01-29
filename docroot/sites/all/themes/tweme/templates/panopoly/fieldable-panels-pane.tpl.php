<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($title_suffix); ?>
  <?php print render($content['field_basic_text_text']); ?>
  <?php

  if (isset($field_video_file)) {
    $filemime = $field_video_file['0']['filemime'];
    if ($filemime == 'video/youtube' || $filemime == 'video/vimeo') {
      if (isset ($field_video_pane_thumbnail)){
      print create_video_file_template($field_video_file, $field_video_pane_thumbnail);
      }
    }
  }    
  ?>
</div>

<?php if (isset($content['field_caption'])): ?>
  <div class="caption">
   <?php print render($content['field_caption']); ?>
    </div>
<?php endif; ?>



