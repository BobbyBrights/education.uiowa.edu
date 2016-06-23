<?php
/**
 * @file
 * Theme and preprocess functions for pages.
 */

/**
 * Implements template_preprocess_page().
 */
function education_radix_preprocess_page(&$variables) {
  //dpm($variables);

  $variables['sidebar_first'] = $variables['page']['sidebar_first'];

  $variables['sidebar_first_width'] = '3';
  $variables['content_width'] = '12';

  if ($variables['page']['sidebar_first']) {
    $variables['content_width'] = (string)((int)$variables['content_width']-(int)$variables['sidebar_first_width']);
  }

  if (!empty($variables['node'])) {
    $wrapper = entity_metadata_wrapper('node', $variables['node']);

    // Get value of the header type field if there is one.
    if (isset($wrapper->field_header_type)) {
      $header_type = $wrapper->field_header_type->value();
    }

    if (!empty($header_type)) {
      // Add header type as a class to the header.
      $variables['header_classes_array'][] = drupal_clean_css_identifier($header_type);

      if ($header_type == 'tall_image') {
        $header_image = $wrapper->field_header_image_tall->value();
        if (!empty($header_image)) {
          $header_image_tall = field_view_field('node', $variables['node'], 'field_header_image_tall', $display = 'default', $langcode = NULL);
          $variables['header_image_tall'] = $header_image_tall;
        }
        // Switch page template.
        $variables['theme_hook_suggestions'][] = 'page__edgy';
      }
    }
  }

  if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {
    // Remove content list from term pages.
    unset($variables['page']['content']['system_main']['nodes']);
    unset($variables['page']['content']['system_main']['pager']);
    unset($variables['page']['content']['system_main']['no_content']);

    $wrapper = entity_metadata_wrapper('taxonomy_term', arg(2));
    $vocabulary = $wrapper->getBundle();

    if ($vocabulary == 'audiences') {
      // Get value of the header type field if there is one.
      if (isset($wrapper->field_header_type)) {
        $header_type = $wrapper->field_header_type->value();

        if (!empty($header_type)) {
          // Add header type as a class to the header.
          $variables['header_classes_array'][] = drupal_clean_css_identifier($header_type);

          // Add tall header image.
          if ($header_type == 'tall_image') {
            $header_image = $wrapper->field_header_image_tall->value();
            if (!empty($header_image)) {
              $term = taxonomy_term_load(arg(2));
              $header_image_tall = field_view_field('taxonomy_term', $term, 'field_header_image_tall', $display = 'default', $langcode = NULL);
              $variables['header_image_tall'] = $header_image_tall;
            }
          }
        }
      }

      // Provide theme suggestion for Audiences terms.
      $variables['theme_hook_suggestions'][] = 'page__edgy';
    }
  }
}

/**
 * Implements hook_process_page().
 */
function education_radix_process_page(&$variables) {
  if (isset($variables['header_classes_array'])) {
    $variables['header_classes'] = implode(' ', $variables['header_classes_array']);
  }
}
