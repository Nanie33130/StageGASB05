<?php
$cnx=mysqli_connect("panel.lixia.li","nanie_mlebeau","passf203","nanie_stagegasb05test")
or die("Impossible de se connecter");
$cnx->query("SET NAMES utf8");
echo "Connexion reussi";
?>