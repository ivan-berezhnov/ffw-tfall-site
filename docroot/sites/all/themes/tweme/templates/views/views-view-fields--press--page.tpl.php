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
<div class="row-fluid">
  <div class="span3">
    <div class="news__image-video-wrapper">
    <?php print $fields['field_image']->content; ?>
    <?php
      $embedded_field = $row->_field_data['nid']['entity']->field_embedded_video;
      $embedded_field_video_size= sizeof($embedded_field);
      $is_embedded_video_field = ($embedded_field_video_size > 0);
      if ($is_embedded_video_field) {
          print t('<div class="ico-play"></div>');
      }
    ?>
    </div>
  </div>
  <div class="span6">
    <div class="slug">
      <?php print $fields['created']->content; ?>
    </div>
    <h3><?php print $fields['title']->content; ?></h3>
    <?php if(isset($fields['field_byline']->content)): ?>
      <h3 class="news__landing-byline hidden-phone">
        <?php print $fields['field_byline']->content; ?>
      </h3>
    <?php endif; ?>
    <?php if (isset($fields['field_author']->content)): ?>
      <div class="news__author-info">
        <?php print $fields['field_author']->content; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
