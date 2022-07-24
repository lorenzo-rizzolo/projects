<head>
    <meta name="viewport" content="width=device-width, initial-scale=0.1">
</head>
<style>
    
    body{
        text-align:center;
    }
</style>
<body>
<?php
foreach (glob("*") as $nomefile){
    /*if($nomefile!= "index.php"){
        //echo strtoupper(pathinfo($nomefile,PATHINFO_EXTENSION))."<br>";
        if(strtoupper(pathinfo($nomefile,PATHINFO_EXTENSION))=="JPG"){
            echo "<img class='jpg' src='".$nomefile."' alt='".$nomefile."'><br>" ;
        }
        if(strtoupper(pathinfo($nomefile,PATHINFO_EXTENSION))=="JPEG"){
            echo "<img class='jpg' src='".$nomefile."' alt='".$nomefile."'><br>" ;
        }
    }*/
    if(strtoupper(pathinfo($nomefile,PATHINFO_EXTENSION))=="JPEG" || strtoupper(pathinfo($nomefile,PATHINFO_EXTENSION))=="JPG"){
        echo "<img  src='".$nomefile."' alt='".$nomefile."'><br>" ;
    }elseif(strtoupper(pathinfo($nomefile,PATHINFO_EXTENSION))=="MP4"){
        echo "<video src='".$nomefile."' controls></video><br>";
    }
}
?>

</body>