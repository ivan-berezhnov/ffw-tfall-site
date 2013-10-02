<div class="container">
  <h2 class="page-title"><?php print $title; ?></h2>

  <div class="row-fluid our-model-banner">
    <div class="span8 offset2">
      <div class="field__text-area">
        <?php print render($content['field_ourmodel_infographic']); ?>
      </div>
    </div>
  </div>

	<div class="row-fluid our-model-section">
    <div class="span12">
      <h3>TEACHERS</h3>
			<div class="intro">
        <?php print render($content['field_ourmodelintro_teachers']); ?>
      </div>
			<div class="spotlights row-fluid">
        <div class="span4"><?php print render($content['field_teachers_spotlights'][0]); ?></div>
        <div class="span4"><?php print render($content['field_teachers_spotlights'][1]); ?></div>
        <div class="span4"><?php print render($content['field_teachers_spotlights'][2]); ?></div>
      </div>
    </div>
  </div>

	<div class="row-fluid our-model-section">
    <div class="span12">
      <h3>LEADERS</h3>
			<div class="intro">
        <?php print render($content['field_ourmodelintro_leaders']); ?>
      </div>
			<div class="spotlights row-fluid">
        <div class="span4"><?php print render($content['field_leaders_spotlights'][0]); ?></div>
        <div class="span4"><?php print render($content['field_leaders_spotlights'][1]); ?></div>
        <div class="span4"><?php print render($content['field_leaders_spotlights'][2]); ?></div>
      </div>
    </div>
  </div>

	<div class="row-fluid our-model-section">
    <div class="span12">
      <h3>SYSTEM CHANGE</h3>
			<div class="intro">
        <?php print render($content['field_ourmodelintro_systemchange']); ?>
      </div>
			<div class="spotlights row-fluid">
        <div class="span4"><?php print render($content['field_systemchange_spotlights'][0]); ?></div>
        <div class="span4"><?php print render($content['field_systemchange_spotlights'][1]); ?></div>
        <div class="span4"><?php print render($content['field_systemchange_spotlights'][2]); ?></div>
      </div>
    </div>
  </div>

  <div class="row-fluid">
    <div class="span12">
      <div class="jump-link">
        <?php print render($content['field_nov2_links']); ?>
      </div>
    </div>
  </div>
</div>
