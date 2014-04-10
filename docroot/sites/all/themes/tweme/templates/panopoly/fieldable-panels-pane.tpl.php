<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($title_suffix); ?>

  <?php

  if(isset($field_video_file)):
    $wrapper = file_stream_wrapper_get_instance_by_uri($field_video_file['0']['uri']);
    $parts = $wrapper->get_parameters();
    $video_id = check_plain($parts['v']);
  ?>
      <?php
        if(isset($field_video_pane_thumbnail)):
          $uri = 'sites/default/files/'.$field_video_pane_thumbnail['0']['filename'];
      ?>
          <a href=http://www.youtube.com/watch?v=<?php print $video_id ?>?html5=1><img src=<?php print $uri ?> /></a>
      <?php
        else:
      ?>

      <a href=http://www.youtube.com/watch?v=<?php print $video_id ?>><img src=http://img.youtube.com/vi/<?php print $video_id ?>/maxresdefault.jpg /></a>
      <?php
      endif;
      ?>

  <?php
    else:
      print $fields;
    endif;
  ?>
</div>
