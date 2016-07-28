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

  // Exported overrides for: file_display
  $overrides["file_display.image__default__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__default__file_field_file_default.weight"] = 0;

  // Exported overrides for: file_type
  $overrides["file_type.document.disabled"] = FALSE;
  $overrides["file_type.document.mimetypes|0"] = 'text/csv';
  $overrides["file_type.document.mimetypes|1"] = 'text/plain';
  $overrides["file_type.document.mimetypes|10"] = 'application/vnd.openxmlformats-officedocument.presentationml.presentation';
  $overrides["file_type.document.mimetypes|11"] = 'application/vnd.openxmlformats-officedocument.presentationml.template';
  $overrides["file_type.document.mimetypes|12"] = 'application/vnd.openxmlformats-officedocument.wordprocessingml.document';
  $overrides["file_type.document.mimetypes|2"] = 'application/msword';
  $overrides["file_type.document.mimetypes|3"] = 'application/vnd.ms-excel';
  $overrides["file_type.document.mimetypes|4"] = 'application/pdf';
  $overrides["file_type.document.mimetypes|5"] = 'application/vnd.ms-powerpoint';
  $overrides["file_type.document.mimetypes|6"] = 'application/vnd.oasis.opendocument.text';
  $overrides["file_type.document.mimetypes|7"] = 'application/vnd.oasis.opendocument.spreadsheet';
  $overrides["file_type.document.mimetypes|8"] = 'application/vnd.oasis.opendocument.presentation';
  $overrides["file_type.document.mimetypes|9"] = 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet';

  // Exported overrides for: filter
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|0"] = 'btn-primary';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|2"] = 'btn-long';
  $overrides["filter.filtered_html.filters|wysiwyg|settings|rule_valid_classes|4"] = 'large-text';

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.filtered_html.settings|advanced__active_tab"] = 'edit-basic';
  $overrides["wysiwyg.filtered_html.settings|buttons|default|Maximize"] = 1;
  $overrides["wysiwyg.filtered_html.settings|buttons|default|Styles"] = 1;
  $overrides["wysiwyg.filtered_html.settings|stylesSet"] = 'Large text = p.large-text
                  Large caps = p.uppercase
                  Button = a.btn-primary
                  Long button = a.btn-long';

 return $overrides;
}
