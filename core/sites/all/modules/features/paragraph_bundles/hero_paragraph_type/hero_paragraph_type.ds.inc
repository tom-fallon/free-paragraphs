<?php
/**
 * @file
 * hero_paragraph_type.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function hero_paragraph_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|two_column_image_on_right|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'two_column_image_on_right';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_left_column_of_text_imgr',
      ),
      'right' => array(
        1 => 'field_right_image_imgr',
      ),
    ),
    'fields' => array(
      'field_left_column_of_text_imgr' => 'left',
      'field_right_image_imgr' => 'right',
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
  $export['paragraphs_item|two_column_image_on_right|default'] = $ds_layout;

  return $export;
}
