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
          <?php print render($content['field_local_context_info']); ?>
        </div>

      </div>
      <div class="span6">
        <?php print render($content['field_no_image']); ?>
        <?php print render($content['field_blurb']); ?>
        Spotlight 1<br />
        Spotlight 2
      </div>
      <div class="span3">
        Twitter Feed<br />
        Facebook Feed
      </div>
    </div>
      <?php //print render(widget_map_embed()); ?>
  </div>
</div>
