<?php
/**
 * @file
 * education_common.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function education_common_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
