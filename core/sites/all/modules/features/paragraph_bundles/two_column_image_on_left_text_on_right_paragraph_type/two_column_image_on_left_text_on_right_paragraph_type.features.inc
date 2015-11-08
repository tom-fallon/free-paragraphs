<?php
/**
 * @file
 * two_column_image_on_left_text_on_right_paragraph_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function two_column_image_on_left_text_on_right_paragraph_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function two_column_image_on_left_text_on_right_paragraph_type_paragraphs_info() {
  $items = array(
    'two_column_image_on_left' => array(
      'name' => 'Two Column, image on left',
      'bundle' => 'two_column_image_on_left',
      'locked' => '1',
    ),
  );
  return $items;
}
