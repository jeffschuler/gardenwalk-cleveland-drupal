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
            "message" : "Hi \\u003C?php print _get_neighborhood_garden_finder_names($node-\\u003Efield_neighborhood[\\u0027und\\u0027][0][\\u0027tid\\u0027]); ?\\u003E,\\r\\n\\r\\nA new garden GardenWalk Cleveland garden application has been submitted:\\r\\n\\r\\nNeighborhood: [node:field-neighborhood]\\r\\nGardener: [node:field-gardener-name]\\r\\nEmail: [node:field-gardener-email]\\r\\nPhone (home): [node:field-gardener-phone-home]\\r\\nPhone (cell): [node:field-gardener-phone-cell]\\r\\nGarden Address: [node:field_address]\\r\\n\\r\\nView this application at [node:url] to approve or deny the submission, and to edit garden details.\\r\\n\\r\\nReply to this message to respond to the gardener applicant.\\r\\n\\r\\nThanks for helping make GardenWalk 2013 amazing!",
            "from" : "[node:field-gardener-name] \\u003C[node:field-gardener-email]\\u003E",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "[node:field-gardener-name] \\u003C[node:field-gardener-email]\\u003E",
            "subject" : "GardenWalk Cleveland application received",
            "message" : "Hi [node:field-gardener-name],\\r\\n\\r\\nThank you for applying to show your garden in GardenWalk Cleveland 2013!\\r\\nA volunteer garden finder for [node:field-neighborhood] will review your application soon and let you know whether it has been accepted.\\r\\n\\r\\nGardenWalk Cleveland is organized by volunteers. If you are interested in helping out on GardenWalk weekend or in planning the event, please let us know -- http:\\/\\/www.gardenwalkcleveland.org\\/contact. And check out our Frequently Asked Questions -- http:\\/\\/www.gardenwalkcleveland.org\\/faq -- for more info.\\r\\n\\r\\nWe can\\u0027t wait to see you -- and hopefully your garden -- at GardenWalk 2013 on June 22nd \\u0026 23rd!\\r\\n\\r\\nSincerely,\\r\\n\\r\\nThe GardenWalk Cleveland team\\r\\n\\r\\n--\\r\\nLike us on Facebook - https:\\/\\/www.facebook.com\\/gardenwalk.cleveland\\r\\nFollow us on Twitter - https:\\/\\/twitter.com\\/GardenWalkCle\\r\\nSubscribe to our Mailing List - http:\\/\\/eepurl.com\\/uvMjX",
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
            "to" : "[node:field-gardener-name] \\u003C[node:field-gardener-email]\\u003E",
            "subject" : "GardenWalk Cleveland: Application Approved!",
            "message" : "Hi [node:field-gardener-name],\\r\\n\\r\\nCongratulations!\\r\\nYour garden application for GardenWalk Cleveland 2013 has been approved.\\r\\n\\r\\nThe garden address you submitted is:\\r\\n[node:field_address]\\r\\n\\r\\nThe volunteer garden finder for the [node:field-neighborhood] neighborhood will be in touch with any further concerns.\\r\\n\\r\\nPlease read through our Frequently Asked Questions -- http:\\/\\/www.gardenwalkcleveland.org\\/faq -- and let us know if you have any further questions. If you are interested in volunteering on GardenWalk weekend or in helping plan the event, please let us know.\\r\\n\\r\\nWe can\\u0027t wait to meet you and your garden at GardenWalk Cleveland 2013, on June 22nd \\u0026 23rd!\\r\\n\\r\\nSincerely,\\r\\n\\r\\nThe GardenWalk Cleveland team\\r\\n\\r\\n--\\r\\nLike us on Facebook - https:\\/\\/www.facebook.com\\/gardenwalk.cleveland\\r\\nFollow us on Twitter - https:\\/\\/twitter.com\\/GardenWalkCle\\r\\nSubscribe to our Mailing List - http:\\/\\/eepurl.com\\/uvMjX",
            "from" : "GardenWalk Cleveland \\u003Cinfo@gardenwalkcleveland.org\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
