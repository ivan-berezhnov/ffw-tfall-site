<?php
$constant_contact_block = module_invoke('constant_contact', 'block_view', '1');
$constant_contact_block['content']['cc_email_1']['#title_display'] = 'invisible';
$constant_contact_block['content']['submit']['#value'] = t('SIGN UP');
$constant_contact_block['content']['cc_email_1']['#attributes']['placeholder'] = t('Enter email address');
print render($constant_contact_block['content']);
$constant_contact_block['content']['#printed'] = false;
