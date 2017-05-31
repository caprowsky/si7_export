<?php
/**
 * @file
 * si7_export.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function si7_export_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function si7_export_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
