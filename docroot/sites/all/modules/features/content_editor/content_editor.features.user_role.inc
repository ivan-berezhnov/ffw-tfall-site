<?php
/**
 * @file
 * content_editor.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function content_editor_user_default_roles() {
  $roles = array();

  // Exported role: Content editor.
  $roles['Content editor'] = array(
    'name' => 'Content editor',
    'weight' => 3,
    'machine_name' => 'content_editor',
  );

  return $roles;
}
