<?php
/**
 * @file
 * Ctools content type plugin file for signage panes module.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Callout: Research'),
  'description' => t('Promotes research'),
  'category' => t('Homepage'),
  'edit form' => 'callout_research_edit_form',
  'render callback' => 'callout_research_render',
  'admin info' => 'callout_research_admin_info',
);

/**
 * The 'admin info' callback for panel pane.
 */
function callout_research_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Showing research callout.');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function callout_research_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function callout_research_edit_form_submit($form, &$form_state) {
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
function callout_research_render($subtype, $conf, $panel_args, $context = NULL) {
  $background_image = drupal_get_path('module', 'education_pages') . '/images/research.jpg';
  $block = new stdClass();
  $block->title = '';
  $block->content = array(
    '#prefix' => '<div class="callout-wrapper">',
    'heading' => array(
      '#prefix' => '<h2 class="callout-title offscreen">',
      '#markup' => t('Innovative Research'),
      '#suffix' => '</h2>',
    ),
    'link' => array(
      '#prefix' => '<div class="callout-image-wrapper yellow-background"><div class="container" style="background: url(' . $background_image . ') no-repeat center center; background-size: cover;">',
      '#suffix' => '</div></div>',
      '#theme' => 'link',
        '#text' => t('Innovative </br> Research »'),
        '#path' => 'research',
        '#options' => array(
          'attributes' => array(
            'class' => array('btn', 'btn-homepage-callout', 'btn-position-bottom-left'),
          ),
          'html' => TRUE,
        ),
    ),
    'text' => array(
      '#prefix' => '<div class="callout-text-wrapper"><div class="container"><p class="callout-text">',
      '#markup' => t('The College of Education is home to XX centers and XX faculty who are innovating in the fields of education, measurement, counseling, and rehabilitation. Through cutting-edge research we are leading the way across the nation and globe.'),
      '#suffix' => '</p></div></div>',
    ),
    '#suffix' => '</div>',
  );
  return $block;
}
