<div class="container">
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="content"<?php print $content_attributes; ?>>
      <div class="row-fluid">

        <!-- First Column -->
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

          <?php if (isset($content['field_teach_page'])): ?>
            <div class="no__website-info no__info-block">
              <div class="slug"><?php print t('Careers'); ?></div>
              <?php print render($content['field_teach_page']); ?><br />
              <?php if (isset($content['field_careers_page'])): ?>
                <?php print render($content['field_careers_page']); ?><br />
              <?php endif; ?>
            </div>
          <?php endif; ?>

          <?php if (isset($content['field_ceo_profile'])): ?>
            <div class="no__info-block no__ceo">
              <div class="slug"><?php print t('CEO'); ?></div>
              <?php print render($content['field_ceo_profile']); ?>
            </div>
          <?php endif; ?>

           <div class="no__info-block no__stats">
            <div class="slug">
              <?php
                // Set boolean values for the "About" fields to see if they are
                // set. Then check to see if the About field is populated then
                // print the title if it is.
                $is_field_about_set = isset($content['field_about']);
                if($is_field_about_set) {
                  print t('About');
                }
              ?>
            </div>
            <div class="no__stat">
              <?php if ($is_field_about_set): ?>
                <?php print render($content['field_about']); ?><br />
              <?php endif; ?>
            </div>
          </div>

          <div class="no__info-block no__stats">
            <div class="slug">
              <?php
                // Set boolean values for each of the "Program Snapshot" fields
                // to see if they are set. Then check to see if any of the
                // Program Snapshot fields are populated then print the title if
                // they are
                $is_field_program_launched_content_set = isset($content['field_program_launched']);
                $is_field_cohorts_placed_content_set = isset($content['field_cohorts_placed']);
                $is_field_teachers_active_content_set = isset($content['field_teachers_active']);
                $is_field_field_alumni_set = isset($content['field_alumni']);
                $is_field_field_schools_set = isset($content['field_schools']);
                if($is_field_program_launched_content_set ||
                  $is_field_cohorts_placed_content_set ||
                  $is_field_teachers_active_content_set ||
                  $is_field_field_alumni_set ||
                  $is_field_field_schools_set) {
                    print t('Program Snapshot');
                }
              ?>
            </div>

            <?php if ($is_field_program_launched_content_set): ?>
              <div class="no__stat">
                <strong><?php print render($content['field_program_launched']); ?></strong><?php print t(' first cohort'); ?><br />
              </div>
            <?php endif; ?>

            <?php if ($is_field_cohorts_placed_content_set): ?>
              <div class="no__stat">
                <strong><?php print render($content['field_cohorts_placed']); ?></strong><?php print t(' cohorts placed'); ?> <br />
              </div>
            <?php endif; ?>

            <?php if ($is_field_teachers_active_content_set): ?>
              <div class="no__stat">
                <strong><?php print render($content['field_teachers_active']); ?></strong><?php print t(' current program teachers'); ?> <br />
              </div>
            <?php endif; ?>

            <?php if ($is_field_field_alumni_set): ?>
              <div class="no__stat">
                <strong><?php print render($content['field_alumni']); ?></strong><?php print t(' alumni'); ?> <br />
              </div>
            <?php endif; ?>

            <?php if ($is_field_field_schools_set): ?>
              <div class="no__stat">
                <strong><?php print render($content['field_schools']); ?></strong><?php print t(' regions: '); ?>
                <?php if (isset($content['field_city_1'])): ?>
                  <?php print render($content['field_city_1']); ?>
                <?php endif; ?>
              </div>
            <?php endif; ?>
          </div>

          <div class="no__info-block">
            <?php print render($content['field_no_image_map']); ?>
          </div>

          <div class="no__info-block no__stats">
            <div class="slug">
              <?php
                // Set boolean values for each of the "Program Snapshot" fields
                // to see if they are set. Check to see if any of the Program
                // Snapshot fields are populated then print the title if they
                // are. Check to see if any of the Program Snapshot fields are
                // populated then print the title if they are
                $is_field_population_content_set = isset($content['field_population']);
                $is_field_living_below_poverty_line_content_set = isset($content['field_living_below_poverty_line']);
                $is_field_avg_total_years_of_edu_content_set = isset($content['field_avg_total_years_of_edu']);
                if($is_field_population_content_set ||
                  $is_field_living_below_poverty_line_content_set ||
                  $is_field_avg_total_years_of_edu_content_set) {
                    print t('Local Context');
                }
              ?>
            </div>

            <div class="no__stat">
              <?php if ($is_field_population_content_set): ?>
                <strong><?php print render($content['field_population']); ?></strong><?php print t(' population'); ?> <br />
              <?php endif; ?>
            </div>

            <div class="no__stat">
              <?php if ($is_field_living_below_poverty_line_content_set): ?>
                <strong><?php print render($content['field_living_below_poverty_line']); ?>%</strong><?php print t(' living below poverty line'); ?><br />
              <?php endif; ?>
            </div>

            <div class="no__stat">
              <?php if ($is_field_avg_total_years_of_edu_content_set): ?>
                <strong><?php print render($content['field_avg_total_years_of_edu']); ?></strong><?php print t(' avg. total years of education'); ?> <br />
              <?php endif; ?>
            </div>

          </div>
        </div><!-- // End First Column -->

        <!-- Main Content Column -->
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
        </div><!-- // End Main Content Column -->

        <!-- Last Column -->
        <div class="span3">
          <?php if (module_exists('widget_facebook') && isset($content['field_key_facebook'])): ?>
            <?php $_render = widget_facebook_embed(render($content['field_key_facebook'])); $widget_facebook = render($_render);?>
            <?php print $widget_facebook; ?>
          <?php endif; ?>
          <div class="no__twitter">
            <?php print render($content['field_national_organization_twit']); ?>
          </div>
        </div><!-- // End Last Column -->
      </div>
    </div>
  </div>
</div><!-- // End Container -->

<!-- World Map -->
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
