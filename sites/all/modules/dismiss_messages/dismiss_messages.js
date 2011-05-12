/**
 * @file
 * dismiss_messages.js
 *
 * Allow manual dismissing of status messages.
 */

(function($) {
  $(document).ready(function() {
    $(".dismiss-message a").click(
      function () {
        $(this).parent().parent().hide();
        return true;
      }
    );
  })
})(jQuery);