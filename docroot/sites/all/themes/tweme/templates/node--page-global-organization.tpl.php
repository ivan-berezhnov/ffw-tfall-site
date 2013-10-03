<div class="container">
  <h2 class="page-title"><?php print $title; ?></h2>

  <div class="row-fluid our-model-banner">
    <div class="span10 offset1">
      <div class="field__text-area">
        <?php print render($content['field_nov2_intro']); ?>
      </div>
    </div>
  </div>

	<div class="row-fluid our-model-section">
    <div class="span12">
      <h3 class="slug-large">TEACH FOR ALL ACCELERATES IMPACT THROUGH:</h3>
			<div class="spotlights row-fluid">
        <div class="span6">
          <?php print render($content['field_impact_through'][0]); ?>
        </div>
        <div class="span6"><?php print render($content['field_impact_through'][1]); ?></div>
      </div>
			<div class="spotlights row-fluid">
        <div class="span6"><?php print render($content['field_impact_through'][2]); ?></div>
        <div class="span6"><?php print render($content['field_impact_through'][3]); ?></div>
      </div>
    </div>
  </div>

  <div class="row-fluid">
    <div class="span12">
      <div class="jump-link">
        <?php print render($content['field_links']); ?>
      </div>
    </div>
  </div>
</div>
