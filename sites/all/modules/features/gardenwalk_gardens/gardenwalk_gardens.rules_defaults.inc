<?php
/**
 * @file
 * gardenwalk_gardens.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function gardenwalk_gardens_default_rules_configuration() {
  $items = array();
  $items['rules_notify_garden_finder_on_application_submitted'] = entity_import('rules_config', '{ "rules_notify_garden_finder_on_application_submitted" : {
      "LABEL" : "Notify Garden Finder on Application Submitted",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "garden" : "garden" } } } },
        { "NOT user_has_role" : {
            "account" : [ "node:author" ],
            "roles" : { "value" : { "2" : "2" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "\\u003c?php print _get_neighborhood_garden_finder_email_addresses($node-\\u003efield_neighborhood[\\u0027und\\u0027][0][\\u0027tid\\u0027]); ?\\u003e",
            "subject" : "GardenWalk application for [node:field-neighborhood]: [node:field-gardener-addressfield:thoroughfare]",
            "message" : "Hi \\u003c?php print _get_neighborhood_garden_finder_names($node-\\u003efield_neighborhood[\\u0027und\\u0027][0][\\u0027tid\\u0027]); ?\\u003e,\\u000d\\u000a\\u000d\\u000aA new garden GardenWalk Cleveland garden application has been submitted:\\u000d\\u000a\\u000d\\u000aNeighborhood: [node:field-neighborhood]\\u000d\\u000aGardener: [node:field-gardener-name]\\u000d\\u000aEmail: [node:field-gardener-email]\\u000d\\u000aPhone (home): [node:field-gardener-phone-home]\\u000d\\u000aPhone (cell): [node:field-gardener-phone-cell]\\u000d\\u000aGarden Address: [node:field_address]\\u000d\\u000a\\u000d\\u000aView this application at [node:url] to approve or deny the submission, and to edit garden details.\\u000d\\u000a\\u000d\\u000aReply to this message to respond to the gardener applicant.\\u000d\\u000a\\u000d\\u000aThanks for helping make GardenWalk 2014 amazing!",
            "from" : "[node:field-gardener-name] \\u003c[node:field-gardener-email]\\u003e",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "\\u0022[node:field-gardener-name]\\u0022 \\u003c[node:field-gardener-email]\\u003e",
            "subject" : "GardenWalk Cleveland application received",
            "message" : "Hi [node:field-gardener-name],\\u000d\\u000a\\u000d\\u000aThank you for applying to show your garden in GardenWalk Cleveland 2014!\\u000d\\u000aA volunteer garden finder for [node:field-neighborhood] will review your application soon and let you know whether it has been accepted.\\u000d\\u000a\\u000d\\u000aGardenWalk Cleveland is organized by volunteers. If you are interested in helping out on GardenWalk weekend or in planning the event, please let us know -- http:\\u002f\\u002fwww.gardenwalkcleveland.org\\u002fcontact. And check out our Frequently Asked Questions -- http:\\u002f\\u002fwww.gardenwalkcleveland.org\\u002ffaq -- for more info.\\u000d\\u000a\\u000d\\u000aWe can\\u0027t wait to see you -- and hopefully your garden -- at GardenWalk 2014 on July 12th and 13th!\\u000d\\u000a\\u000d\\u000aSincerely,\\u000d\\u000a\\u000d\\u000aThe GardenWalk Cleveland team\\u000d\\u000a\\u000d\\u000a--\\u000d\\u000aLike us on Facebook - https:\\u002f\\u002fwww.facebook.com\\u002fgardenwalk.cleveland\\u000d\\u000aFollow us on Twitter - https:\\u002f\\u002ftwitter.com\\u002fGardenWalkCle\\u000d\\u000aSubscribe to our Mailing List - http:\\u002f\\u002feepurl.com\\u002fuvMjX",
            "from" : "GardenWalk Cleveland \\u003cinfo@gardenwalkcleveland.org\\u003e",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_gardener_on_garden_approved'] = entity_import('rules_config', '{ "rules_notify_gardener_on_garden_approved" : {
      "LABEL" : "Notify Gardener on Garden Approved",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "workflow_rules" ],
      "ON" : [ "workflow_state_changed" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "garden" : "garden" } } } },
        { "workflow_check_transition" : {
            "node" : [ "node" ],
            "old_state" : { "value" : { "ANY" : "ANY" } },
            "new_state" : { "value" : { "3" : "3" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "\\u0022[node:field-gardener-name]\\u0022 \\u003c[node:field-gardener-email]\\u003e",
            "subject" : "GardenWalk Cleveland: Application Approved!",
            "message" : "Hi [node:field-gardener-name],\\u000d\\u000a\\u000d\\u000aCongratulations!\\u000d\\u000aYour garden application for GardenWalk Cleveland 2014 has been approved.\\u000d\\u000a\\u000d\\u000aThe garden address you submitted is:\\u000d\\u000a[node:field_address]\\u000d\\u000a\\u000d\\u000aThe volunteer garden finder for the [node:field-neighborhood] neighborhood will be in touch with any further concerns.\\u000d\\u000a\\u000d\\u000aPlease read through our Frequently Asked Questions -- http:\\u002f\\u002fwww.gardenwalkcleveland.org\\u002ffaq -- and let us know if you have any further questions. If you are interested in volunteering on GardenWalk weekend or in helping plan the event, please let us know.\\u000d\\u000a\\u000d\\u000aWe can\\u0027t wait to meet you and your garden at GardenWalk Cleveland 2014, on July 12th and 13th!\\u000d\\u000a\\u000d\\u000aSincerely,\\u000d\\u000a\\u000d\\u000aThe GardenWalk Cleveland team\\u000d\\u000a\\u000d\\u000a--\\u000d\\u000aLike us on Facebook - https:\\u002f\\u002fwww.facebook.com\\u002fgardenwalk.cleveland\\u000d\\u000aFollow us on Twitter - https:\\u002f\\u002ftwitter.com\\u002fGardenWalkCle\\u000d\\u000aSubscribe to our Mailing List - http:\\u002f\\u002feepurl.com\\u002fuvMjX",
            "from" : "GardenWalk Cleveland \\u003cinfo@gardenwalkcleveland.org\\u003e",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
