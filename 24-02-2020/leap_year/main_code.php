<center>
<?php
$year = $_GET['year'];

if ((($year %4 ==0)&&($year % 100 !=0))|| ($year % 400==0)) {
	echo $year." <h2>this year is a leap year</h2>";
}
else {
	echo $year." <h2>this is not a leap year</h2>";
}
?>
</center>