<?php dsm($content['field_top_section']); ?>
<div class="container">
  <h2 class="page-title"><?php print $title; ?></h2>

      <div class="row-fluid">
        <div class="row-fluid">
          <div class="span12">
            <?php print render($content['field_top_section'][0]); ?>
            <?php print render($content['field_top_section'][1]); ?>
            <?php print render($content['field_top_section'][2]); ?>
          </div>
        </div>
      </div>

  <div class="row-fluid">
    <div class="span12">
      <h2><?php print render($content['field_globalproblem_subheader']); ?></h2>
    </div>
  </div>
</div>

<div id="worldmap" class="container-wrapper">
  <div class="container">
    <!-- world map -->
    <div class="row-fluid">
      <div class="span12">
        <?php if (module_exists('widget_map')): ?>
          <?php $widget_map = widget_map_detailed_embed();
            print render($widget_map);
          ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
</div>

<div class="container">
  <?php print render($content['body']); ?>
</div>
