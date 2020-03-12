<?php 
session_start(); 
$_SESSION['user'];
?>

<?php 
	if (isset($_SESSION['user'])) {
		header('location:dashboard.php');
	}else{	
		header('location:login.php');
	}

 ?>