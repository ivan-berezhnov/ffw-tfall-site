<?php

$constant_contact_block = module_invoke('constant_contact', 'block_view', '1');
$constant_contact_block['content']['submit']['#value'] = 'Subscribe to our newsletter';
unset($constant_contact_block['content']['captcha']);
print render($constant_contact_block['content']);
$constant_contact_block['content']['#printed'] = false;
