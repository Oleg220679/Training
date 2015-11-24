<?php
/**
 * @file
 * view_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function view_panel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function view_panel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function view_panel_node_info() {
  $items = array(
    'film' => array(
      'name' => t('Film'),
      'base' => 'node_content',
      'description' => t('Using for creating films'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Fill the form for film add'),
    ),
    'review' => array(
      'name' => t('review'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
