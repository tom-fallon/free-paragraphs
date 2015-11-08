<?php
/**
 * @file
 * free_paragraphs_two_column_of_text_paragraph_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function free_paragraphs_two_column_of_text_paragraph_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function free_paragraphs_two_column_of_text_paragraph_type_paragraphs_info() {
  $items = array(
    'two_column_text' => array(
      'name' => 'Two Column Text',
      'bundle' => 'two_column_text',
      'locked' => '1',
    ),
  );
  return $items;
}
