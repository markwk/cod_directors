<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function cod_directors_user_default_permissions() {
  $permissions = array();

  // Exported permission: create officer content
  $permissions['create officer content'] = array(
    'name' => 'create officer content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: delete any officer content
  $permissions['delete any officer content'] = array(
    'name' => 'delete any officer content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: delete own officer content
  $permissions['delete own officer content'] = array(
    'name' => 'delete own officer content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit any officer content
  $permissions['edit any officer content'] = array(
    'name' => 'edit any officer content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit field_email
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(
      '0' => 'session organizer',
      '1' => 'site administrator',
    ),
  );

  // Exported permission: edit field_headshot_img
  $permissions['edit field_headshot_img'] = array(
    'name' => 'edit field_headshot_img',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit field_org_co
  $permissions['edit field_org_co'] = array(
    'name' => 'edit field_org_co',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit field_phone
  $permissions['edit field_phone'] = array(
    'name' => 'edit field_phone',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit own officer content
  $permissions['edit own officer content'] = array(
    'name' => 'edit own officer content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: view field_email
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'session organizer',
      '3' => 'site administrator',
    ),
  );

  return $permissions;
}
