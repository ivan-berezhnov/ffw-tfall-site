<?php
/**
 * @file
 * slc.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slc_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slc_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function slc_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: slc_featured
  $nodequeues['slc_featured'] = array(
    'name' => 'slc_featured',
    'title' => 'SLC Featured',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'student_leaders_campaign',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: slc_slider
  $nodequeues['slc_slider'] = array(
    'name' => 'slc_slider',
    'title' => 'SLC Slider',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'student_leaders_campaign',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function slc_node_info() {
  $items = array(
    'student_leaders_campaign' => array(
      'name' => t('Student Leaders Campaign'),
      'base' => 'node_content',
      'description' => t('<h1>Share Your Story</h1>
How are you helping students build their leadership? We want to know about acts of student leadership, big and small. How have your students shown their ability to be problem solvers, critical thinkers, effective communicators, empathetic friends, creative innovators, or collaborative teammates? What role did you play in cultivating these skills and actions as a teacher, mentor, coach, collaborator, or friend? What did you and your students learn that will endure beyond today? Please take a few minutes to submit your story below and share it with the Teach For All community. Remember to read the <a href="/student-leaders-campaign-faq" target="_blank">Frequently Asked Questions </a> section and <a hred="/student-leaders-campaign-contact-form" target="_blank">Contact Us </a> if you have additional questions. '),
      'has_title' => '1',
      'title_label' => t('Brief Project Headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
