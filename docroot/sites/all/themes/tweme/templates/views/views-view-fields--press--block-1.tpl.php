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
<div class="news__flexslider__wrapper flexslider-wrapper">
  <?php print $fields['field_image']->content; ?>
  <div class="news__flexslider__info flexslider-info">
    <?php print $fields['field_category']->content; ?>
    <h2><?php print $fields['title']->content; ?></h2>
    <?php if(isset($fields['field_byline']->content)): ?>
      <div class="news__preview flexslider-preview visible-desktop"><?php print $fields['field_byline']->content; ?></div>
    <?php endif; ?>
    <div class="news__link flexslider-link hidden-phone">
      <?php
        $embedded_field = $row->_field_data['nid']['entity']->field_embedded_video;
        $embedded_field_video_size= sizeof($embedded_field);
        $is_embedded_video_field = ($embedded_field_video_size > 0);
        if ($is_embedded_video_field) {
            print $fields['view_node_2']->content;
        } else {
          print $fields['view_node']->content;
        }
      ?>
    </div>
  </div>
</div>

