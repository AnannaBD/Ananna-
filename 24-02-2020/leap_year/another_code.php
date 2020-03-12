<?php
// function to test if leap year
function checkLeapYr($year) {
$ret = (($year%400 == 0) || ($year%4 == 0 && $year%100 != 0)) ? true : false;
return $ret;
}
echo checkLeapYr(2016) ? "2016 is a leap year." : "2016 is not a leap year. ";
echo '<br/>';
echo checkLeapYr(2017) ? "2017 is a leap year." : "2017 is not a leap year. ";
?>