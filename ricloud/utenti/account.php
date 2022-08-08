<html lang="it">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Account</title>
</head>
<body>
    <button onclick="window.open('admin-admin/','_self');">Torna ad Admin</button><br>
    <?php
    $i=0;
    foreach (glob("*") as $utente){
        if(is_dir($utente)){
            echo "<li>".$utente."</li>";
            $i+=1;
        }
    }
    echo "Account: ".$i;
    ?>
</body>
</html>