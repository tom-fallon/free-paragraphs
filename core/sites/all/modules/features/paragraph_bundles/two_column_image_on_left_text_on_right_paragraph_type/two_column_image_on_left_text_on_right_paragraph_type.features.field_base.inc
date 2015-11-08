<?php
/**
 * @file
 * two_column_image_on_left_text_on_right_paragraph_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function two_column_image_on_left_text_on_right_paragraph_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_left_image_imgl'.
  $field_bases['field_left_image_imgl'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_left_image_imgl',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_right_column_of_text_imgl'.
  $field_bases['field_right_column_of_text_imgl'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_right_column_of_text_imgl',
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
