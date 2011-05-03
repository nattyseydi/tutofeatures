<?php
/**
 * @file
 * tf_frontpage_features.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function tf_frontpage_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
