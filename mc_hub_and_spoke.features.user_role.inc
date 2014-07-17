<?php
/**
 * @file
 * mc_hub_and_spoke.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mc_hub_and_spoke_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 2,
  );

  // Exported role: cluster curator.
  $roles['cluster curator'] = array(
    'name' => 'cluster curator',
    'weight' => 3,
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 5,
  );

  // Exported role: managing editor.
  $roles['managing editor'] = array(
    'name' => 'managing editor',
    'weight' => 4,
  );

  return $roles;
}
