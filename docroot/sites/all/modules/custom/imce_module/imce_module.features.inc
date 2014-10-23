<?php
/**
 * @file
 * imce_module.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imce_module_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
