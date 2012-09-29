<?php
/**
 * @file
 * rolse.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rolse_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'co-worker',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
      1 => 'co-worker',
    ),
    'module' => 'user',
  );

  // Exported permission: create iniziativa content.
  $permissions['create iniziativa content'] = array(
    'name' => 'create iniziativa content',
    'roles' => array(
      0 => 'co-worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own iniziativa content.
  $permissions['delete own iniziativa content'] = array(
    'name' => 'delete own iniziativa content',
    'roles' => array(
      0 => 'co-worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own iniziativa content.
  $permissions['edit own iniziativa content'] = array(
    'name' => 'edit own iniziativa content',
    'roles' => array(
      0 => 'co-worker',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'co-worker',
    ),
    'module' => 'search',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'co-worker',
    ),
    'module' => 'node',
  );

  return $permissions;
}
