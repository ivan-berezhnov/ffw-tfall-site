<?php
/**
 * @file
 * footer_information.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function footer_information_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
