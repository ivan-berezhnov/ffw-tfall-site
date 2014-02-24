<?php
/**
 * Check to see if menu has been rebuilt after views_invalidate_cache (updating a view).
 * This is used to rebuild the custom pages created in the misc.module for news, news/latest, network-learning, network-learning/latest,
 * and contact-thank-you custom pages created in the misc_menu function
 *
 */
$is_the_menu_rebuilt = variable_get('custom_node_menu_rebuilt');
if($is_the_menu_rebuilt == FALSE){
  menu_rebuild();
  variable_set('custom_node_menu_rebuilt', TRUE);
  drupal_goto(current_path());
}
