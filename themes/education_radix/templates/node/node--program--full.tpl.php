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

  <div class="content row"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      // Combine office number and building name.


      if (!empty($content['field_program_building']) && !empty($content['field_program_office_number'])) {
        $building = $content['field_program_building'][0]['sitenow_map_row']['content']['#markup'];
        hide($content['field_program_building']);
        $content['field_program_office_number'][0]['#markup'] .= ' ' . $building;
      }
    ?>
      <div class="leading-text">
        <div class="container">
          <div <?php if ($content['field_program_leading_buttons']): ?> class="col-sm-8" <?php else: ?> class="col-sm-12" <?php endif; ?>>
              <?php print render($content['field_program_leading_text']); ?>
            </div>
          <?php if ($content['field_program_leading_buttons']): ?>
            <div class="col-sm-4">
              <?php print render($content['field_program_leading_buttons']); ?>
            </div>
          <?php endif; ?>
        </div>
      </div>

    <?php if ($content['field_program_overview_text']): ?>
      <div class="overview-section">
        <div class="container">
            <div class="overview-box">
            <div class="col-md-6 overview-text">
              <h2>Overview</h2>
              <?php print render($content['field_program_overview_text']); ?>
            </div>
            <div class="col-md-6" id="div2size">
              <?php print render($content['field_program_overview_image']); ?>
            </div>
          </div>
        </div>
      </div>
    <?php endif; ?>
    <div class="degree-section">
      <h2>Programs</h2>
      <?php print render($content['field_program_degree_options']); ?>
    </div>
    <div class="featured-faculty-section">
      <?php print render($content['field_program_faculty_1']); ?>
      <?php print render($content['field_program_faculty_2']); ?>
      <?php print render($content['field_program_faculty_3']); ?>
    </div>
    <div class="contact-section">
      <?php print render($content); ?>
    </div>
  </div>

</article>
