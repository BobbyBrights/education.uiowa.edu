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


           <div <?php if ($content['field_degree_leading_buttons']): ?> class="col-sm-8" <?php else: ?> class="col-sm-12" <?php endif; ?>>
              <?php print render($content['field_degree_leading_text']); ?>
            </div>
            <?php if ($content['field_degree_leading_buttons']): ?>
              <div class="col-sm-4">
                <?php print render($content['field_degree_leading_buttons']); ?>
              </div>
            <?php endif; ?>
        </div>
      </div>
      <?php if ($content['field_degree_overview_text']): ?>
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
      <?php endif; ?>
    <div class="content-section">
      <?php print render($content); ?>
    </div>
  </div>

</article>
