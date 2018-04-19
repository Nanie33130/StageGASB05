<?php
include 'connect_base.php';
$result = $cnx->query('SELECT mail, prenom FROM personnes WHERE id<5');
if($result){
// Cycle through results
	while ($row = $result->fetch_object()){
		$mail =$row->mail;
		$prenom =$row->prenom;
		// Le message
		$message="Bonjour ".$prenom."!\r\n"."Le club du GASB05 te souhaite un joyeux anniversaire !\r\n De la part de tout GASB05 ! \r\n \r\n Ceci est un mail automatique, ne pas répondre merci !";
		//Dans le cas où nos lignes comportent plus de 70 caractères, nous les coupons en utilisant wordwrap()
		$message = wordwrap($message, 70, "\r\n");
		$headers = 'From: Ton club de Basket' . "\r\n" .'Reply-To: no-reply@gasb05.com' . "\r\n" .'X-Mailer: PHP/' . phpversion();
		// Envoi du mail
		mail($mail, 'Joyeux Anniversaire', $message, $headers);
	}
}
?>
