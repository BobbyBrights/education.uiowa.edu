<?php
/**
 * @file
 * Theme and preprocess functions for pages.
 */

/**
 * Implements template_preprocess_page().
 */
function education_radix_preprocess_page(&$variables) {
  $variables['sidebar_first'] = $variables['page']['sidebar_first'];

  $variables['sidebar_first_width'] = '3';
  $variables['content_width'] = '12';

  if ($variables['page']['sidebar_first']) {
    $variables['content_width'] = (string)((int)$variables['content_width']-(int)$variables['sidebar_first_width']);
  }


  if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {
    // Remove content list from term pages.
    unset($variables['page']['content']['system_main']['nodes']);
    unset($variables['page']['content']['system_main']['pager']);
    unset($variables['page']['content']['system_main']['no_content']);
    // Provide theme suggestion for Audiences terms.
    $term = taxonomy_term_load(arg(2));
    $vocab = $term->vocabulary_machine_name;
    if ($vocab == 'audiences') {
      $variables['theme_hook_suggestions'][] = 'page__edgy';
    }
  }
}
