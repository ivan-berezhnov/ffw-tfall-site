<div class="container">
  <div class="row-fluid">
    <div class="span12">
      <?php print render($content['field_top_section']); ?>
    </div>
  </div>

  <div class="row-fluid">
    <div class="span12">
      <div class="top-section__blurb">
        <?php print render($content['field_globalproblem_subheader']); ?>
      </div>
    </div>
  </div>
</div>

<div id="worldmap" class="container-wrapper worldmap__details">
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
  <div class="global-problem__body">
    <?php print render($content['body']); ?>
  </div>
  <div class="jump-link">
    <?php print render($content['field_link']); ?>
  </div>
</div>
