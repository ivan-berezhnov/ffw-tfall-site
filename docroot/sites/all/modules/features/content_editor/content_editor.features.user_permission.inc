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

  // Exported permission: 'create global_problem content'.
  $permissions['create global_problem content'] = array(
    'name' => 'create global_problem content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create network_learning content'.
  $permissions['create network_learning content'] = array(
    'name' => 'create network_learning content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page_2_col_layout content'.
  $permissions['create page_2_col_layout content'] = array(
    'name' => 'create page_2_col_layout content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tfa_supporter content'.
  $permissions['create tfa_supporter content'] = array(
    'name' => 'create tfa_supporter content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any global_problem content'.
  $permissions['delete any global_problem content'] = array(
    'name' => 'delete any global_problem content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any network_learning content'.
  $permissions['delete any network_learning content'] = array(
    'name' => 'delete any network_learning content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page_2_col_layout content'.
  $permissions['delete any page_2_col_layout content'] = array(
    'name' => 'delete any page_2_col_layout content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page_donate content'.
  $permissions['delete any page_donate content'] = array(
    'name' => 'delete any page_donate content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page_join_our_staff content'.
  $permissions['delete any page_join_our_staff content'] = array(
    'name' => 'delete any page_join_our_staff content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tfa_supporter content'.
  $permissions['delete any tfa_supporter content'] = array(
    'name' => 'delete any tfa_supporter content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own global_problem content'.
  $permissions['delete own global_problem content'] = array(
    'name' => 'delete own global_problem content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own network_learning content'.
  $permissions['delete own network_learning content'] = array(
    'name' => 'delete own network_learning content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page_2_col_layout content'.
  $permissions['delete own page_2_col_layout content'] = array(
    'name' => 'delete own page_2_col_layout content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page_donate content'.
  $permissions['delete own page_donate content'] = array(
    'name' => 'delete own page_donate content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page_join_our_staff content'.
  $permissions['delete own page_join_our_staff content'] = array(
    'name' => 'delete own page_join_our_staff content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tfa_supporter content'.
  $permissions['delete own tfa_supporter content'] = array(
    'name' => 'delete own tfa_supporter content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in network_learning'.
  $permissions['delete terms in network_learning'] = array(
    'name' => 'delete terms in network_learning',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in supporter_levels'.
  $permissions['delete terms in supporter_levels'] = array(
    'name' => 'delete terms in supporter_levels',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any global_problem content'.
  $permissions['edit any global_problem content'] = array(
    'name' => 'edit any global_problem content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any network_learning content'.
  $permissions['edit any network_learning content'] = array(
    'name' => 'edit any network_learning content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page_2_col_layout content'.
  $permissions['edit any page_2_col_layout content'] = array(
    'name' => 'edit any page_2_col_layout content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page_donate content'.
  $permissions['edit any page_donate content'] = array(
    'name' => 'edit any page_donate content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page_join_our_staff content'.
  $permissions['edit any page_join_our_staff content'] = array(
    'name' => 'edit any page_join_our_staff content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tfa_supporter content'.
  $permissions['edit any tfa_supporter content'] = array(
    'name' => 'edit any tfa_supporter content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own global_problem content'.
  $permissions['edit own global_problem content'] = array(
    'name' => 'edit own global_problem content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own network_learning content'.
  $permissions['edit own network_learning content'] = array(
    'name' => 'edit own network_learning content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page_2_col_layout content'.
  $permissions['edit own page_2_col_layout content'] = array(
    'name' => 'edit own page_2_col_layout content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page_donate content'.
  $permissions['edit own page_donate content'] = array(
    'name' => 'edit own page_donate content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page_join_our_staff content'.
  $permissions['edit own page_join_our_staff content'] = array(
    'name' => 'edit own page_join_our_staff content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tfa_supporter content'.
  $permissions['edit own tfa_supporter content'] = array(
    'name' => 'edit own tfa_supporter content',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in network_learning'.
  $permissions['edit terms in network_learning'] = array(
    'name' => 'edit terms in network_learning',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in supporter_levels'.
  $permissions['edit terms in supporter_levels'] = array(
    'name' => 'edit terms in supporter_levels',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
