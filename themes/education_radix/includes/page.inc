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

  // Remove content list from term pages.
  if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))){
    unset($variables['page']['content']['system_main']['nodes']);
    unset($variables['page']['content']['system_main']['pager']);
    unset($variables['page']['content']['system_main']['no_content']);
  }
}
