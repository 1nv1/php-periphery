<?php
if (!extension_loaded('periphery')) {
  echo "Error loading periphery wrapper!".PHP_EOL;
}
echo periphery_version().PHP_EOL;
?>
