<?php

/**
 * @file
 * Provide extras views data for field_collection.module.
 */

/**
 * Implements hook_views_data()
 */

function field_collection_views_views_data() {

  // hostEntityId
  $data['field_collection_item']['host_entity_id'] = array(
    'title' => t('Host Entity ID'),
    'help' => t('The ID of the Host Entity.'),
    'field' => array(
      'handler' => 'field_collection_views_handler_field_host_entity_id',
    ),
  );
  $data['field_collection_item']['host_entity_path'] = array(
    'title' => t('Host Entity Path'),
    'help' => t('The Path of the Host Entity.'),
    'field' => array(
      'handler' => 'field_collection_views_handler_field_host_entity_path',
    ),
  );
  $data['field_collection_item']['host_entity_type'] = array(
    'title' => t('Host Entity Type'),
    'help' => t('The Type of the Host Entity.'),
    'field' => array(
      'handler' => 'field_collection_views_handler_field_host_entity_type',
    ),
  );
  $data['field_collection_item']['field_path'] = array(
    'title' => t('Field path'),
    'help' => t('The base path of the field-collection field.'),
    'field' => array(
      'handler' => 'field_collection_views_handler_field_field_path',
    ),
  );
    $data['field_collection_item']['edit_link'] = array(
    'title' => t('Edit Field Collection'),
    'help' => t('Edit Link of the field-collection field.'),
    'field' => array(
      'handler' => 'field_collection_views_handler_field_edit_link',
    ),
  );
  $data['field_collection_item']['add_link'] = array(
    'title' => t('Add Field Collection'),
    'help' => t('Add Link of the field-collection field.'),
    'area' => array(
      'handler' => 'field_collection_views_handler_area_add_link',
    ),
  );
  $data['field_collection_item']['delete_link'] = array(
    'title' => t('Add Field Collection'),
    'help' => t('Add Link of the field-collection field.'),
    'field' => array(
      'handler' => 'field_collection_views_handler_field_delete_link',
    ),
  );
  return $data;
}


