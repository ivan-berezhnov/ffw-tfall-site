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

        <div class="no__info-block">
          <div class="slug"><?php print t('Program Snapshot'); ?></div>

					<?php if (isset($content['field_program_launched'])): ?>
						<b><?php print render($content['field_program_launched']); ?></b> program launched<br />
					<?php endif; ?>
					<?php if (isset($content['field_cohorts_placed'])): ?>
						<b><?php print render($content['field_cohorts_placed']); ?></b> cohorts placed<br />
					<?php endif; ?>
					<?php if (isset($content['field_teachers_active'])): ?>
						<b><?php print render($content['field_teachers_active']); ?></b> teachers active<br />
					<?php endif; ?>
					<?php if (isset($content['field_alumni'])): ?>
						<b><?php print render($content['field_alumni']); ?></b> alumni<br />
					<?php endif; ?>
					<?php if (isset($content['field_schools'])): ?>
						<b><?php print render($content['field_schools']); ?></b> schools in Lohore<br /> and Karachi<br />
					<?php endif; ?>					

        </div>

        <div class="no__info-block">
          <?php print render($content['field_no_image_map']); ?>
        </div>

        <div class="no__info-block">
          <div class="slug"><?php print t('Local Context'); ?></div>

					<?php if (isset($content['field_population'])): ?>
						<b><?php print render($content['field_population']); ?></b> population<br />
					<?php endif; ?>
					<?php if (isset($content['field_living_below_poverty_line'])): ?>
						<b><?php print render($content['field_living_below_poverty_line']); ?>%</b> living below poverty line<br />
					<?php endif; ?>
					<?php if (isset($content['field_avg_total_years_of_edu'])): ?>
						<b><?php print render($content['field_avg_total_years_of_edu']); ?></b> avr. total years of education<br />
					<?php endif; ?>

        </div>

      </div>
      <div class="span6">
        <?php print render($content['field_no_image']); ?>
        <?php print render($content['field_blurb']); ?>
				
				
				<div class="row-fluid">
					<div class="span6">
						<?php print render($content['field_teacher_spotlight']); ?> 
					</div>
					<div class="span6">
						<?php print render($content['field_alumni_spotlight']); ?>
					</div>
				</div>
				
				
      </div>
      <div class="span3">
        Twitter Feed<br />
				
				<?php //temporary! generic facebook like-box... awaiting response TFAPW-56 ?>
				<?php if (module_exists('widget_facebook')): ?>
					<?php print render(widget_facebook_embed_homepage()); ?>
				<?php endif; ?>
				
				
      </div>
    </div>

  </div>
</div>