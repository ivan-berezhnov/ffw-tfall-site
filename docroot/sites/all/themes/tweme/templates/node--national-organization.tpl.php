<div class="container">
<h2 class="page-title"><?php print render($content['field_country']); ?></h2>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content"<?php print $content_attributes; ?>>
    <div class="row-fluid">
      <div class="span3">

        <div class="no__info-block">
          <?php print render($content['field_no_logo']); ?>
        </div>

        <?php if (isset($content['field_links'])): ?>
          <div class="no__website-info no__info-block">
            <div class="slug"><?php print t('Website'); ?></div>
            <?php print render($content['field_links']); ?>
          </div>
        <?php endif; ?>

        <?php if (isset($content['field_ceo_profile'])): ?>
          <div class="no__info-block no__ceo">
            <div class="slug"><?php print t('CEO'); ?></div>
            <?php print render($content['field_ceo_profile']); ?>
          </div>
        <?php endif; ?>

        <div class="no__info-block no__stats">
          <div class="slug"><?php print t('Program Snapshot'); ?></div>

          <?php if (isset($content['field_program_launched'])): ?>
            <div class="no__stat">
  						<strong><?php print render($content['field_program_launched']); ?></strong> program launched<br />
  					</div>
          <?php endif; ?>

          <?php if (isset($content['field_cohorts_placed'])): ?>
            <div class="no__stat">
    					<strong><?php print render($content['field_cohorts_placed']); ?></strong> cohorts placed<br />
    				</div>
          <?php endif; ?>

          <?php if (isset($content['field_teachers_active'])): ?>
            <div class="no__stat">
    					<strong><?php print render($content['field_teachers_active']); ?></strong> teachers active<br />
            </div>
          <?php endif; ?>

          <?php if (isset($content['field_alumni'])): ?>
            <div class="no__stat">
    					<strong><?php print render($content['field_alumni']); ?></strong> alumni<br />
            </div>
          <?php endif; ?>

          <?php if (isset($content['field_schools'])): ?>
            <div class="no__stat">
  						<strong><?php print render($content['field_schools']); ?></strong> schools
              <?php if (isset($content['field_city_1'])): ?>
                in <?php print render($content['field_city_1']); ?>
              <?php endif; ?>
            </div>
          <?php endif; ?>

        </div>

        <div class="no__info-block">
          <?php print render($content['field_no_image_map']); ?>
        </div>

        <div class="no__info-block no__stats">
          <div class="slug"><?php print t('Local Context'); ?></div>

          <div class="no__stat">
  					<?php if (isset($content['field_population'])): ?>
  						<strong><?php print render($content['field_population']); ?></strong> population<br />
  					<?php endif; ?>
          </div>

          <div class="no__stat">
  					<?php if (isset($content['field_living_below_poverty_line'])): ?>
  						<strong><?php print render($content['field_living_below_poverty_line']); ?>%</strong> living below poverty line<br />
  					<?php endif; ?>
          </div>

          <div class="no__stat">
  					<?php if (isset($content['field_avg_total_years_of_edu'])): ?>
  						<strong><?php print render($content['field_avg_total_years_of_edu']); ?></strong> avg. total years of education<br />
  					<?php endif; ?>
          </div>

        </div>

      </div>
      <div class="span6">
        <div class="no__image">
					<?php print render($content['field_no_image']); ?>
        </div>
        <div class="no__blurb">
					<?php print render($content['field_blurb']); ?>
        </div>

				<div class="row-fluid no__spotlights">
				  <?php print render($content['field_spotlights']); ?>
				</div>

      </div>
      <div class="span3">

				<?php if (module_exists('widget_facebook') && isset($content['field_key_facebook'])): ?>
          <?php print render(widget_facebook_embed(render($content['field_key_facebook']))); ?>
				<?php endif; ?>

        <div class="no__twitter">
          <?php print render($content['field_national_organization_twit']); ?>
        </div>

      </div>
    </div>

  </div>
</div>


</div> <!-- container end -->

<div id="worldmap" class="container-wrapper">
  <div class="container">
    <!-- world map -->
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
