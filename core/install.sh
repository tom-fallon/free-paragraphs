drush si standard -y --db-url=mysql://free-user:password@127.0.0.1/free-paragraphs --site-name=core --account-name=administrator --account-pass=password --notify
drush en free_paragraphs_master_core -y
drush fra -y
drush cc all
