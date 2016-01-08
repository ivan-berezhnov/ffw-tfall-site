<?php
/**
 * @file
 * slc.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function slc_user_default_roles() {
  $roles = array();

  // Exported role: SLC Reviewer.
  $roles['SLC Reviewer'] = array(
    'name' => 'SLC Reviewer',
    'weight' => 6,
    'machine_name' => 'slc_reviewer',
  );

  // Exported role: Student Leader Submission.
  $roles['Student Leader Submission'] = array(
    'name' => 'Student Leader Submission',
    'weight' => 5,
    'machine_name' => 'student_leader_submission',
  );

  return $roles;
}
