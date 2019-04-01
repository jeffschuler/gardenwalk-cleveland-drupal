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

  // Exported permission: 'create field_gardener_phone_cell'.
  $permissions['create field_gardener_phone_cell'] = array(
    'name' => 'create field_gardener_phone_cell',
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

  // Exported permission: 'create field_gardener_phone_home'.
  $permissions['create field_gardener_phone_home'] = array(
    'name' => 'create field_gardener_phone_home',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ok'.
  $permissions['create field_ok'] = array(
    'name' => 'create field_ok',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_special_feature'.
  $permissions['create field_special_feature'] = array(
    'name' => 'create field_special_feature',
    'roles' => array(
      'administrator' => 'administrator',
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

  // Exported permission: 'edit field_gardener_phone_cell'.
  $permissions['edit field_gardener_phone_cell'] = array(
    'name' => 'edit field_gardener_phone_cell',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_gardener_phone_home'.
  $permissions['edit field_gardener_phone_home'] = array(
    'name' => 'edit field_gardener_phone_home',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ok'.
  $permissions['edit field_ok'] = array(
    'name' => 'edit field_ok',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_special_feature'.
  $permissions['edit field_special_feature'] = array(
    'name' => 'edit field_special_feature',
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

  // Exported permission: 'edit own field_gardener_phone_cell'.
  $permissions['edit own field_gardener_phone_cell'] = array(
    'name' => 'edit own field_gardener_phone_cell',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_gardener_phone_home'.
  $permissions['edit own field_gardener_phone_home'] = array(
    'name' => 'edit own field_gardener_phone_home',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ok'.
  $permissions['edit own field_ok'] = array(
    'name' => 'edit own field_ok',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_special_feature'.
  $permissions['edit own field_special_feature'] = array(
    'name' => 'edit own field_special_feature',
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

  // Exported permission: 'view field_gardener_phone_cell'.
  $permissions['view field_gardener_phone_cell'] = array(
    'name' => 'view field_gardener_phone_cell',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_gardener_phone_home'.
  $permissions['view field_gardener_phone_home'] = array(
    'name' => 'view field_gardener_phone_home',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ok'.
  $permissions['view field_ok'] = array(
    'name' => 'view field_ok',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_special_feature'.
  $permissions['view field_special_feature'] = array(
    'name' => 'view field_special_feature',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
      'garden finder' => 'garden finder',
      'guide editor' => 'guide editor',
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

  // Exported permission: 'view own field_gardener_phone_cell'.
  $permissions['view own field_gardener_phone_cell'] = array(
    'name' => 'view own field_gardener_phone_cell',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_gardener_phone_home'.
  $permissions['view own field_gardener_phone_home'] = array(
    'name' => 'view own field_gardener_phone_home',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ok'.
  $permissions['view own field_ok'] = array(
    'name' => 'view own field_ok',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_special_feature'.
  $permissions['view own field_special_feature'] = array(
    'name' => 'view own field_special_feature',
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
