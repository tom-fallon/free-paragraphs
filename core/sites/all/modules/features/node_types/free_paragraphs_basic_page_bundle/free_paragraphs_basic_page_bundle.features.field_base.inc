<?php
/**
 * @file
 * free_paragraphs_basic_page_bundle.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function free_paragraphs_basic_page_bundle_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_node_paragraphs'.
  $field_bases['field_node_paragraphs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_node_paragraphs',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  return $field_bases;
}
