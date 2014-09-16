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

<div class="person-image">
   <?php print $fields['field_person_image']->content; ?>
</div>

<div class="person-copy">
	<div class="slug"><?php print $fields['field_country']->content; ?></div>
   <div class="person-title"><?php print $fields['title']->content; ?></div>
   <div class="person-job-title"><?php print $fields['field_job_title']->content; ?>
   <?php print $fields['field_organization']->content; ?></div>
   <div class="person-bio"><?php print $fields['field_person_bio']->content; ?></div>
   <div class="person-bio-truncated"><?php print $fields['field_person_bio_1']->content; ?></div>
   <span class="read-more-btn"><?php print('READ MORE'); ?></span>
   <span class="collapse-btn"><?php print('COLLAPSE'); ?></span>
</div>