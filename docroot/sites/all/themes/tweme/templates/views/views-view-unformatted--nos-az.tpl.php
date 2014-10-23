<?php foreach ($cols as $col) { ?>
	<div class="span4">

		<?php foreach ($col as $country => $items) { ?>

			<div class="item">

				<div class="slug"><?php print $country; ?></div>

				<?php foreach ($items as $item) {
					print $item;
				}; ?>

			</div>

	<?php }; ?>

	</div>
<?php } ?>