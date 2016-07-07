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
      <?php print render($content); ?>
    </div>
    <div class="link-section">
      <p class="large-text"><?php print(l('News', 'news', array('attributes' => array('class' => array('btn-long'))))); ?></p>
      <p class="large-text"><?php print(l('Events', 'events', array('attributes' => array('class' => array('btn-long'))))); ?></p>
    </div>
  </div>
</article>
