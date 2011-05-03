<?php
/**
 * @file
 * tf_ct_mycontent_features.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function tf_ct_mycontent_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function tf_ct_mycontent_features_node_info() {
  $items = array(
    'mycontent' => array(
      'name' => t('myContent'),
      'base' => 'node_content',
      'description' => t('this the content that I create for displaying view'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
