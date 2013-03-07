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
      "REQUIRES" : [ "rules" ],
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
        }
      ]
    }
  }');
  return $items;
}
