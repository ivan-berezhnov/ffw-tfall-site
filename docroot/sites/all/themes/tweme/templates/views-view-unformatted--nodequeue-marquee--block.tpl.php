<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<div class="marquee__large">
  <div class="marquee__1" data-effeckt-type="cover-fade">
    <?php print $rows[0]; ?>
  </div>
</div>
<div class="marquee__small visible-desktop">
  <div class="marquee__2" data-effeckt-type="cover-fade">
    <?php print $rows[1]; ?>
  </div>
  <div class="marquee__3" data-effeckt-type="cover-fade">
    <?php print $rows[2]; ?>
  </div>
</div>
<div class="marquee__medium visible-desktop">
  <div class="marquee__4" data-effeckt-type="cover-fade">
    <?php print $rows[3]; ?>
  </div>
</div>
