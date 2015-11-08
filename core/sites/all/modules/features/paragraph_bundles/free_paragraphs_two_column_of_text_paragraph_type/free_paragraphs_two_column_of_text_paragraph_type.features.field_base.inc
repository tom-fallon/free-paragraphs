<?php
/**
 * @file
 * free_paragraphs_two_column_of_text_paragraph_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function free_paragraphs_two_column_of_text_paragraph_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_left_column_of_text'.
  $field_bases['field_left_column_of_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_left_column_of_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_right_column_of_text'.
  $field_bases['field_right_column_of_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_right_column_of_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
