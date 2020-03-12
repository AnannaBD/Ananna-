<center>
<form>
	<a href="index.php">Go Back</a>
</form>

<?php
function number($n){
 for($i=2; $i<$n; $i++)
   {
      if($n % $i ==0)
	      {
		   return 0;
		  }
    }
  return 1;
   }
$a = number($_GET['number']);
if ($a==0)
echo '<h1>This is not a Prime Number</h1>';
else
echo '<h1>This is a Prime Number</h1>';
?>
</center>