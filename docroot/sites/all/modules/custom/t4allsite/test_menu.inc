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

    $vocabulary = create_new_vocabulary(
        "Supporter Levels",
        "Taxonomy for different levels of supporters.",
        "supporter_levels"
    );

    createTerm($vocabulary, "Global Champions", "Our Global Champions have committed at least $1million in funding annually to Teach for All.");
    createTerm($vocabulary, "Global Partners", "Our Global Partners have committed at least $500,000 in funding annually to Teach for All.");
    createTerm($vocabulary, "Global Supporters", "Our Global Supporters have committed at least $250,000 in funding annually to Teach for All.");
    createTerm($vocabulary, "Friends of Teach For All", "Our Friends of Teach For All have committed at least $5,000 in funding annually or provided other critical support to Teach for All.");

    $output = "Initialized supporter vocabulary";
    return $output;
}

function remove_supporter_vocabulary()
{
    $output = "removed supporters";

    module_load_include('inc', 't4allsite', 'test_functions');
    supporters_taxonomy_remove_vocabulary("supporter_levels");

    return $output;
}
