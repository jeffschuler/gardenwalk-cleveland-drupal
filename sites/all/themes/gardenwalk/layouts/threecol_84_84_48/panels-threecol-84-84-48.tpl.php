<div class="panel-display clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="clearfix">
    <div class="panel-panel block grid12-8">
      <?php print $content['topleft']; ?>
    </div>
    <div class="panel-panel block grid12-4">
      <?php print $content['topright']; ?>
    </div>
  </div>

  <div class="clearfix">
    <div class="panel-panel block grid12-8">
      <?php print $content['midleft']; ?>
    </div>
    <div class="panel-panel block grid12-4">
      <?php print $content['midright']; ?>
    </div>
  </div>

  <div class="clearfix">
    <div class="panel-panel block grid12-4">
      <?php print $content['botleft']; ?>
    </div>
    <div class="panel-panel block grid12-8">
      <?php print $content['botright']; ?>
    </div>
  </div>
</div>
