<?php
/**
 * @file
 * mc_hub_and_spoke.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mc_hub_and_spoke_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'admin' => 'admin',
      'cluster curator' => 'cluster curator',
      'managing editor' => 'managing editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'create hub content'.
  $permissions['create hub content'] = array(
    'name' => 'create hub content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create spoke content'.
  $permissions['create spoke content'] = array(
    'name' => 'create spoke content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hub content'.
  $permissions['delete any hub content'] = array(
    'name' => 'delete any hub content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any spoke content'.
  $permissions['delete any spoke content'] = array(
    'name' => 'delete any spoke content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hub content'.
  $permissions['delete own hub content'] = array(
    'name' => 'delete own hub content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own spoke content'.
  $permissions['delete own spoke content'] = array(
    'name' => 'delete own spoke content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any hub content'.
  $permissions['edit any hub content'] = array(
    'name' => 'edit any hub content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any spoke content'.
  $permissions['edit any spoke content'] = array(
    'name' => 'edit any spoke content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'admin' => 'admin',
      'cluster curator' => 'cluster curator',
      'contributor' => 'contributor',
      'managing editor' => 'managing editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own hub content'.
  $permissions['edit own hub content'] = array(
    'name' => 'edit own hub content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own spoke content'.
  $permissions['edit own spoke content'] = array(
    'name' => 'edit own spoke content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'comment',
  );

  return $permissions;
}
