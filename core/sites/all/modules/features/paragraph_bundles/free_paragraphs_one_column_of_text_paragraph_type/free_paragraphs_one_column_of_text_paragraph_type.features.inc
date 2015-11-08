<?php
/**
 * @file
 * free_paragraphs_one_column_of_text_paragraph_type.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function free_paragraphs_one_column_of_text_paragraph_type_paragraphs_info() {
  $items = array(
    'one_column_of_text' => array(
      'name' => 'One Column Of Text',
      'bundle' => 'one_column_of_text',
      'locked' => '1',
    ),
  );
  return $items;
}
