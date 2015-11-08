<?php
/**
 * @file
 * two_column_image_on_left_text_on_right_paragraph_type.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function two_column_image_on_left_text_on_right_paragraph_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|two_column_image_on_left|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'two_column_image_on_left';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_left_image_imgl',
      ),
      'right' => array(
        1 => 'field_right_column_of_text_imgl',
      ),
    ),
    'fields' => array(
      'field_left_image_imgl' => 'left',
      'field_right_column_of_text_imgl' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['paragraphs_item|two_column_image_on_left|default'] = $ds_layout;

  return $export;
}
