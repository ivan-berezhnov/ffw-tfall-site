<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content"<?php print $content_attributes; ?>>
    <div class="page-title">
      <h2 class="title"><?php print $title; ?></h2>
    </div>
    <div class="row-fluid">
      <div class="span3">

        <div class="no__info-block">
          <?php print render($content['field_no_logo']); ?>
        </div>

        <div class="no__website-info no__info-block">
          <div class="slug"><?php print t('Website'); ?></div>
          <?php print render($content['field_links']); ?>
        </div>

        <div class="no__info-block">
          <div class="slug"><?php print t('CEO'); ?></div>
          <?php print render($content['field_ceo_profile']); ?>
        </div>

        <div class="no__info-block no__stats">
          <div class="slug"><?php print t('Program Snapshot'); ?></div>

          <div class="no__stat">
  					<?php if (isset($content['field_program_launched'])): ?>
  						<strong><?php print render($content['field_program_launched']); ?></strong> program launched<br />
  					<?php endif; ?>
          </div>

          <div class="no__stat">
  					<?php if (isset($content['field_cohorts_placed'])): ?>
  						<strong><?php print render($content['field_cohorts_placed']); ?></strong> cohorts placed<br />
  					<?php endif; ?>
          </div>

          <div class="no__stat">
  					<?php if (isset($content['field_teachers_active'])): ?>
  						<strong><?php print render($content['field_teachers_active']); ?></strong> teachers active<br />
  					<?php endif; ?>
          </div>

          <div class="no__stat">
  					<?php if (isset($content['field_alumni'])): ?>
  						<strong><?php print render($content['field_alumni']); ?></strong> alumni<br />
  					<?php endif; ?>
          </div>

          <div class="no__stat">
  					<?php if (isset($content['field_schools'])): ?>
  						<strong><?php print render($content['field_schools']); ?></strong> schools in Lohore<br /> and Karachi<br />
  					<?php endif; ?>
          </div>

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
  						<strong><?php print render($content['field_avg_total_years_of_edu']); ?></strong> avr. total years of education<br />
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
					<div class="span6">
						<?php print render($content['field_teacher_spotlight']); ?>
					</div>
					<div class="span6">
						<?php print render($content['field_alumni_spotlight']); ?>
					</div>
				</div>

      </div>
      <div class="span3">

				<?php //temporary! generic facebook like-box... awaiting response TFAPW-56 ?>
				<?php if (module_exists('widget_facebook')): ?>
					<?php print render(widget_facebook_embed_homepage()); ?>
				<?php endif; ?>

      </div>
    </div>

  </div>
</div>
