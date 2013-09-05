<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content"<?php print $content_attributes; ?>>
    <div class="page-title">
      <h2 class="title"><?php print $title; ?></h2>
    </div>
    <div class="row-fluid">
      <div class="span3">
      <?php print render($content['field_no_logo']); ?>
      <div class="slug">Websites</div>
      <?php print render($content['field_links']); ?>
      <?php print render($content['field_ceo_profile']); ?>
      <?php print render($content['field_program_snapshot']); ?>
      <?php print render($content['field_no_image_map']); ?>
      <?php print render($content['field_local_context_info']); ?>
      </div>
      <div class="span6">
        <?php print render($content['field_no_image']); ?>
        <?php print render($content['field_blurb']); ?>
        Spotlight 1<br />
        Spotlight 2
      </div>
      <div class="span3">
        Twitter Feed<br />
        Facebook Feed
      </div>
    </div>
      <?php //print render(widget_map_embed()); ?>
  </div>
</div>
