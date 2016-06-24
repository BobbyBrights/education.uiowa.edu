<?php
/**
 * @file
 * Ctools content type plugin file for signage panes module.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Tagline'),
  'description' => t('Shows the College of Education tagline.'),
  'category' => t('Homepage'),
  'edit form' => 'tagline_edit_form',
  'render callback' => 'tagline_render',
  'admin info' => 'tagline_admin_info',
);

/**
 * The 'admin info' callback for panel pane.
 */
function tagline_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Showing cta.');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function tagline_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function tagline_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Run-time rendering of the body of the block (content type).
 *
 * See ctools_plugin_examples for more advanced info.
 */
function tagline_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();

  $block->title = '';

  $block->content = array(
    '#prefix' => '<div class="tagline-wrapper">',
    'heading' => array(
      '#prefix' => '<h2 class="offscreen slogan-title">',
      '#markup' => t('Tagline'),
      '#suffix' => '</h2>',
    ),
    'tagline' => array(
      '#prefix' => '<p class="slogan">',
      '#markup' => t('Leaders. Scholars. Innovators.'),
      '#suffix' => '</p>',
    ),
    '#suffix' => '</div>',
  );
  return $block;
}
