<?php

$sitename = 'teachforall_org';   //use the username on our servers like testsite_ch
$options['newrelic-api-key'] = 'CHANGEME';
$options['deploy-repository'] = 'pubteach4all@svn-3224.prod.hosting.acquia.com:pubteach4all.git';

// - And we load the aliases file here
global $aliases_stub;
if (empty($aliases_stub)) {
  $aliases_stub = file_get_contents('https://raw.githubusercontent.com/AmazeeLabs/devops/master/drush-deployment/aliases.drushrc.php.stub?' . rand(0, 99999999999));
}
eval($aliases_stub);
