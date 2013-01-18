<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE tag.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 */
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>" <?php print $rdf_namespaces; ?>>

<head profile="<?php print $grddl_profile; ?>">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <meta name="keywords" content="cleveland,garden,walk,tour,community,urban,market,reimagining,flower,vegetable,neighborhood,harvard,lee,miles,hough,tremont,detroit,shoreway,glenville,old,brooklyn,centre,ohio,city,slavic,village,st,clair,superior,tremont" />
  <meta name="description" content="GardenWalk Cleveland is a free, self-guided tour of private gardens, community gardens, urban farms and more -- on June 22nd & 23rd, 2013 -- in neighborhoods of Cleveland, Ohio. Neighborhoods selected for 2012 are: Brooklyn Centre, Detroit Shoreway, Glenville, Hough, Lee Harvard Miles, Ohio City, Old Brooklyn, Slavic Village, St. Clair Superior, and Tremont." />
  <meta name="abstract" content="GardenWalk Cleveland is a free, self-guided tour of private gardens, community gardens, urban farms and more -- on June 22nd & 23rd, 2013 -- in neighborhoods of Cleveland, Ohio." />
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <link rel="apple-touch-icon" sizes="57x57" href="/sites/all/themes/gardenwalk/images/apple-touch-icon-57.png" />
  <link rel="apple-touch-icon" sizes="72x72" href="/sites/all/themes/gardenwalk/images/apple-touch-icon-72.png" />
  <link rel="apple-touch-icon" sizes="114x114" href="/sites/all/themes/gardenwalk/images/apple-touch-icon-114.png" />
</head>
<body id="<?php print $body_id; ?>" class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content-area"><?php print t('Skip to main content area'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
