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
<?php
  $newsImage = $fields['field_news_image']->content;
  $spotlightImage = $fields['field_spotlight_image']->content;
  $verticalImage = $fields['field_vertical_image']->content;
?>
<?php
  if(isset($verticalImage)) {
    print $verticalImage;
  } elseif (isset($newsImage)) {
    print $newsImage;
  } elseif (isset($spotlightImage)) {
    print $spotlightImage;
}





?>
<div class="marquee__hover">
  <div class="marquee__info-wrapper">
    <div class="marquee__category slug"><?php print $fields['field_category']->content; ?></div>
    <h2 class="marquee__title"><?php print $fields['title']->content; ?></h2>
    <div class="marquee__preview">The students of Nirali Vasisht (Teach For India)
      talk about their vision and the skills they learn in the classroom.</div>
    <div class="marquee__link">Watch Video >></div>
  </div>
</div>