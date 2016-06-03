<?php

/**
 * Implements hook_preprocess_html().
 */
function education_radix_preprocess_html(&$vars) {
  // Add Avenir font.
  $avenir_font = array(
    '#tag' => 'link',
    '#attributes' => array(
      'href' => 'sites/education.uiowa.edu/themes/education_radix/assets/fonts/avenir/MyFontsWebfontsKit.css',
      'rel' => 'stylesheet',
      'type' => 'text/css',
    ),
  );

  drupal_add_html_head($avenir_font, 'avenir_font');
}
