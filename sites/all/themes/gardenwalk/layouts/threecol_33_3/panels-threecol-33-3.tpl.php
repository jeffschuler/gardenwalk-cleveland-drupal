<div class="panel-display panel-3col-33-3 clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="panel-row-top clearfix">
    <div class="panel-panel panel-col-first">
      <div class="inside"><?php print $content['topleft']; ?></div>
    </div>
    <div class="panel-panel panel-col-last">
      <div class="inside"><?php print $content['topright']; ?></div>
    </div>
  </div>

  <div class="panel-row-middle clearfix">
    <div class="panel-panel">
      <div class="inside"><?php print $content['mid']; ?></div>
    </div>
  </div>

  <div class="panel-row-bottom clearfix">
    <div class="panel-panel panel-col-first">
      <div class="inside"><?php print $content['botleft']; ?></div>
    </div>
    <div class="panel-panel panel-col">
      <div class="inside"><?php print $content['botmid']; ?></div>
    </div>
    <div class="panel-panel panel-col-last">
      <div class="inside"><?php print $content['botright']; ?></div>
    </div>
  </div>

</div>
