(function ($) {
  Drupal.behaviors.primaryMenuOverlay = {
    attach: function (context, settings) {
      // When the primary menu is done opening...
      $('#primaryMenu').on('shown.bs.collapse', function () {
        $('#main-wrapper').hide();
        $('#footer').hide();
        $('#ui-global-footer').hide();
      })

      // Before closing the primary menu...
      $('#primaryMenu').on('hide.bs.collapse', function() {
        $('#main-wrapper').show();
        $('#footer').show();
        $('#ui-global-footer').show();
      })
    }
  };
})(jQuery);
