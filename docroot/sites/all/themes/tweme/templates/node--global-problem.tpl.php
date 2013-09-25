<?php print render($content['field_top_section']); ?>

<h2>
	<?php print render($content['field_globalproblem_subheader']); ?> 
</h2>

<?php if (module_exists('widget_map')): ?>
	<?php print render(widget_map_detailed_embed()); ?>
<?php endif; ?>


<?php print render($content['body']); ?>