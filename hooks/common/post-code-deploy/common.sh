#!/bin/sh
#
# Cloud Hook: Common stuff :)
#
# Runs this bash script on any [env] once code is deployed.

site=$1
target_env=$2
drush_alias=$site'.'$target_env

echo "Update database:"
drush @$drush_alias updatedb -y

echo "Clearing cache:"
drush @$drush_alias cc all

echo "Reverting all features:"
drush @$drush_alias fra -y

echo "Clearing cache:"
drush @$drush_alias cc all
