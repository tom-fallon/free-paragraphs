<?php
/**
 * @file
 * free_paragraphs_basic_page_bundle.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function free_paragraphs_basic_page_bundle_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_node_paragraphs'.
  $field_instances['node-page-field_node_paragraphs'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_node_paragraphs',
    'label' => 'Paragraphs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'one_column_of_text' => -1,
      ),
      'bundle_weights' => array(
        'one_column_of_text' => 2,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Paragraphs');

  return $field_instances;
}
