#!/bin/sh
#
# Cloud Hook: Common stuff :)
#

site=$1
target_env=$2
drush_alias=$site'.'$target_env

drush pm-enable video_embed_field -y

echo "Update database:"
drush @$drush_alias updatedb -y

echo "Clearing cache:"
drush @$drush_alias cc all

echo "Reverting all features:"
drush @$drush_alias fra -y

echo "Clearing cache:"
drush @$drush_alias cc all
