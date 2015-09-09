<?php

if (getenv('AMAZEEIO_SITE_URL')) {
  $options['uri'] = 'http://' . getenv('AMAZEEIO_SITE_URL');
}
