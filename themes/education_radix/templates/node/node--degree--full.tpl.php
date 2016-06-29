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
    ?>
      <div class="leading-text">
        <div class="container">
            <div class="col-sm-8">
              <?php print render($content['field_degree_leading_text']); ?>
            </div>
            <div class="col-sm-4">
              <?php print render($content['field_degree_leading_buttons']); ?>
            </div>
        </div>
      </div>
      <div class="overview-section">
        <div class="container">
            <div class="overview-box">
            <div class="overview-text">
              <h2>Overview</h2>
              <?php print render($content['field_degree_overview_text']); ?>
            </div>
          </div>
        </div>
      </div>
    <div class="content-section">
      <?php print render($content); ?>
    </div>
  </div>

</article>
