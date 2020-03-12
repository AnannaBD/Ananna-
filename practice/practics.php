<?php
function test_stat() {
static $ekta_variable = 2;
$ekta_variable++;
echo $ekta_variable;
echo "<br />";
}
test_stat();
test_stat();
test_stat();
?>