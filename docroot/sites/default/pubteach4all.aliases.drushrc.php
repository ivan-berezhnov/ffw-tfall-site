<?php

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}
// Site pubteach4all, environment dev
$aliases['dev'] = array(
  'root' => '/var/www/html/pubteach4all.dev/docroot',
  'ac-site' => 'pubteach4all',
  'ac-env' => 'dev',
  'ac-realm' => 'prod',
  'uri' => 'pubteach4alldev.prod.acquia-sites.com',
  'remote-host' => 'staging-5808.prod.hosting.acquia.com',
  'remote-user' => 'pubteach4all.dev',
  'path-aliases' => array(
    '%drush-script' => 'drush' . $drush_major_version,
  )
);
$aliases['dev.livedev'] = array(
  'parent' => '@pubteach4all.dev',
  'root' => '/mnt/gfs/pubteach4all.dev/livedev/docroot',
);

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}
// Site pubteach4all, environment prod
$aliases['prod'] = array(
  'root' => '/var/www/html/pubteach4all.prod/docroot',
  'ac-site' => 'pubteach4all',
  'ac-env' => 'prod',
  'ac-realm' => 'prod',
  'uri' => 'pubteach4all.prod.acquia-sites.com',
  'remote-host' => 'ded-6129.prod.hosting.acquia.com',
  'remote-user' => 'pubteach4all.prod',
  'path-aliases' => array(
    '%drush-script' => 'drush' . $drush_major_version,
  )
);
$aliases['prod.livedev'] = array(
  'parent' => '@pubteach4all.prod',
  'root' => '/mnt/gfs/pubteach4all.prod/livedev/docroot',
);

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}
// Site pubteach4all, environment ra
$aliases['ra'] = array(
  'root' => '/var/www/html/pubteach4all.ra/docroot',
  'ac-site' => 'pubteach4all',
  'ac-env' => 'ra',
  'ac-realm' => 'prod',
  'uri' => 'pubteach4allra.prod.acquia-sites.com',
  'remote-host' => 'staging-8838.prod.hosting.acquia.com',
  'remote-user' => 'pubteach4all.ra',
  'path-aliases' => array(
    '%drush-script' => 'drush' . $drush_major_version,
  )
);
$aliases['ra.livedev'] = array(
  'parent' => '@pubteach4all.ra',
  'root' => '/mnt/gfs/pubteach4all.ra/livedev/docroot',
);

if (!isset($drush_major_version)) {
  $drush_version_components = explode('.', DRUSH_VERSION);
  $drush_major_version = $drush_version_components[0];
}
// Site pubteach4all, environment test
$aliases['test'] = array(
  'root' => '/var/www/html/pubteach4all.test/docroot',
  'ac-site' => 'pubteach4all',
  'ac-env' => 'test',
  'ac-realm' => 'prod',
  'uri' => 'pubteach4allstg.prod.acquia-sites.com',
  'remote-host' => 'staging-5807.prod.hosting.acquia.com',
  'remote-user' => 'pubteach4all.test',
  'path-aliases' => array(
    '%drush-script' => 'drush' . $drush_major_version,
  )
);
$aliases['test.livedev'] = array(
  'parent' => '@pubteach4all.test',
  'root' => '/mnt/gfs/pubteach4all.test/livedev/docroot',
);

