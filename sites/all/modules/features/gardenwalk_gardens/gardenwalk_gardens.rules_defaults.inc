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
            "to" : "\\u003C?php print _get_neighborhood_garden_finder_email_addresses($node-\\u003Efield_neighborhood[\\u0027und\\u0027][0][\\u0027tid\\u0027]); ?\\u003E",
            "subject" : "GardenWalk application for [node:field-neighborhood]: [node:field-gardener-addressfield:thoroughfare]",
            "message" : "Hi \\u003C?php print _get_neighborhood_garden_finder_names($node-\\u003Efield_neighborhood[\\u0027und\\u0027][0][\\u0027tid\\u0027]); ?\\u003E,\\u000D\\u000A\\u000D\\u000AA new garden GardenWalk Cleveland garden application has been submitted:\\u000D\\u000A\\u000D\\u000ANeighborhood: [node:field-neighborhood]\\u000D\\u000AGardener: [node:field-gardener-name]\\u000D\\u000AEmail: [node:field-gardener-email]\\u000D\\u000APhone (home): [node:field-gardener-phone-home]\\u000D\\u000APhone (cell): [node:field-gardener-phone-cell]\\u000D\\u000AGarden Address: [node:field_address]\\u000D\\u000A\\u000D\\u000AView this application at [node:url] to approve or deny the submission, and to edit garden details.\\u000D\\u000A\\u000D\\u000AReply to this message to respond to the gardener applicant.\\u000D\\u000A\\u000D\\u000AThanks for helping make GardenWalk 2014 amazing!",
            "from" : "[node:field-gardener-name] \\u003C[node:field-gardener-email]\\u003E",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "\\u0022[node:field-gardener-name]\\u0022 \\u003C[node:field-gardener-email]\\u003E",
            "subject" : "GardenWalk Cleveland application received",
            "message" : "Hi [node:field-gardener-name],\\u000D\\u000A\\u000D\\u000AThank you for applying to show your garden in GardenWalk Cleveland 2014!\\u000D\\u000AA volunteer garden finder for [node:field-neighborhood] will review your application soon and let you know whether it has been accepted.\\u000D\\u000A\\u000D\\u000AGardenWalk Cleveland is organized by volunteers. If you are interested in helping out on GardenWalk weekend or in planning the event, please let us know -- http:\\u002F\\u002Fwww.gardenwalkcleveland.org\\u002Fcontact. And check out our Frequently Asked Questions -- http:\\u002F\\u002Fwww.gardenwalkcleveland.org\\u002Ffaq -- for more info.\\u000D\\u000A\\u000D\\u000AWe can\\u0027t wait to see you -- and hopefully your garden -- at GardenWalk 2014 on July 12th and 13th!\\u000D\\u000A\\u000D\\u000ASincerely,\\u000D\\u000A\\u000D\\u000AThe GardenWalk Cleveland team\\u000D\\u000A\\u000D\\u000A--\\u000D\\u000ALike us on Facebook - https:\\u002F\\u002Fwww.facebook.com\\u002Fgardenwalk.cleveland\\u000D\\u000AFollow us on Twitter - https:\\u002F\\u002Ftwitter.com\\u002FGardenWalkCle\\u000D\\u000ASubscribe to our Mailing List - http:\\u002F\\u002Feepurl.com\\u002FuvMjX",
            "from" : "GardenWalk Cleveland \\u003Cinfo@gardenwalkcleveland.org\\u003E",
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
            "to" : "\\u0022[node:field-gardener-name]\\u0022 \\u003C[node:field-gardener-email]\\u003E",
            "subject" : "GardenWalk Cleveland: Application Approved!",
            "message" : "Hi [node:field-gardener-name],\\u000D\\u000A\\u000D\\u000ACongratulations!\\u000D\\u000AYour garden application for GardenWalk Cleveland 2014 has been approved.\\u000D\\u000A\\u000D\\u000AThe garden address you submitted is:\\u000D\\u000A[node:field_address]\\u000D\\u000A\\u000D\\u000AThe volunteer garden finder for the [node:field-neighborhood] neighborhood will be in touch with any further concerns.\\u000D\\u000A\\u000D\\u000APlease read through our Frequently Asked Questions -- http:\\u002F\\u002Fwww.gardenwalkcleveland.org\\u002Ffaq -- and let us know if you have any further questions. If you are interested in volunteering on GardenWalk weekend or in helping plan the event, please let us know.\\u000D\\u000A\\u000D\\u000AWe can\\u0027t wait to meet you and your garden at GardenWalk Cleveland 2014, on July 12th and 13th!\\u000D\\u000A\\u000D\\u000ASincerely,\\u000D\\u000A\\u000D\\u000AThe GardenWalk Cleveland team\\u000D\\u000A\\u000D\\u000A--\\u000D\\u000ALike us on Facebook - https:\\u002F\\u002Fwww.facebook.com\\u002Fgardenwalk.cleveland\\u000D\\u000AFollow us on Twitter - https:\\u002F\\u002Ftwitter.com\\u002FGardenWalkCle\\u000D\\u000ASubscribe to our Mailing List - http:\\u002F\\u002Feepurl.com\\u002FuvMjX",
            "from" : "GardenWalk Cleveland \\u003Cinfo@gardenwalkcleveland.org\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
