<?php
/**
 * @file
 * featured_videos.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function featured_videos_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-video-field_embedded_video'
  $field_instances['node-video-field_embedded_video'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'global_organization' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'our_model' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'video_embed_field_thumbnail',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_embedded_video',
    'label' => 'Embedded Video',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'video_embed_field_video',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Embedded Video');

  return $field_instances;
}
