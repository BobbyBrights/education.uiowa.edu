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

  <?php if (!empty($content['field_person_apr_id'])) {
    /*** Begin code from Chris Manjoine for APR data web form ***/ ?>

    <div id="container" ng-app="aprProfile" class="person_aprProfile">
      <content-item hawk_id="<?php echo render($content['field_person_apr_id'][0]['#markup']); ?>" apr_key="a7sd98f798asydjkbasbdfasdf79798asdfh013" population_id="9" template_id="5"></content-item>
    </div>
    <?php /*** End code from Manjoine ***/ ?>

  <?php } else { ?>

    <div class="content"<?php print $content_attributes; ?>>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);

        // Combine office number and building name.
        if (!empty($content['field_person_building']) && !empty($content['field_person_office_number'])) {
          $building = $content['field_person_building'][0]['sitenow_map_row']['content']['#markup'];
          hide($content['field_person_building']);
          $content['field_person_office_number'][0]['#markup'] .= ' ' . $building;
        }

        print render($content);
      ?>
    </div>

  <?php } ?>
  <?php
  drupal_add_js('https://cdnjs.cloudflare.com/ajax/libs/angular.js/1.5.8/angular.min.js', array(
          'type' => 'external',
          'scope' => 'footer', ));
  drupal_add_js('https://cdnjs.cloudflare.com/ajax/libs/jquery/2.1.4/jquery.min.js', array(
          'type' => 'external',
          'scope' => 'footer', ));
  drupal_add_js('https://apps.its.uiowa.edu/facadmin/assets/lib/angular-filter/dist/angular-filter.min.js?v=4', array(
          'type' => 'external',
          'scope' => 'footer', ));
  drupal_add_js(drupal_get_path('theme','education_radix') . '/js/apr_profile.js', array('scope' => 'footer'));
  ?>

</article>
