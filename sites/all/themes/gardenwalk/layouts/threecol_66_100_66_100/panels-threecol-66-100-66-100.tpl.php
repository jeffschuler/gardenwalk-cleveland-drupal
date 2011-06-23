<div class="panel-display panel-3col-66-100-66-100 clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-row-top clearfix">
    <div class="panel-panel panel-col-first">
      <div class="inside"><?php print $content['topleft']; ?></div>
    </div>
    <div class="panel-panel panel-col-last">
      <div class="inside"><?php print $content['topright']; ?></div>
    </div>
  </div>
  
  <div class="panel-row-topmid clearfix">
    <div class="panel-panel">
      <div class="inside"><?php print $content['topmidfull']; ?></div>
    </div>
  </div>

  <div class="panel-row-middle clearfix">
    <div class="panel-panel panel-col-first">
      <div class="inside"><?php print $content['midleft']; ?></div>
    </div>
    <div class="panel-panel panel-col-last">
      <div class="inside"><?php print $content['midright']; ?></div>
    </div>
  </div>
  
  <div class="panel-row-bottom clearfix">
    <div class="panel-panel">
      <div class="inside"><?php print $content['botfull']; ?></div>
    </div>
  </div>
</div>
