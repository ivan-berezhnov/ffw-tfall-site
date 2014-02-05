<?php
$constant_contact_block = module_invoke('constant_contact', 'block_view', '1');
print render($constant_contact_block['content']);
$constant_contact_block['content']['#printed'] = false;
