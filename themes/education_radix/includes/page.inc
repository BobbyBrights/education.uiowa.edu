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
}
