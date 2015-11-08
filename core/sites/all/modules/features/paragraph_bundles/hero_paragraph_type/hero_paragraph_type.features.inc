<?php
/**
 * @file
 * hero_paragraph_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hero_paragraph_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function hero_paragraph_type_image_default_styles() {
  $styles = array();

  // Exported image style: hero_image.
  $styles['hero_image'] = array(
    'label' => 'Hero Image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function hero_paragraph_type_paragraphs_info() {
  $items = array(
    'full_width_image' => array(
      'name' => 'Full Width Image',
      'bundle' => 'full_width_image',
      'locked' => '1',
    ),
  );
  return $items;
}
