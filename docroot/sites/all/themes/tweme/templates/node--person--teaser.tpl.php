<?php 
$item = $content['links']['node']['#links']['node-readmore']; ?>

<a class="modalpopup" href="/<?php print drupal_get_path_alias($item['href']); ?>"><?php print $item['attributes']['title']; ?></a><br />