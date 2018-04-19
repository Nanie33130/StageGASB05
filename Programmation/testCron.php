<?php
include 'connect_base.php';

$cnx->query('replace into test values (curdate());');

?>
