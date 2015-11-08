<?php
/**
 * @file
 * free_paragraphs_theme_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function free_paragraphs_theme_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'bootstrap_free_paragraphs';
  $export['theme_default'] = $strongarm;

  return $export;
}
