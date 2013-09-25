<?php
/**
 * Created by JetBrains PhpStorm.
 * User: harpnagra
 * Date: 2013-09-24
 * Time: 11:41 AM
 * To change this template use File | Settings | File Templates.
 */
//
//function supporters_taxonomy_initialize()
//{
//    $output = "<pre>test";
//    $output .= implode(",", taxonomy_get_term_by_name('news'));
//    $output .= taxonomy_get_term_by_name('tags');
//    $output .= "</pre>";
//
//
//
//    return $output;
//}
//

function create_new_vocabulary($name, $description, $machine_name)
{
    $vocabulary = new stdClass();
    $vocabulary->name = $name;
    $vocabulary->description = $description;
    $vocabulary->machine_name = $machine_name;
    taxonomy_vocabulary_save($vocabulary);

    return $vocabulary;
}













/**
 * Drupal tax
 * @param $name
 * @param $description
 * @param $machine_name
 * @return stdClass
 */
function initialize_taxonomy_vocabulary($name, $description, $machine_name)
{
    $vocabulary = new stdClass();
    $vocabulary->name = $name;
    $vocabulary->description = $description;
    $vocabulary->machine_name = $machine_name;
    taxonomy_vocabulary_save($vocabulary);

    return $vocabulary;
}

function supporters_taxonomy_remove_vocabulary($vocabulary_name)
{
    $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary_name);
    $vocabulary_vid = $vocabulary->vid;
    console.log("the vid is ". $vocabulary_vid);
    taxonomy_vocabulary_delete($vocabulary_vid);
}


/**
 * Returns a new term with random properties in vocabulary $vid.
 */
function createTerm($vocabulary, $term_name, $term_description) {
    $term = new stdClass();
    $term->name = $term_name;
    $term->description = $term_description;
    // Use the first available text format.
    $term->format = db_query_range('SELECT format FROM {filter_format}', 0, 1)->fetchField();
    $term->vid = $vocabulary->vid;
    taxonomy_term_save($term);
    return $term;
}

function create_vocabulary_settings_object($name, $description, $machine_name)
{
    $vocabulary = new stdClass();
    $vocabulary->name = $name;
    $vocabulary->description = $description;
    $vocabulary->machine_name = $machine_name;


    return $vocabulary;
}

