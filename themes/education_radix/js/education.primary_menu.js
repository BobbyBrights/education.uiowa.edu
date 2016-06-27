(function ($) {
  Drupal.behaviors.primaryMenuOverlay = {
    attach: function (context, settings) {
      // When the primary menu is opening...
      $('#primaryMenu').on('show.bs.collapse', function() {
        $('#header').addClass('primary-menu-open');
      })

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

      // When the primary menu is closed...
      $('#primaryMenu').on('hidden.bs.collapse', function() {
        $('#header').removeClass('primary-menu-open');
      })
    }
  };
})(jQuery);
