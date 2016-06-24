<?php
/**
 * @file
 * Ctools content type plugin file for signage panes module.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Become a Hawkeye'),
  'description' => t('Shows "Become a Hawkeye" call to action.'),
  'category' => t('Homepage'),
  'edit form' => 'become_a_hawkeye_edit_form',
  'render callback' => 'become_a_hawkeye_render',
  'admin info' => 'become_a_hawkeye_admin_info',
);

/**
 * The 'admin info' callback for panel pane.
 */
function become_a_hawkeye_admin_info($subtype, $conf, $contexts) {
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
function become_a_hawkeye_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function become_a_hawkeye_edit_form_submit($form, &$form_state) {
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
function become_a_hawkeye_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();

  $block->title = '';

  $block->content = array(
    '#prefix' => '<div class="become-a-hawkeye-wrapper">',
    'heading' => array(
      '#prefix' => '<h2 class="become-a-hakweye-title">',
      '#markup' => t('Become a Hawkeye!'),
      '#suffix' => '</h2>',
    ),
    'link' => array(
      '#theme' => 'link',
        '#text' => 'Learn more',
        '#path' => 'audiences/prospective-students',
        '#options' => array(
          'attributes' => array('class' => array('btn')),
        ),
    ),
    '#suffix' => '</div>',
  );
  return $block;
}
