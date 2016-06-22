<?php
/**
 * @file
 * education_common.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function education_common_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'education_radix';
  $breakpoint_group->name = 'Education';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.education_radix.xs',
    1 => 'breakpoints.theme.education_radix.sm',
    2 => 'breakpoints.theme.education_radix.md',
    3 => 'breakpoints.theme.education_radix.lg',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['education_radix'] = $breakpoint_group;

  return $export;
}
