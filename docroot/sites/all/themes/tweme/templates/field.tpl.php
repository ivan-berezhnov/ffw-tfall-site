<?php
/**
 * @file
 * Subject template
 */
?>
<?php foreach ($items as $delta => $item) : ?>
  <?php print render($item); ?>
<?php endforeach; ?>