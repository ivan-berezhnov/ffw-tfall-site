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

    $original_vocabulary = taxonomy_vocabulary_machine_name_load($machine_name);


    if (($original_vocabulary) == FALSE) {
        taxonomy_vocabulary_save($vocabulary);
    } else {
        drupal_set_message('Vocabulary already exists ' . $name, 'error');
        $vocabulary = $original_vocabulary;
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
 * Checks to see if term already exists in that vocabulary and saves the term if it doesn't already exist
 * Returns a new term with name and description properties in vocabulary $vid.
 */
function createTerm($vocabulary, $term_name, $term_description)
{
    $original_terms = taxonomy_get_term_by_name($term_name, $vocabulary->machine_name);

    if (count($original_terms) == 0) {
        $term = new stdClass();
        $term->name = $term_name;
        $term->description = $term_description;
        $term->format = "plain-text";
        $term->vid = $vocabulary->vid;
        taxonomy_term_save($term);
    }
    return $term;
}
