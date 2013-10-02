<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<!-- if there is a vertical image, use it, otherwise use main image -->
<?php

$vertical_image_node_number = 4;
$is_vertical_image_node_number = $vertical_image_node_number == $row->nodequeue_nodes_node_position;
$newsImage = $fields['field_news_image']->content;
$spotlightImage = $fields['field_spotlight_image']->content;
$verticalImage = $fields['field_vertical_image']->content;

if ($is_vertical_image_node_number) {
    if (isset($verticalImage)) {
        print $verticalImage;
    }
} else {
    if (isset($newsImage)) {
        print $newsImage;
    } elseif (isset($spotlightImage)) {
        print $spotlightImage;
    }
}

?>
<div class="marquee__hover">
  <div class="marquee__info-wrapper">

    <!-- either category or type -->
    <div class="marquee__category slug">
      <?php if(isset($fields['field_category']->content)): ?>
        <?php print $fields['field_category']->content; ?>
      <?php else: ?>
        <?php print $fields['field_spotlight_type']->content; ?>
      <?php endif; ?>
    </div>

    <!-- node title -->
    <h2 class="marquee__title"><?php print $fields['title']->content; ?></h2>

    <!-- either blurb or body preview -->
    <div class="marquee__preview">
      <?php if (isset($fields['field_news_byline']->content)): ?>
        <?php print $fields['field_news_byline']->content; ?>
      <?php else: ?>
        <?php print $fields['body']->content; ?>
      <?php endif; ?>
    </div>

    <?php if($fields['field_embedded_video']->content): ?>
      <!-- either go to story or watch video -->
      <div class="marquee__link"><?php print $fields['view_node_2']->content; ?></div>
    <?php else: ?>
      <div class="marquee__link"><?php print $fields['view_node_1']->content; ?></div>
    <?php endif; ?>
  </div>
</div>
