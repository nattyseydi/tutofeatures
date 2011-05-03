<?php
/**
 * @file
 * tf_frontpage_features.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function tf_frontpage_features_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'testContext';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-testview-block_1' => array(
          'module' => 'views',
          'delta' => 'testview-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['testContext'] = $context;

  return $export;
}
