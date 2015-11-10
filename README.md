# free-paragraphs

## Installation

The simplest way to install the site is to create a database with the following details.

Db Name: free-paragraphs
User: free-user
Password: password

Once this is complete

copy your sites/default/default.settings.php
rename it to settings.php and add the following block of code

$databases = array (  
  'default' =>  
  array (  
    'default' =>  
    array (  
      'database' => 'free-paragraphs',  
      'username' => 'free-user',  
      'password' => 'password',  
      'host' => 'localhost',  
      'port' => '',  
      'driver' => 'mysql',  
      'prefix' => '',  
    ),  
  ),  
);  

Finally go to the Drupal root and run.  

install.sh

If you don't wish to use the install.sh

You can skip creating the settings.php, and instead install the site like default.

Enable features  
Enable free_paragraphs_master_core  
Revert all features.  

### Dependencies

Drush (if using .install.sh)
