<?php
/**
 * @file
 * content_editor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_editor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create page_2_col_layout content'.
  $permissions['create page_2_col_layout content'] = array(
    'name' => 'create page_2_col_layout content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page_2_col_layout content'.
  $permissions['delete any page_2_col_layout content'] = array(
    'name' => 'delete any page_2_col_layout content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page_2_col_layout content'.
  $permissions['delete own page_2_col_layout content'] = array(
    'name' => 'delete own page_2_col_layout content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page_2_col_layout content'.
  $permissions['edit any page_2_col_layout content'] = array(
    'name' => 'edit any page_2_col_layout content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page_2_col_layout content'.
  $permissions['edit own page_2_col_layout content'] = array(
    'name' => 'edit own page_2_col_layout content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
