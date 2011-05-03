<?php
/**
 * @file
 * tf_ct_mycontent_features.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function tf_ct_mycontent_features_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_mycontent';
  $strongarm->value = 0;
  $export['comment_anonymous_mycontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_mycontent';
  $strongarm->value = 1;
  $export['comment_default_mode_mycontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_mycontent';
  $strongarm->value = '50';
  $export['comment_default_per_page_mycontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_mycontent';
  $strongarm->value = 1;
  $export['comment_form_location_mycontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_mycontent';
  $strongarm->value = '2';
  $export['comment_mycontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_mycontent';
  $strongarm->value = '1';
  $export['comment_preview_mycontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_mycontent';
  $strongarm->value = 1;
  $export['comment_subject_field_mycontent'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_mycontent';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_mycontent'] = $strongarm;

  return $export;
}
