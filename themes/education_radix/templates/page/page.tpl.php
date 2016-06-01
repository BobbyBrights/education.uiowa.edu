<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 */
?>
<header id="header" class="header" role="header">
  <div class="branding">
    <div class="container">
      <a href="<?php print $front_page; ?>" class="site-name" rel="home" title="<?php print t('Home'); ?>">Collge of <span class="site-name-bold">Education</span></a>
    </div>
  </div>
</header>

<div id="main-wrapper">
  <div id="bg-image" aria-hidden=true></div>
  <div id="main" class="main">
    <div class="container">
      <h1 class="offscreen title"><?php print $title; ?></h1>
      <div class="row">
        <?php if ($sidebar_first): ?>
          <div id="sidebar-first" class="col-md-<?php print $sidebar_first_width; ?>" >
            <?php print render($page['sidebar_first']); ?>
          </div>
        <?php endif; ?>

        <div id="content" class="col-md-<?php print $content_width; ?>">
          <?php if ($messages): ?>
            <div id="messages">
              <?php print $messages; ?>
            </div>
          <?php endif; ?>
          <?php if ($breadcrumb): ?>
            <div id="breadcrumb" class="visible-desktop">
              <?php print $breadcrumb; ?>
            </div>
          <?php endif; ?>
          <div id="page-header">
            <?php if ($title): ?>
              <div class="page-header">
                <div class="h1 title"><?php print $title; ?></div>
              </div>
            <?php endif; ?>
            <?php if ($tabs): ?>
              <div class="tabs">
                <?php print render($tabs); ?>
              </div>
            <?php endif; ?>
            <?php if ($action_links): ?>
              <ul class="action-links">
                <?php print render($action_links); ?>
              </ul>
            <?php endif; ?>
          </div>
          <?php print render($page['content']); ?>
        </div>
      </div>
    </div>
  </div> <!-- /#main -->
</div> <!-- /#main-wrapper -->

<footer id="footer" class="footer" role="footer">
  <div class="container">
  </div>
</footer>
