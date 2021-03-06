<?php
/**
 * @file
 * seo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function seo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Content editor' => 'Content editor',
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  return $permissions;
}
