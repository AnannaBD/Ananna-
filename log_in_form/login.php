<?php session_start();?>

<center>
	<form action="" method="post">
		<input type="text" name="username">
		<input type="password" name="password" >
		<input type="submit" name="action" value="login">
	</form>
</center>

<?php 
$_SESSION['user']='admin';
	if (isset($_POST['action'])) {
		$_SESSION['user']=$_POST['username'];
		
		setcookie('username',$_POST['username'],time()+((3600*24)*30),'login.php');

		header('location:index.php');
	}
 ?>

