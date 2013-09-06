<?php foreach ($items as $delta => $item): ?>
  <a target="_blank" href="http://<?php print $item['#markup']; ?>"><?php print $item['#markup']; ?></a>
<?php endforeach; ?>