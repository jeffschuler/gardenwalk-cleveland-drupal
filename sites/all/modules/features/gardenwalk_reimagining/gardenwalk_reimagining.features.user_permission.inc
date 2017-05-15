<?php
/**
 * @file
 * gardenwalk_reimagining.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gardenwalk_reimagining_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_gardener_email'.
  $permissions['create field_gardener_email'] = array(
    'name' => 'create field_gardener_email',
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

  // Exported permission: 'create field_gardener_name'.
  $permissions['create field_gardener_name'] = array(
    'name' => 'create field_gardener_name',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_phone'.
  $permissions['create field_phone'] = array(
    'name' => 'create field_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_gardener_email'.
  $permissions['edit field_gardener_email'] = array(
    'name' => 'edit field_gardener_email',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_gardener_name'.
  $permissions['edit field_gardener_name'] = array(
    'name' => 'edit field_gardener_name',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_phone'.
  $permissions['edit field_phone'] = array(
    'name' => 'edit field_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_gardener_email'.
  $permissions['edit own field_gardener_email'] = array(
    'name' => 'edit own field_gardener_email',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_gardener_name'.
  $permissions['edit own field_gardener_name'] = array(
    'name' => 'edit own field_gardener_name',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_phone'.
  $permissions['edit own field_phone'] = array(
    'name' => 'edit own field_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_gardener_email'.
  $permissions['view field_gardener_email'] = array(
    'name' => 'view field_gardener_email',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_gardener_name'.
  $permissions['view field_gardener_name'] = array(
    'name' => 'view field_gardener_name',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_phone'.
  $permissions['view field_phone'] = array(
    'name' => 'view field_phone',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_gardener_email'.
  $permissions['view own field_gardener_email'] = array(
    'name' => 'view own field_gardener_email',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_gardener_name'.
  $permissions['view own field_gardener_name'] = array(
    'name' => 'view own field_gardener_name',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_phone'.
  $permissions['view own field_phone'] = array(
    'name' => 'view own field_phone',
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
