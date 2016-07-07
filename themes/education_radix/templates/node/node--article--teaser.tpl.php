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
<?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
?>

<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print render($content['field_image']); ?>

    <h3 class="node-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>

    <div class="article-publication-info">
      <?php if (!empty($content['field_article_source'])): ?>
        <?php print render($content['field_article_source']) . ' | '; ?>
      <?php endif; ?>
      <?php print $date; ?>
    </div>

    <?php print render($content['body']); ?>

  </div>

</article>
