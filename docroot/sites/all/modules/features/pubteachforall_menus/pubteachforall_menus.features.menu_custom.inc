<?php
/**
 * @file
 * pubteachforall_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function pubteachforall_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-primary-navigation.
  $menus['menu-primary-navigation'] = array(
    'menu_name' => 'menu-primary-navigation',
    'title' => 'Primary Navigation',
    'description' => 'Primary Navigation',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-uber-nav.
  $menus['menu-uber-nav'] = array(
    'menu_name' => 'menu-uber-nav',
    'title' => 'Uber Nav',
    'description' => 'Uber Nav',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Primary Navigation');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('Uber Nav');
  t('User menu');


  return $menus;
}
