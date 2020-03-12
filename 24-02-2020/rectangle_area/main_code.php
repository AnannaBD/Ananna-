
<center>
<?php
 function rectangle($n1,$n2){
 	$area = $n1 * $n2 ;
 	echo "the area of this rectangle is :" .$area;
 }
$length = $_GET['length'];
$width = $_GET['width'];

rectangle($length,$width);


?>
</center>