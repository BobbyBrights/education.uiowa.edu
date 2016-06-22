<?php
/**
 * @file
 * education_common.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function education_common_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.education_radix.lg';
  $breakpoint->name = 'lg';
  $breakpoint->breakpoint = '(min-width: 1200px)';
  $breakpoint->source = 'education_radix';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.education_radix.lg'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.education_radix.md';
  $breakpoint->name = 'md';
  $breakpoint->breakpoint = '(min-width: 992px) and (max-width: 1199px)';
  $breakpoint->source = 'education_radix';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.education_radix.md'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.education_radix.sm';
  $breakpoint->name = 'sm';
  $breakpoint->breakpoint = '(min-width: 768px) and (max-width: 991px)';
  $breakpoint->source = 'education_radix';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.education_radix.sm'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.education_radix.xs';
  $breakpoint->name = 'xs';
  $breakpoint->breakpoint = '(max-width: 767px)';
  $breakpoint->source = 'education_radix';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.education_radix.xs'] = $breakpoint;

  return $export;
}
