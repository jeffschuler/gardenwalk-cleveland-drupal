<?php

/**
 * @file
 * Default theme implementation to display a region.
 *
 * Available variables:
 * - $content: The content for this region, typically blocks.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - region: The current template type, i.e., "theming hook".
 *   - region-[name]: The name of the region with underscores replaced with
 *     dashes. For example, the page_top region would have a region-page-top class.
 * - $region: The name of the region variable as defined in the theme's .info file.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 *
 * @see template_preprocess()
 * @see template_preprocess_region()
 * @see template_process()
 */
?>

<!-- footer region -->
<div id="footer-wrapper-wrapper" class="footer-wrapper-wrapper full-width clearfix">

  <div id="footer-wrapper-top-wrapper" class="full-width clearfix">
      <div id="footer-wrapper-top" class="grid12-12">
        <div id="footer-wrapper-top-inner" class="grid12-7 fusion-right">
        </div><!-- /footer-wrapper-top-inner -->
      </div><!-- /footer-wrapper-top -->
  </div><!-- /footer-wrapper-top-wrapper -->

  <div id="footer-wrapper" class="footer-wrapper full-width clearfix">
    <div id="footer" class="<?php print $classes; ?>"<?php print $fluid_width; ?>>
      <div id="footer-inner" class="footer-inner inner">
        <?php print $content; ?>
      </div><!-- /footer-inner -->
    </div><!-- /footer -->
  </div><!-- /footer-wrapper -->

</div><!-- /footer-wrapper-wrapper -->
