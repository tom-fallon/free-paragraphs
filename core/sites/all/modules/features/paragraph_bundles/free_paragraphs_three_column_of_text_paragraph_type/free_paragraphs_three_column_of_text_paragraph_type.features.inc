<?php
/**
 * @file
 * free_paragraphs_three_column_of_text_paragraph_type.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function free_paragraphs_three_column_of_text_paragraph_type_paragraphs_info() {
  $items = array(
    'three_col_paragraph' => array(
      'name' => 'Three Column Paragraph',
      'bundle' => 'three_col_paragraph',
      'locked' => '1',
    ),
  );
  return $items;
}
