<?php
/**
 * @file
 * Ctools content type plugin file for signage panes module.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Connect'),
  'description' => t('Shows links to social media accounts.'),
  'category' => t('Homepage'),
  'edit form' => 'social_edit_form',
  'render callback' => 'social_render',
  'admin info' => 'social_admin_info',
);

/**
 * The 'admin info' callback for panel pane.
 */
function social_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Showing social media accounts.');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function social_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function social_edit_form_submit($form, &$form_state) {
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
function social_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();

  $block->title = '';

  $block->content = array(
    '#prefix' => '<div class="social-wrapper">',
    'heading' => array(
      '#prefix' => '<h2 class="social-title">',
      '#markup' => t('Connect'),
      '#suffix' => '</h2>',
    ),
    'links' => array(
      '#prefix' => '<p class="clearfix social">',
      'link_facebook' => array(
        '#theme' => 'link',
          '#text' => "<span class='offscreen'>Facebook</span>
            <span class='social-icon footer-social-facebook' id='facebook-icon'></span>",
          '#path' => 'https://www.facebook.com/UICollegeofEducation',
          '#options' => array('html' => TRUE),
      ),
      'link_instagram' => array(
        '#theme' => 'link',
          '#text' => "<span class='offscreen'>Instagram</span>
            <span class='social-icon footer-social-instagram' id='instagram-icon'></span>",
          '#path' => 'http://instagram.com/uicollegeofed',
          '#options' => array('html' => TRUE),
      ),
      'link_twitter' => array(
        '#theme' => 'link',
          '#text' => "<span class='offscreen'>Twitter</span>
            <span class='social-icon footer-social-twitter' id='twitter-icon'></span>",
          '#path' => 'https://twitter.com/UIowaEducation',
          '#options' => array('html' => TRUE),
      ),
      'link_linkedin' => array(
        '#theme' => 'link',
          '#text' => "<span class='offscreen'>LinkedIn</span>
            <span class='social-icon footer-social-linkedin' id='linkedin-icon'></span>",
          '#path' => 'https://www.linkedin.com/in/uiowacollegeofeducation',
          '#options' => array('html' => TRUE),
      ),
      'link_pinterest' => array(
        '#theme' => 'link',
          '#text' => "<span class='offscreen'>Pinterest</span>
            <span class='social-icon footer-social-pinterest' id='pinterest-icon'></span>",
          '#path' => 'http://pinterest.com/uicoe/',
          '#options' => array('html' => TRUE),
      ),
      'link_youtube' => array(
        '#theme' => 'link',
          '#text' => "<span class='offscreen'>YouTube</span>
            <span class='social-icon footer-social-youtube' id='youtube-icon'></span>",
          '#path' => 'https://www.youtube.com/channel/UC4XWVXnCeZQRS4lJjQLbnVA',
          '#options' => array('html' => TRUE),
      ),
      '#suffix' => '</p>',
    ),
    'hashtag' => array(
      '#prefix' => '<p class="social-hashtag">',
      '#markup' => '#hawkeyeteachers',
      '#suffix' => '</p>',
    ),
    '#suffix' => '</div>',
  );
  return $block;
}
