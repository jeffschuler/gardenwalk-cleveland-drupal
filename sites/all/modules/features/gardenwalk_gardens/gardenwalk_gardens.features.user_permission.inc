<?php
/**
 * @file
 * gardenwalk_gardens.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gardenwalk_gardens_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_gardener_addressfield'.
  $permissions['create field_gardener_addressfield'] = array(
    'name' => 'create field_gardener_addressfield',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_gardener_addressfield'.
  $permissions['edit field_gardener_addressfield'] = array(
    'name' => 'edit field_gardener_addressfield',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_gardener_addressfield'.
  $permissions['edit own field_gardener_addressfield'] = array(
    'name' => 'edit own field_gardener_addressfield',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_gardener_addressfield'.
  $permissions['view field_gardener_addressfield'] = array(
    'name' => 'view field_gardener_addressfield',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_gardener_addressfield'.
  $permissions['view own field_gardener_addressfield'] = array(
    'name' => 'view own field_gardener_addressfield',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
