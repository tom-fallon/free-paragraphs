<?php
/**
 * @file
 * two_column_image_on_right_text_on_left_paragraph_type.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function two_column_image_on_right_text_on_left_paragraph_type_paragraphs_info() {
  $items = array(
    'two_column_image_on_right' => array(
      'name' => 'Two Column, image on right',
      'bundle' => 'two_column_image_on_right',
      'locked' => '1',
    ),
  );
  return $items;
}
