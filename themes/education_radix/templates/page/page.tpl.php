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
        <span class="menu-text">Menu</span><span class="menu-icon menu-icon-open" aria-hidden="true"></span>
      </button>
    </div>
  </div>
  <div class="collapse" id="primaryMenu" role="navigation">
    <div class="container">
      <div class="row">
        <div class="col-md-9">
          <div class="row row-menu-links">
            <?php print render($primary_menu_main_menu_links); ?>
          </div>
          <div class="row row-audiences-news-events">
            <div class="col-sm-6">
              <div class="audiences">
                <h2 class="section-heading">Information for</h2>
                <?php print render($audiences_list); ?>
              </div>
            </div>
            <div class="col-sm-4 col-sm-offset-2">
              <div class="news-events">
                <h2 class="section-heading"><?php print(l('News & Events', 'news')); ?></h2>
                <?php print($date_today); ?>
              </div>
            </div>
          </div>
        </div>
        <div class="col-md-3">
          <div class="cta-links">
            <h2 class="offscreen">Quick Links</h2>
            <?php print(l('Apply', 'node/292', array('attributes' => array('class' => array('btn', 'btn-primary', 'apply'))))); ?>
            <?php print(l('Visit', 'node/724', array('attributes' => array('class' => array('btn', 'btn-primary', 'visit'))))); ?>
            <?php print(l('Contact', 'mailto:ask-education@uiowa.edu', array('attributes' => array('class' => array('btn', 'btn-primary', 'contact'))))); ?>
            <?php print(l('Support the College', 'http://www.uifoundation.org/education/', array('attributes' => array('class' => array('btn', 'btn-primary', 'support'))))); ?>
          </div>
          <div class="social-links">
            <h2 class="offscreen">Connect with Us</h2>
            <p class='clearfix social'>
            <?php print(l("<span class='offscreen'>Facebook</span>
          <span class='social-icon footer-social-facebook' id='facebook-icon'></span>", 'https://www.facebook.com/UICollegeofEducation', array('attributes' => array('class' => array('facebook', 'social-link')),'html' => TRUE,))); ?>
            <?php print(l("<span class='offscreen'>Instagram</span>
          <span class='social-icon footer-social-instagram' id='instagram-icon'></span>", 'http://instagram.com/uicollegeofed', array('attributes' => array('class' => array('instagram', 'social-link')),'html' => TRUE,))); ?>
            <?php print(l("<span class='offscreen'>Twitter</span>
          <span class='social-icon footer-social-twitter' id='twitter-icon'></span>", 'https://twitter.com/UIowaEducation', array('attributes' => array('class' => array('twitter', 'social-link')),'html' => TRUE,))); ?>
            <?php print(l("<span class='offscreen'>LinkedIn</span>
          <span class='social-icon footer-social-linkedin' id='linkdin-icon'></span>", 'https://www.linkedin.com/in/uiowacollegeofeducation', array('attributes' => array('class' => array('linkedin', 'social-link')),'html' => TRUE,))); ?>
            <?php print(l("<span class='offscreen'>Pinterest</span>
          <span class='social-icon footer-social-pinterest' id='pinterest-icon'></span>", 'http://pinterest.com/uicoe', array('attributes' => array('class' => array('pinterest', 'social-link')),'html' => TRUE,))); ?>
            <?php print(l("<span class='offscreen'>YouTube</span>
          <span class='social-icon footer-social-youtube' id='youtube-icon'></span>", 'https://www.youtube.com/channel/UC4XWVXnCeZQRS4lJjQLbnVA', array('attributes' => array('class' => array('youtube', 'social-link')),'html' => TRUE,))); ?>
            </p>
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
      <a data-toggle="modal" data-target="#myModal" class="footer-button">Apply</a>

      <!-- Modal -->
      <div class="modal fade" id="myModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" >
        <div class="modal-dialog" role="document" >
          <div class="modal-content">
            <div class="modal-header">
              <button type="button" class="close" data-dismiss="modal" aria-label="Close">&times;</button>
              <h2 class="modal-title" id="myModalLabel">Apply to the College</h2>
            </div>
            <div class="modal-body">
              <?php
                print l(t('Undergraduate'), drupal_get_path_alias('node/294'), array('attributes' => array('class' => 'btn btn-primary btn-modal','title' => 'Office of Student Services')));
                print l(t('Graduate'), 'https://apply.admissions.uiowa.edu/admissions/graduate.page', array('attributes' => array('class' => 'btn btn-primary btn-modal','title' => 'University of Iowa Office of Admissions')));
                print l(t('Licensure, Certificate, &amp; Endorsement'), drupal_get_path_alias('node/691'), array('attributes' => array('class' => 'btn btn-primary btn-modal','title' => 'Non-degree programs')));
                print l(t('Professional Development'), drupal_get_path_alias('node/269'), array('attributes' => array('class' => 'btn btn-primary btn-modal','title' => 'Teacher Leader Center')));
                print l(t('Online'), drupal_get_path_alias('node/693'), array('attributes' => array('class' => 'btn btn-primary btn-modal','title' => 'Online programs')));
              ?>
            </div>
          <!--  <div class="modal-footer">
          </div> -->
          </div>
        </div>
      </div>
        <br/>
        <a href="/directories" class="footer-button">Directory</a>
        <br/>
      </div>
      <div class="col-xs-12 col-md-4 social"> <!-- bootstrap to span across 4 of available 12 columns in .row -->
        <h2 class="offscreen">Connect with Us</h2>
        <a href="https://www.facebook.com/UICollegeofEducation" title="Follow us on facebook" role="link"><span class="offscreen">Facebook</span>
          <div id="facebook-icon" class="footer-social footer-social-facebook"></div></a>
        <a href="http://instagram.com/uicollegeofed" title="Follow us on Instagram" role="link"><span class="offscreen">Instagram</span>
          <div id="instagram-icon" class="footer-social footer-social-instagram"></div></a>
        <a href="https://twitter.com/UIowaEducation" title="Follow us on Twitter" role="link"><span class="offscreen">Twitter</span>
          <div id="twitter-icon" class="footer-social footer-social-twitter"></div></a>
        <a href="https://www.linkedin.com/in/uiowacollegeofeducation" title="Connect with us on LinkedIn" role="link"><span class="offscreen">LinkedIn</span>
          <div id="linkdin-icon" class="footer-social footer-social-linkedin"></div></a>
        <a href="http://pinterest.com/uicoe/" title="Checkout out our boards on Pinterest" role="link"><span class="offscreen">Pinterest</span>
          <div id="youtube-icon" class="footer-social footer-social-pinterest"></div></a>
        <a href="https://www.youtube.com/channel/UC4XWVXnCeZQRS4lJjQLbnVA" title="Find our latest videos on YouTube" role="link"><span class="offscreen">YouTube</span>
          <div id="facebook-icon" class="footer-social footer-social-youtube"></div></a>
      </div>
    </div>
      <div class="footer-center"> <!-- bootstrap to span across 4 of available 12 columns in .row -->
          <?php print l(t('Report web site problems to the webmaster'), drupal_get_path_alias('262')); ?>
      </div>
    </div>
  </div>
</footer>
