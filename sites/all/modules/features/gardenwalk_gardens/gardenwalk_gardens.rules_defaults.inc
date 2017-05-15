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
      "LABEL" : "Notify on Application Submitted (Gardener and Garden Finders)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "mimemail" ],
      "ON" : { "node_insert" : [] },
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
        { "mimemail" : {
            "USING" : {
              "key" : "notify-submitted-gardenfinder-[node:nid]-[site:current-date]",
              "to" : "\\u003C?php print _get_neighborhood_garden_finder_email_addresses($node-\\u003Efield_neighborhood[\\u0027und\\u0027][0][\\u0027tid\\u0027]); ?\\u003E",
              "reply_to" : "[node:field-gardener-name] \\u003C[node:field-gardener-email]\\u003E",
              "subject" : "GardenWalk application for [node:field-neighborhood]: [node:field-gardener-addressfield:thoroughfare]",
              "body" : "Hi \\u003C?php print _get_neighborhood_garden_finder_names($node-\\u003Efield_neighborhood[\\u0027und\\u0027][0][\\u0027tid\\u0027]); ?\\u003E,\\r\\n\\r\\nA new garden GardenWalk Cleveland garden application has been submitted:\\r\\n\\r\\nNeighborhood: [node:field-neighborhood]\\r\\nGardener: [node:field-gardener-name]\\r\\nEmail: [node:field-gardener-email]\\r\\nPhone (home): [node:field-gardener-phone-home]\\r\\nPhone (cell): [node:field-gardener-phone-cell]\\r\\nGarden Address: [node:field_address]\\r\\n\\r\\nView this application at [node:url] to approve or deny the submission, and to edit garden details.\\r\\n\\r\\nYou should be able to reply to this message to respond to the gardener applicant, but please check to make sure the gardener\\u0027s email ends up in the \\u0022To:\\u0022 field on your message.\\r\\n\\r\\nThanks for helping make GardenWalk 2017 amazing!",
              "language" : [ "" ]
            },
            "PROVIDE" : { "send_status" : { "send_status_gardenfinder" : "Send status (Garden-finder)" } }
          }
        },
        { "mimemail" : {
            "USING" : {
              "key" : "notify-submitted-gardener-[node:nid]-[site:current-date]",
              "to" : "[node:field-gardener-name] \\u003C[node:field-gardener-email]\\u003E",
              "subject" : "GardenWalk Cleveland application received",
              "body" : "Hi [node:field-gardener-name],\\r\\n\\r\\nThank you for applying to show your garden in GardenWalk Cleveland 2017!\\r\\nA volunteer garden finder for [node:field-neighborhood] will review your application soon and let you know whether it has been accepted.\\r\\n\\r\\nGardenWalk Cleveland is organized by volunteers. If you are interested in helping out on GardenWalk weekend or in planning the event, please let us know -- http:\\/\\/www.gardenwalkcleveland.org\\/contact. And check out our Frequently Asked Questions -- http:\\/\\/www.gardenwalkcleveland.org\\/faq -- for more info.\\r\\n\\r\\nWe can\\u0027t wait to see you -- and hopefully your garden -- at GardenWalk 2017 on July 8th and 9th!\\r\\n\\r\\nSincerely,\\r\\n\\r\\nThe GardenWalk Cleveland team\\r\\n\\r\\n--\\r\\nLike us on Facebook - https:\\/\\/www.facebook.com\\/gardenwalk.cleveland\\r\\nFollow us on Twitter - https:\\/\\/twitter.com\\/GardenWalkCle\\r\\nSubscribe to our Mailing List - http:\\/\\/eepurl.com\\/uvMjX",
              "language" : [ "" ]
            },
            "PROVIDE" : { "send_status" : { "send_status_gardener" : "Send status (Gardener)" } }
          }
        }
      ]
    }
  }');
  $items['rules_notify_gardener_on_garden_approved'] = entity_import('rules_config', '{ "rules_notify_gardener_on_garden_approved" : {
      "LABEL" : "Notify Gardener on Garden Approved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "workflow_rules" ],
      "ON" : { "workflow_state_changed" : [] },
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
            "message" : "Hi [node:field-gardener-name],\\r\\n\\r\\nCongratulations!\\r\\nYour garden GardenWalk Cleveland 2017 application for \\u0022[node:title]\\u0022 has been approved.\\r\\n\\r\\nThe volunteer garden finder for the [node:field-neighborhood] neighborhood will be in touch with any further concerns.\\r\\n\\r\\nPlease read through our Frequently Asked Questions -- http:\\/\\/www.gardenwalkcleveland.org\\/faq -- and let us know if you have any further questions. If you are interested in volunteering on GardenWalk weekend or in helping plan the event, please let us know.\\r\\n\\r\\nWe can\\u0027t wait to meet you and your garden at GardenWalk Cleveland 2017, on July 8th and 9th!\\r\\n\\r\\nSincerely,\\r\\n\\r\\nThe GardenWalk Cleveland team\\r\\n\\r\\n--\\r\\nLike us on Facebook - https:\\/\\/www.facebook.com\\/gardenwalk.cleveland\\r\\nFollow us on Twitter - https:\\/\\/twitter.com\\/GardenWalkCle\\r\\nSubscribe to our Mailing List - http:\\/\\/eepurl.com\\/uvMjX",
            "from" : "GardenWalk Cleveland \\u003Cinfo@gardenwalkcleveland.org\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
