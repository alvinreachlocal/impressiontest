<?PHP
if ($_SESSION['siteid'] && $_SESSION['siteid']!="") {
$sid = $_SESSION['siteid'];
}
else {
//$sid = "f599ed5c-9a53-4044-94b6-eebc6a2c001e";
//$sid = "fc62c28f-3f38-4812-85c3-b3fe1329dba8";
$sid = "84c16c1f-df93-440a-a569-3eacfd834396";

}
//84c16c1f-df93-440a-a569-3eacfd834396
echo '<script type="text/javascript">var rl_siteid = "'.$sid.'"; </script>';

$server = "static.rlcdn.net";
$capjs = '/capture_static/mms/mms.js?';
//wac.b90c.edgecastcdn.net/80B90C/capture-qa/capture_configs/b4c/3a4/0ea/7d845e0b8bd3835449492d6.js
//$server = "www.capturetest.com";

//$capjs = '/mms.js';

if ($_SESSION['cdn']) {
$server=$_SESSION['cdn'];
}

if ($_SESSION['env']=="qa" || $_SESSION['env']=="QA") {
$server = "qweb351.dyn.wh.reachlocal.com";
//$server = "wac.b90c.edgecastcdn.net/80B90C/capture-qa";
$capjs = '/capture_static/mms/mms.js?';
$capjs .= 'e=QA';

}
if ($_SESSION['env']=="s") {
$server = "capture.services.dev:3000";
$capjs = '/assets/mms.js';
}
if ($_SESSION['c']) {
$capjs .= 'c='.$_SESSION['c'];
}

$capjs .= '" async="async"></script>';
echo '<script type="text/javascript" src="//'.$server.$capjs;
echo '<script type="text/javascript" src="/js/qacapture.js"></script>';
?>
