<?php

/**
 * @file
 * gardenwalk_basic.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gardenwalk_basic_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer recaptcha'.
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'developer' => 'developer',
    ),
    'module' => 'captcha',
  );

  return $permissions;
}
