<!-- introduction text -->
<div  class="container-wrapper">
  <div class="container">
    <div class="row-fluid">
      <div class="span12">

        <h2 class="page-title"><?php print $title; ?></h2>

        <div class="nov2__intro">
  				<?php print render ($content['field_nov2_intro']); //intro text?>
        </div>

      </div>
    </div>
  </div>
</div>


<!-- world map -->
<div id="worldmap" class="container-wrapper worldmap__national-orgs">
  <div class="container">
    <div class="row-fluid">
      <div class="span12">
        <?php if (module_exists('widget_map')): ?>
          <?php $widget_map = widget_map_embed();
            print render($widget_map);
          ?>
        <?php endif; ?>
      </div>
    </div>
  </div>
</div>


<!-- list of nos -->
<div  class="container-wrapper">
  <div class="container">
    <div class="row-fluid">

				<?php print views_embed_view('nos_az'); ?>

    </div>
  </div>
</div>


<!-- Unifying Principles -->
<div class="unifying-principles">
  <div  class="container-wrapper">
    <div class="container">
      <div class="row-fluid">

  			<div class="span12">
  				<h3 class="title-small">UNIFYING PRINCIPLES</h3>
  			</div>

        <div class="row-fluid">
          <div class="span6">

          <?php print render($content['field_nov2_principles_left']); ?>

          </div>
          <div class="span6">
            <div class="unifying-principles__right-col">
              <?php print render($content['field_nov2_principles_right']); ?>
            </div>
          </div>
        </div>

      </div>
    </div>
  </div>
</div>


<!-- links -->
<div  class="container-wrapper">
  <div class="container">
    <div class="row-fluid">
      <div class="span12">

        <div class="jump-link">
  				<?php print render($content['field_nov2_links']); ?>
        </div>

      </div>
    </div>
  </div>
</div>


