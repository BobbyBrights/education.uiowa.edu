<?php

/**
 * Implements theme_menu_tree__menu_block().
 */
function education_radix_menu_tree__menu_block(&$variables) {
  return '<ul class="menu nav">' . $variables['tree'] . '</ul>';
}
