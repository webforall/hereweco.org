<?php
/**
 * @file
 * rolse.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rolse_user_default_roles() {
  $roles = array();

  // Exported role: co-worker.
  $roles['co-worker'] = array(
    'name' => 'co-worker',
    'weight' => '3',
  );

  return $roles;
}
