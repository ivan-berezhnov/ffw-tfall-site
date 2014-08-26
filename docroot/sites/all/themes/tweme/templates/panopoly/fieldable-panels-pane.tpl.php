<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($title_suffix); ?>

  <?php

  if (isset($field_video_file)) {
    $filemime = $field_video_file['0']['filemime'];
    if ($filemime == 'video/youtube' || $filemime == 'video/vimeo') {
      if (isset ($field_video_pane_thumbnail)){
      print create_video_file_template($field_video_file, $field_video_pane_thumbnail);
      }
      else{
        print create_video_file_template($field_video_file);

      }
    } else {
      print $fields;
    }
  } else {
    print $fields;
  }
  ?>
</div>

<?php if (isset($content['field_caption'])): ?>
  <div class="caption">
   <?php print render($content['field_caption']); ?>
    </div>
<?php endif; ?>

<?php

//check to see if the field is a video file

/**
 * @param $field_video_file
 * @param $field_video_pane_thumbnail
 * @return null|string $video_link
 */
function create_video_file_template($field_video_file, $field_video_pane_thumbnail = NULL)
{
  $wrapper = file_stream_wrapper_get_instance_by_uri($field_video_file['0']['uri']);
  $parts = $wrapper->get_parameters();
  $video_id = check_plain($parts['v']);
  $video_link = NULL;
  $baseurl = $GLOBALS['base_url'];

  if ($field_video_file['0']['filemime'] == 'video/youtube') {
    if (isset($field_video_pane_thumbnail)) {
      $image_uri = $baseurl .'/sites/default/files/' . $field_video_pane_thumbnail['0']['filename'];
      $video_link = create_youtube_link($video_id, $image_uri);
    } else {
      $video_link = create_youtube_link($video_id);
    }

  } elseif ($field_video_file['0']['filemime'] == 'video/vimeo') {
    if (isset($field_video_pane_thumbnail)) {
      $image_uri = $baseurl . '/sites/default/files/' . $field_video_pane_thumbnail['0']['filename'];
      $video_link = create_vimeo_link($video_id, $image_uri);
    } else {
      $video_link = create_vimeo_link($video_id);
    }
  }
  return $video_link;
}

/**
 * @param $video_id
 * @param null $image_uri
 * @return string
 */

function create_youtube_link($video_id, $image_uri = NULL)
{
  $image_link = NULL;
  if ($image_uri) {
    $image_link = $image_uri;
  } else {
    $image_link = 'http://img.youtube.com/vi/' . $video_id . '/hqdefault.jpg';
  }
  $link = '<a class="shadowboxvideo" rel="" href=http://www.youtube.com/watch_popup?v=' . $video_id . '/?autoplay=1><img src=' . $image_link . '></a>';
  return $link;

}

/**
 * @param $video_id
 * @param null $image_uri
 * @return string
 */
function create_vimeo_link($video_id, $image_uri = NULL)
{
  $image_link = NULL;
  if ($image_uri) {
    $image_link = $image_uri;
  } else {
    $image_link = getVimeoThumb($video_id);
  }
  $link = '<a class="shadowboxvideo" rel="" href=http://player.vimeo.com/video/' . $video_id . '/?autoplay=1><img src=' . $image_link . '></a>';
  return $link;

}

/**
 * @param $id
 * @return mixed
 */
function getVimeoThumb($id) {
  $data = file_get_contents("http://vimeo.com/api/v2/video/$id.json");
  $data = json_decode($data);
  return $data[0]->thumbnail_large;
}