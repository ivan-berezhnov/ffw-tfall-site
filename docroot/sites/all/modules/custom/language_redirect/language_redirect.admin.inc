<?php

//AXXX
function language_redirect_config_form($form, &$form_state) {
  $form['description']['#markup'] = t('In all fields please use language codes that could be found in the Code column of the <a href="!url" target="_blank">language list</a>.', array(
    '!url' => url('admin/config/regional/language'),
  ));
  $form['language_redirect_temporary_disabled_languages'] = array(
    '#type' => 'textfield',
    '#title' => t('Temporary disabled languages'),
    '#description' => t('List of languages separated by commas which should redirect to the <em>Target language</em>.'),
    '#default_value' => variable_get('language_redirect_temporary_disabled_languages', ''),
  );
  $form['language_redirect_target_language'] = array(
    '#type' => 'textfield',
    '#title' => t('Target language'),
    '#default_value' => variable_get('language_redirect_target_language', ''),
  );
  return system_settings_form($form);
}
