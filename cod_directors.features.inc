<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function cod_directors_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function cod_directors_node_info() {
  $items = array(
    'officer' => array(
      'name' => t('Officer'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function cod_directors_views_api() {
  return array(
    'api' => '2',
  );
}
