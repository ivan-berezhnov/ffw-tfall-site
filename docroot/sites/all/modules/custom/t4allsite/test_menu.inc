<?php
/**
 *
 * functions to allow testing of php code before adding to module.
 *
 */

/**
 * @return array
 * menu items
 */
function t4allsite_menu()
{
    $items = array();
    $items['admin/test'] = array(
        'title' => t('Admin Test'),
        'page callback' => 'initialize_supporter_vocabulary',
        'access arguments' => array('access administration pages'),
        'type' => MENU_CALLBACK,
    );

    $items['admin/reset'] = array(
        'title' => t('Admin Reset'),
        'page callback' => 'remove_supporter_vocabulary',
        'access arguments' => array('access administration pages'),
        'type' => MENU_CALLBACK,
    );

    return $items;

}

/**
 * Developers can use to test their functions.
 *
 */
function initialize_supporter_vocabulary()
{
    module_load_include('inc', 't4allsite', 'test_functions');
   // $output = "hello";
    $vocabulary = create_new_vocabulary(
        "Supporter Levels",
        "Taxonomy for different levels of supporters.",
        "supporter_levels"
    );

    console.log($vocabulary);

    createTerm($vocabulary, "Global Champions", "Our Global Champions have committed at least $1million in funding annually to Teach for All.");

    $output = "initialize_supporter_vocabulary";
    return $output;
}


function remove_supporter_vocabulary()
{
    $output = "removed supporters";

    module_load_include('inc', 't4allsite', 'test_functions');
    supporters_taxonomy_remove_vocabulary("supporter_levels");

    return $output;
}















/**
 * Implements hook_menu_alter().
 */
//function t4allsite_menu_alter(&$items) {
//    // Generating the unapproved comment count on every page load is a bad idea.
//    $items['admin/content/comment/approval']['title callback'] = 'forest_site_comment_count_unpublished';
//}

/**
 * Menu callback.
// */
//function t4allsite_comment_count_unpublished() {
//    return t('Unapproved comments');
//}

/**
 * Implements hook_theme().
 * @author Alex
 */
//function t4allsite_theme($existing, $type, $theme, $path) {
//    $themes = array();
//
//    $themes['forest_site__pages__mtg_homepage'] = array(
//        'template' => 'templates/mtg-homepage',
//        'file' => 'includes/forest_site.themes.inc',
//    );
//
//    $themes['forest_site__pages__dnd_homepage'] = array(
//        'template' => 'templates/dnd-homepage',
//    );
//
//    $themes['forest_site__pages__all_homepage'] = array(
//        'template' => 'templates/all-homepage',
//    );
//
//    $themes['forest_site_homepage'] = array(
//        'template' => 'templates/forest_site_homepage',
//        'arguments' => array('type' => array()),
//        'file' => 'includes/forest_site.themes.inc',
//        //'preprocess functions' => array('template_preprocess', 'forest_site_preprocess_forest_homepage'),
//    );
//    return $themes;
//}



