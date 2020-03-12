<center>
<form><a href="index.php">Home</a></form>

<?php

function trangle($radious){
	$pi = '3.1416';
	$area =$pi*$radious*$radious;
	echo "the Area of circle is :".$area;
}
 $n = $_GET['radious'];

 trangle($n);
?>
</center>