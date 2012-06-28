(function ($) {

Drupal.gardenwalk_maplink = {
  nids : [],

  init_map : function() {
    for (var layer_id in [0,1,2,4,5]) {
      layer_features = $('div.openlayers-map-neighborhood_map').data('openlayers').openlayers.layers[layer_id].features;
      //var all_features = Drupal.gardenwalk_maplink.getAllFeatures.features;
      for (var key in layer_features) {
        var feature = layer_features[key];
        Drupal.gardenwalk_maplink.nids[feature.attributes.nid] = [layer_id, key];
      }
    }
    $('a.maplink').click(function(e)
    {
      var nid = $(this).attr('id').replace("maplink-nid-","");;
      Drupal.gardenwalk_maplink.popup_map_feature(nid);
      e.preventDefault();
    });
  },

  popup_map_feature : function(nid) {
    if (Drupal.gardenwalk_maplink.nids) {
      var layer_id = Drupal.gardenwalk_maplink.nids[nid][0];
      var index = Drupal.gardenwalk_maplink.nids[nid][1];
      var feature = $('div.openlayers-map-neighborhood_map').data('openlayers').openlayers.layers[layer_id].features[index];
      var selectControl = $('div.openlayers-map-neighborhood_map').data('openlayers').openlayers.controls[0];
      Drupal.openlayers_plus_behavior_popup.openPopup(feature, selectControl);
    } 
    return false;
  }
}

$(document).ready(function(){
  Drupal.gardenwalk_maplink.init_map();
});

})(jQuery);
