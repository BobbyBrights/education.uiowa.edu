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

    /*** End code from Manjoine ***/ ?>

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
        } ?>

        <div <?php if ($content['field_person_image']): ?> class="col-sm-2"<?php else: ?> class="col-sm-12"<?php endif; ?> >
           <?php print render($content['field_person_image']); ?>
        </div>
        <div <?php if ($content['field_person_image']): ?> class="col-sm-9"<?php else: ?> class="col-sm-12"<?php endif; ?> >
         <div class="media-body">
          <table cellspacing="5">
            <tbody>
              <?php if ($content['field_person_working_title']): ?><tr><th class="pull-right">Title </th>
                        <td style="padding-left:8px;" class="ng-binding"><?php print render($content['field_person_working_title']); ?></td></tr><?php endif; ?>
              <?php if ($content['field_person_office_number']): ?><tr><th class="pull-right">Office </th>
                        <td style="padding-left:8px;" class="ng-binding"><?php print render($content['field_person_office_number']); ?></td></tr><?php endif; ?>
              <?php if ($content['field_person_phone_number']): ?><tr><th class="pull-right">Phone </th>
                        <td style="padding-left:8px;" class="ng-binding"><?php print render($content['field_person_phone_number']); ?></td></tr><?php endif; ?>
              <?php if ($content['field_person_email']): ?><tr><th class="pull-right">Email </th>
                        <td style="padding-left:8px;" class="ng-binding"><?php print render($content['field_person_email']); ?></td></tr><?php endif; ?>
            </tbody>
          </table>
         </div>
        </div>
        <br style="clear:both;" />
        <?php if ($content['field_person_affiliations']): ?>
          <h3>Affiliations within the College</h3>
          <?php print render($content['field_person_affiliations']); ?>
        <?php endif; ?>
        <?php if ($content['field_person_expertise']): ?><
          <h3>Areas of Expertise</h3>
          <?php print render($content['field_person_expertise']); ?>
        <?php endif; ?>
        <?php if ($content['body']): print render($content['body']); endif; ?>

    </div>

  <?php } ?>

</article>
