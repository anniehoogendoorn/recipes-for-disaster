<?php
/**
 * @file
 * shortcuts_and_shady_deals.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function shortcuts_and_shady_deals_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_tips_picture'.
  $field_bases['field_tips_picture'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tips_picture',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 3,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
