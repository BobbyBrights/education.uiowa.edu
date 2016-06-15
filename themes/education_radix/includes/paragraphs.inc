<?php
/**
 * @file
 * Theme and preprocess functions for paragraph bundles.
 */

/**
 * Implements hook_preprocess_entity().
 *
 * @see : https://www.drupal.org/node/2394519
 */
function education_radix_preprocess_entity(&$variables) {
  if ($variables['entity_type'] == 'paragraphs_item') {

    $wrapper = entity_metadata_wrapper('paragraphs_item', $variables['paragraphs_item']);

    switch ($variables['elements']['#bundle']) {
      case 'text':
        // if (!empty($variables['paragraphs_item']->field_text_area_style)) {
        //   $variables['classes_array'][] = $variables['paragraphs_item']->field_text_area_style[LANGUAGE_NONE][0]['value'];
        // }
        break;

      case 'callout':
        // Set default image classes.
        $variables['image_classes_array'] = array('paragraph-image', 'col-sm-6');
        // Set default text classes.
        $variables['text_classes_array'] = array('paragraph-body', 'col-sm-6');

        // If image is right, push and pull items in grid so they are flipped.
        if ($variables['paragraphs_item']->field_callout_image_position[LANGUAGE_NONE][0]['value'] == 'right') {
          $variables['image_classes_array'][] = 'col-sm-push-6';
          $variables['text_classes_array'][] = 'col-sm-pull-6';
        }
        break;
    }
  }
}

/**
 * Implements hook_process_entity().
 *
 * @see : https://www.drupal.org/node/2394519
 */
function education_radix_process_entity(&$variables) {
  if ($variables['entity_type'] == 'paragraphs_item' && $variables['elements']['#bundle'] == 'callout') {
    // Flatten the image and text classes.
    $variables['image_classes'] = implode(' ', $variables['image_classes_array']);
    $variables['text_classes'] = implode(' ', $variables['text_classes_array']);
  }
}
