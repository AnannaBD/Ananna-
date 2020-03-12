<?php session_start(); ?>

<?php 
	// if (!isset($_SESSION['user'])) {	
	// 	header('location:login.php');
	// }
	echo $_COOKIE['username'];
 ?>
<center>
	<h1>Hello, <?php echo $_SESSION['user'];?> you are Welcom</h1>
	<hr>
	 <a href="logout.php">Logout</a>
</center>