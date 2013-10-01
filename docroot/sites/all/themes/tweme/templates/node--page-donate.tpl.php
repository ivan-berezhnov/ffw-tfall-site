<div class="container">
  <h2 class="page-title"><?php print $title; ?></h2>
  <div class="row-fluid">
    <div class="span8 offset2">
      <div class="field__text-area">
        <?php print render($content['field_text_area']); ?>
      </div>
    </div>
  </div>

  <div class="row-fluid">
    <div class="span6">
      <div class="slug-large donate-title">
        <?php print render($content['field_iframe']['#title']); ?>
      </div>
      <?php print render($content['field_iframe']); ?>
    </div>
    <div class="span6">
      <?php print render($content['body']); ?>
    </div>
  </div>

  <div class="row-fluid">
    <div class="span12">
      <div class="jump-link">
        <?php print render($content['field_link']); ?>
      </div>
    </div>
  </div>
</div>
