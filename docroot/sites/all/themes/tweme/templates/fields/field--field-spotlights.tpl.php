<?php 
$spanner='span12';
if(sizeof($items)==2)
	$spanner='span6';
?>
	
<?php foreach ($items as $delta => $item): ?>
	<div class="<?php print $spanner; ?>">
		<?php print render($item); ?>
	</div>
<?php endforeach; ?>