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
  <?php if ($content['field_program_faculty_1']): ?>
    <div class="featured-faculty-section">
      <h2>Meet our Faculty</h2>
      <?php print render($content['field_program_ffaculty1']); ?>
      <?php print render($content['field_program_ffaculty2']); ?>
      <?php print render($content['field_program_ffaculty3']); ?>
      <p class="see-more-faculty"><a href="faculty/<?php if (arg(0) == 'node' && is_numeric(arg(1))) $nodeid = arg(1);
print $nodeid; ?>">See More >></a></p>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['field_program_contact_person']) || !empty($content['field_program_contact_person2']) || !empty($content['field_program_contact_text'])): ?>

      <div class="contact-section">
          <h2>Contact</h2>
          <?php if ($content['field_program_contact_person']): ?>
            <div class="contact-col">
              <?php print render($content['field_program_contact_title']); ?>
              <?php print render($content['field_program_contact_person']); ?>
            </div>
          <?php endif; ?>
          <?php if ($content['field_program_contact_person2']): ?>
            <div class="contact-col">
              <?php print render($content['field_program_contact_title2']); ?>
              <?php print render($content['field_program_contact_person2']); ?>
            </div>
          <?php endif; ?>
          <?php if ($content['field_program_contact_text']): ?>
            <div class="contact-col">
              <?php print render($content['field_program_contact_text']); ?>
            </div>
          <?php endif; ?>
          <br style="clear:both;" />
        </div>
      <?php endif; ?>

      <!-- Removed until styled
          <div class="contact-section">
              <h2>Contact:</h2>
              <h3>Leader:</h3>
              <?php print render($content['field_program_leader_person']); ?>
              <?php print render($content['field_program_leader_title']); ?>
              <?php print render($content['field_program_office_number']); ?>
            </div>
          -->
  </div>


</article>
