<?php
/**
 * @file
 * qa_test_site_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function qa_test_site_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function qa_test_site_feature_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('User blogs that show on the /blog page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
