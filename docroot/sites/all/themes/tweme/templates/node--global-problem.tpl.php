<div class="container">
  <h2 class="page-title"><?php print $title; ?></h2>
  <?php print render($content['field_top_section']); ?>
  <h2>
  	<?php print render($content['field_globalproblem_subheader']); ?>
  </h2>
</div>

<?php if (module_exists('widget_map')): ?>
	<?php print render(widget_map_detailed_embed()); ?>
<?php endif; ?>

<div class="container">
  <?php print render($content['body']); ?>
</div>
