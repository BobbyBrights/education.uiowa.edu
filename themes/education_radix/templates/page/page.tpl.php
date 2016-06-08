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
      <h1 id="site-name"><a href="<?php print $front_page; ?>" class="site-name" rel="home" title="<?php print t('Home'); ?>">College of <span class="site-name-bold">Education</span></a></h1>
      <button class="primary-menu-toggle" type="button" data-toggle="collapse" data-target="#primaryMenu" aria-expanded="false" aria-controls="primaryMenu">
        <span class="menu-text">Menu</span><span class="menu-icon" aria-hidden="true"></span>
      </button>
    </div>
  </div>
  <div class="collapse" id="primaryMenu" role="navigation">
    <div class="container">
      <div class="row">
        <div class="col-md-8">
          <div class="row">
            <div class="col-sm-4">
               <p><a href="#">Programs menu will go here.</a></p>
            </div>
            <div class="col-sm-4">
               <p><a href="#">Research menu will go here.</a></p>
            </div>
            <div class="col-sm-4">
               <p><a href="#">About menu will go here.</a></p>
            </div>
          </div>
          <div class="row">
            <div class="col-sm-6">
              <p><a href="#">Information For menu will go here.</a></p>
            </div>
            <div class="col-sm-4 col-sm-offset-2">
              <div class="news-events">
                <h2><?php print(l('News & Events', 'home')); ?></h2>
                <?php print($date_today); ?>
              </div>
            </div>
          </div>
        </div>
        <div class="col-md-4">
          <div class="cta-links">
            <h2 class="offscreen">Quick Links</h2>
            <?php print(l('Apply', 'home', array('attributes' => array('class' => array('btn', 'btn-primary', 'apply'))))); ?>
            </br>
            <?php print(l('Visit', 'home', array('attributes' => array('class' => array('btn', 'btn-primary', 'visit'))))); ?>
            </br>
            <?php print(l('Contact', 'home', array('attributes' => array('class' => array('btn', 'btn-primary', 'contact'))))); ?>
            </br>
            <?php print(l('Support the College', 'home', array('attributes' => array('class' => array('btn', 'btn-primary', 'support'))))); ?>
          </div>
          <div class="social-links">
            <h2 class="offscreen">Connect with Us</h2>
            <?php print(l('Facebook', 'https://www.facebook.com/UICollegeofEducation', array('attributes' => array('class' => array('facebook'))))); ?>
            <?php print(l('Instagram', 'http://instagram.com/uicollegeofed', array('attributes' => array('class' => array('instagram'))))); ?>
            <?php print(l('Twitter', 'https://twitter.com/UIowaEducation', array('attributes' => array('class' => array('twitter'))))); ?>
            <?php print(l('LinkedIn', 'https://www.linkedin.com/in/uiowacollegeofeducation', array('attributes' => array('class' => array('linkedin'))))); ?>
            <?php print(l('Pinterest', 'http://pinterest.com/uicoe', array('attributes' => array('class' => array('pinterest'))))); ?>
            <?php print(l('YouTube', 'https://www.youtube.com/channel/UC4XWVXnCeZQRS4lJjQLbnVA', array('attributes' => array('class' => array('youtube'))))); ?>
          </div>
          </div>
        </div>
      </div>
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
    <div class="row">
      <div class="col-xs-12 col-sm-6 col-md-4" style="text-align:center;"> <!-- bootstrap to span across 4 of available 12 columns in .row -->
        <a href="http://education.uiowa.edu" title="The University of Iowa College of Education"><div id="footer-logo" ></div></a>

        N459 Lindquist Center<br/>
        Iowa City, IA 52242<br/>
        <br/>
        <br/>
      </div>
      <div class="col-xs-12 col-sm-6 col-md-4 footer-center"> <!-- bootstrap to span across 4 of available 12 columns in .row -->
        <!-- Button trigger modal -->
<a data-toggle="modal" data-target="#myModal"><div class="footer-button"><strong>Apply</strong></div></a>

<!-- Modal -->
<div class="modal fade" id="myModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" >
  <div class="modal-dialog" role="document" >
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-label="Close">&times;</button>
        <h2 class="modal-title" id="myModalLabel">Apply to the College</h2>
      </div>
      <div class="modal-body">
        <p>Learn more about our programs...</p>
        <a class="btn btn-primary btn-modal" href="/node/294" >Undergraduate</a>
        <a class="btn btn-primary btn-modal" href="https://apply.admissions.uiowa.edu/admissions/graduate.page">Graduate</a>
        <a class="btn btn-primary btn-modal" href="">Licensure, Certificate, &amp; Endorsement</a>
        <a class="btn btn-primary btn-modal" href="/services/tlc/professional-development">Professional Development</a>
        <a class="btn btn-primary btn-modal" href="">Online</a>
      </div>
    <!--  <div class="modal-footer">
    </div> -->
    </div>
  </div>
</div> 
        <br/>
        <a href="/directories" ><div class="footer-button"><strong>Directory<strong></div></a>
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
