<div class="row-fluid">
  <div class="span12">
    <?php print render($content['field_text_area']); ?>
  </div>
</div>

<div class="row-fluid">
  <div class="span12">
    <div class="one-col-layout__image">
      <?php print render($content['field_image']); ?>
    </div>
  </div>
</div>

<?php if(isset($content['field_embedded_video'])): ?>
  <div class="row-fluid">
    <div class="span12">
      <div class="one-col-layout__video">
        <?php print render($content['field_embedded_video']); ?>
      </div>
    </div>
  </div>
<?php endif; ?>
