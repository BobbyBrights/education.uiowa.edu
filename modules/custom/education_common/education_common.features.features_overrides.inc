<?php
/**
 * @file
 * education_common.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function education_common_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|0"] = 'btn-primary';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|2"] = 'btn-long';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|4"] = 'large-text';

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.filtered_html.settings|buttons|default|Maximize"] = 1;
  $overrides["wysiwyg.filtered_html.settings|buttons|default|Styles"] = 1;
  $overrides["wysiwyg.filtered_html.settings|stylesSet"] = 'Large text = p.large-text
  Button = a.btn-primary
  Long button = a.btn-long';

 return $overrides;
}
