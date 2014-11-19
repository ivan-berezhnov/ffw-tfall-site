<?php
/**
 * @file
 * seo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function seo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/config/search/path
  $menu_links['management:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'parent_path' => 'admin/config/search',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('URL aliases');


  return $menu_links;
}
