(function ($) {
  Drupal.behaviors.primaryMenuOverlay = {
    attach: function (context, settings) {
      // Switch between up and down facing caret icons.
      $('#primaryMenu').on('shown.bs.collapse', function () {
        $('#main-wrapper').hide();
        $('#footer').hide();
        $('#ui-global-footer').hide();
      })

      $('#primaryMenu').on('hide.bs.collapse', function() {
        $('#main-wrapper').show();
        $('#footer').show();
        $('#ui-global-footer').show();
      })
    }
  };
})(jQuery);
