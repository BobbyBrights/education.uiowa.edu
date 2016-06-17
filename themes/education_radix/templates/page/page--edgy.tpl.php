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
  <div class="container">
    <nav class="navbar navbar-default" role="navigation">
      <!-- Brand and toggle get grouped for better mobile display -->
      <div class="navbar-header">
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-collapse">
          <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
        <?php if ($site_name || $logo): ?>
          <a href="<?php print $front_page; ?>" class="navbar-brand" rel="home" title="<?php print t('Home'); ?>">
            <?php if ($logo): ?>
              <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" id="logo" />
            <?php endif; ?>
            <?php if ($site_name): ?>
              <span class="site-name"><?php print $site_name; ?></span>
            <?php endif; ?>
          </a>
        <?php endif; ?>
      </div> <!-- /.navbar-header -->

      <!-- Collect the nav links, forms, and other content for toggling -->
      <div class="collapse navbar-collapse" id="navbar-collapse">
        <?php if ($main_menu): ?>
          <ul id="main-menu" class="menu nav navbar-nav">
            <?php print render($main_menu); ?>
          </ul>
        <?php endif; ?>
        <?php if ($search_form): ?>
          <?php print $search_form; ?>
        <?php endif; ?>
      </div><!-- /.navbar-collapse -->
    </nav><!-- /.navbar -->
  </div> <!-- /.container -->
</header>

<div id="main-wrapper">
  <div id="bg-image" aria-hidden=true></div>
  <div id="main" class="main">
    <h1 class="offscreen title"><?php print $title; ?></h1>
      <div id="content">
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
  </div> <!-- /#main -->
</div> <!-- /#main-wrapper -->

<footer id="footer" class="footer" role="footer">
  <div class="container">
    <div class="row">
      <div class="col-xs-12 col-sm-6 col-md-4" style="text-align:center;"> <!-- bootstrap to span across 4 of available 12 columns in .row -->
        <a href="http://education.uiowa.edu" title="The University of Iowa College of Education"><div id="footer-logo" ></div></a>

        459 Lindquist Center North<br/>
        Iowa City, IA 52242<br/>
        <br/>
        <br/>
      </div>
      <div class="col-xs-12 col-sm-6 col-md-4 footer-center"> <!-- bootstrap to span across 4 of available 12 columns in .row -->
        <br/>
        <a href="directory" ><div class="footer-button"><strong>Directory<strong></div></a>
        <br/>
      </div>
      <div class="col-xs-12 col-md-4"> <!-- bootstrap to span across 4 of available 12 columns in .row -->
        <a href="https://www.facebook.com/UICollegeofEducation" title="Follow us on facebook" role="link">
          <div id="facebook-icon" class="footer-social footer-social-facebook"></div></a>
        <a href="http://instagram.com/uicollegeofed" title="Follow us on Instagram" role="link">
          <div id="instagram-icon" class="footer-social footer-social-instagram"></div></a>
        <a href="https://twitter.com/UIowaEducation" title="Follow us on Twitter" role="link">
          <div id="twitter-icon" class="footer-social footer-social-twitter"></div></a>
        <a href="https://www.linkedin.com/in/uiowacollegeofeducation" title="Connect with us on LinkedIn" role="link">
          <div id="linkdin-icon" class="footer-social footer-social-linkedin"></div></a>
        <a href="http://pinterest.com/uicoe/" title="Checkout out our boards on Pinterest" role="link">
          <div id="youtube-icon" class="footer-social footer-social-pinterest"></div></a>
        <a href="https://www.youtube.com/channel/UC4XWVXnCeZQRS4lJjQLbnVA" title="Find our latest videos on YouTube" role="link">
          <div id="facebook-icon" class="footer-social footer-social-youtube"></div></a>
      </div>
    </div>
    <div class="row">
      <div class="col-xs-12 col-sm-6 col-md-4" style="text-align:center;"> <!-- bootstrap to span across 4 of available 12 columns in .row -->
      </div>
      <div class="col-xs-12 col-sm-6 col-md-4 footer-center"> <!-- bootstrap to span across 4 of available 12 columns in .row -->
        <a href="webmaster">Report web site problems to the webmaster</a>
      </div>
      <div class="col-xs-12 col-md-4"> <!-- bootstrap to span across 4 of available 12 columns in .row -->
      </div>
    </div>
  </div>
</footer>