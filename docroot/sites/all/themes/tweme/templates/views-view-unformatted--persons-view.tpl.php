<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<?php /* Mobile layout */ ?>
<div class="view-persons-one-col">
<?php foreach ($rows as $id => $row): ?>
   <div class="views-row">
      <?php print $row; ?>
   </div>
<?php endforeach; ?>
</div>

<?php /* Tablet, Desktop layouts */
   $ndx = 0;
   $leftCol = '';
   $rightCol = '';
?>
<div class="view-persons-two-col">

<?php
foreach ($rows as $id => $row):
   if ($ndx == 0) {
      // Add item to left column
      $ndx = 1;
      $leftCol .= '<div class="views-row">' . $row . '</div>';
   } else {
      // Add item to right column
      $ndx = 0;
      $rightCol .= '<div class="views-row">' . $row . '</div>';
   }
endforeach;
?>
   <div class="left-col">
      <?php print $leftCol; ?>
   </div>
   <div class="right-col">
      <?php print $rightCol; ?>
   </div>
</div>