<?php

$dbhost = "fdb1032.awardspace.net";
$dbuser = "4448257_login";
$dbpass = "So@101206";
$dbname = "4448257_login";

if (!$con = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname)) {

	die("failed to connect!");
}
