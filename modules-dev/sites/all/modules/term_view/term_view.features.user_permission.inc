<?php
/**
 * @file
 * term_view.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function term_view_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in article_categories'.
  $permissions['delete terms in article_categories'] = array(
    'name' => 'delete terms in article_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in article_categories'.
  $permissions['edit terms in article_categories'] = array(
    'name' => 'edit terms in article_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
