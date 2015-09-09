<?php
/**
 * @file
 * pubteachforall_central.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pubteachforall_central_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'translate fieldable_panels_pane entities'.
  $permissions['translate fieldable_panels_pane entities'] = array(
    'name' => 'translate fieldable_panels_pane entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  return $permissions;
}
