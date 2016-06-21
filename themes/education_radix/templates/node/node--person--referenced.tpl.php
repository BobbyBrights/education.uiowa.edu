<?php

/**
 * @file
 * Radix theme implementation to display a node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
    <h3<?php print $title_attributes; ?>><?php print $title; ?></h3>
  <?php print render($title_suffix); ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);

      // Combine office number and building name.
      if (!empty($content['field_person_building']) && !empty($content['field_person_office_number'])) {
        $building = $content['field_person_building'][0]['sitenow_map_row']['content']['#markup'];
        hide($content['field_person_building']);
        $content['field_person_office_number'][0]['#markup'] .= ' ' . $building;
      }

      print render($content);
    ?>
  </div>
</article>
