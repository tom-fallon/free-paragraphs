<?php
/**
 * @file
 * free_paragraphs_two_column_of_text_paragraph_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function free_paragraphs_two_column_of_text_paragraph_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_left|paragraphs_item|two_column_text|form';
  $field_group->group_name = 'group_column_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_column_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Column',
    'weight' => '0',
    'children' => array(
      0 => 'field_left_column_of_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_column_left|paragraphs_item|two_column_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_right|paragraphs_item|two_column_text|form';
  $field_group->group_name = 'group_column_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'two_column_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Column',
    'weight' => '1',
    'children' => array(
      0 => 'field_right_column_of_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-column-right field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_column_right|paragraphs_item|two_column_text|form'] = $field_group;

  return $export;
}
