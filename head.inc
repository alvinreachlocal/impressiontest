<?php
if(!$_SESSION) session_start();
$scorpion="";
if (isset($_GET['e'])) {
$_SESSION['env']= $_GET['e'];
}
if (isset($_GET['s'])) {
$_SESSION['env']= $_GET['s'];
}
if (isset($_GET['siteid'])) {
$_SESSION['siteid']= $_GET['siteid'];
}
if (isset($_GET['cdn'])) {
$_SESSION['cdn']= $_GET['cdn'];
}
if (isset($_GET['scorpion']) || $_SESSION['scorpion']) {
$_SESSION['scorpion']="true";
$scorpion ='data-source="c77d130cdb614c8497a9b22757aa6382"';

}
if (isset($_GET['c'])) {
$_SESSION['c']= $_GET['c'];
}

?>
