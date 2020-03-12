<center>
<form><a href="index.php">Home</a></form>

<?php

$number = $_GET['number'];

      $fact = 1;
for($i=$number; $i>=1 ; $i--)
      {
        $fact = $fact * $i;  
        }

        echo "the factorial of $number is : ".$fact . "<br>";  

?> </center>