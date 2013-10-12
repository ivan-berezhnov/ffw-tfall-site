<?php
  $vertical_image_node_number = 4;
  $is_vertical_image_node_number = $vertical_image_node_number == $row->nodequeue_nodes_node_position;
  $newsImage = $fields['field_news_image']->content;
  $spotlightImage = $fields['field_spotlight_image']->content;
  $networklearningImage = $fields['field_network_learning_image']->content;
  $verticalImage = $fields['field_vertical_image']->content;

  if ($is_vertical_image_node_number) {
    if (isset($verticalImage)) {
        print $verticalImage;
    }
  } else {
    if (isset($newsImage)) {
        print $newsImage;
    }
    if (isset($networklearningImage)) {
        print $networklearningImage;
    } elseif (isset($spotlightImage)) {
        print $spotlightImage;
    }
  }
?>
<div class="marquee__hover">
  <div class="marquee__info-wrapper">

    <!-- either category or type -->
    <div class="marquee__category slug">
      <?php if(isset($fields['field_category']->content)): ?>
        <?php print $fields['field_category']->content; ?>
      <?php else: ?>
        <?php print $fields['field_spotlight_type']->content; ?>
      <?php endif; ?>
    </div>

    <!-- node title -->
    <h2 class="marquee__title"><?php print $fields['title']->content; ?></h2>

    <!-- either blurb or body preview -->
    <div class="marquee__preview">
      <?php if (isset($fields['field_news_byline']->content)): ?>
        <?php print $fields['field_news_byline']->content; ?>
      <?php else: ?>
        <?php print $fields['body']->content; ?>
      <?php endif; ?>
    </div>

    <div class="marquee__link">
      <?php
        $embedded_field = $row->_field_data['nid']['entity']->field_embedded_video;
        $embedded_field_video_size= sizeof($embedded_field);
        $is_embedded_video_field = ($embedded_field_video_size > 0);
        if ($is_embedded_video_field) {
            print $fields['view_node_2']->content;
        } else {
            print $fields['view_node_1']->content;
        }
      ?>
    </div>
  </div>
</div>
