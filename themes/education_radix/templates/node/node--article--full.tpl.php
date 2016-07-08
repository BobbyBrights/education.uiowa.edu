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

    <div class="content-section">
      <?php print render($content['field_image']); ?>
          <p style="text-align:right;"><?php print render(format_date($node->created, 'custom', 'F j, Y')); ?></p>
        <?php print render($content['body']); ?>

        <?php if (!empty($content['field_article_source'])):  ?>
          Source: <?php print render($content['field_article_source']); ?>
        <?php endif; ?>
    </div>
    <div class="link-section">
      <p class="large-text"><?php print(l('News', 'news', array('attributes' => array('class' => array('btn-long'))))); ?></p>
      <p class="large-text"><?php print(l('Events', 'events', array('attributes' => array('class' => array('btn-long'))))); ?></p>
    </div>
  </div>
</article>
