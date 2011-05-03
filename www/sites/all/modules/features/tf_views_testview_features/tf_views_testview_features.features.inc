<?php
/**
 * @file
 * tf_views_testview_features.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function tf_views_testview_features_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}
