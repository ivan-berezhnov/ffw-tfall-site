<?php
/**
 * Testing functions for development purposes
 *
 */


function create_new_vocabulary($name, $description, $machine_name)
{
    $vocabulary = new stdClass();
    $vocabulary->name = $name;
    $vocabulary->description = $description;
    $vocabulary->machine_name = $machine_name;
    if (!(taxonomy_vocabulary_machine_name_load($machine_name))) {
        taxonomy_vocabulary_save($vocabulary);
    }
    else{
//        $vocabulary
    }
    return $vocabulary;
}

function supporters_taxonomy_remove_vocabulary($vocabulary_name)
{
    $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary_name);
    $vocabulary_vid = $vocabulary->vid;
    taxonomy_vocabulary_delete($vocabulary_vid);
}


/**
 * Returns a new term with name and description properties in vocabulary $vid.
 */
function createTerm($vocabulary, $term_name, $term_description)
{
    $term = new stdClass();
    $term->name = $term_name;
    $term->description = $term_description;
    // Use the first available text format.
    $term->format = db_query_range('SELECT format FROM {filter_format}', 0, 1)->fetchField();
    $term->vid = $vocabulary->vid;
    taxonomy_term_save($term);
    return $term;
}
