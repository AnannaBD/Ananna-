<?php

function trangle($base,$height){
	$area =($base* $height)*0.5;
	echo "the Area of Triangle is :".$area;
}
 $n1 = $_GET['base'];
 $n2 = $_GET['height'];

 trangle($n1,$n2);
?>