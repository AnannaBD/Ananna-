<?php 

function calculation($n1,$n2, $n3 = 15){
$total = $n1 + $n2 + $n3;
echo "Result is $total <br>";
}
$a = 10;$b =25;
calculation($a,$b);
calculation(25,10);
calculation(85,95);

?>