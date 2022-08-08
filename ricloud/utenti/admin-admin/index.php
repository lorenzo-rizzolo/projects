<html lang="it">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="http://domoticplace.sytes.net/ricloud/ricloud/utenti.css">
    <title>Spazio Utente</title>
</head>
<body>
    <header>
        <span class="title">RiCloud</span><span class="web">.sytes.net</span>
        <hr>
    </header>
    
    <div class="menu">
        <a href="http://domoticplace.sytes.net/ricloud/ricloud/index.php">Home</a>
        <a href="http://domoticplace.sytes.net/ricloud/ricloud/accedi.php">Cambia Account</a>
        <a href="http://domoticplace.sytes.net/ricloud/ricloud/info.php">Info</a>
        <a href="http://domoticplace.sytes.net/ricloud/ricloud/utenti/account.php">account registrati</a>
    </div>
    <div class="folder-name" >Nome cartella: <span>Cartella Principale</span></div>
    <div class="up-files">
    <form method="post" enctype="multipart/form-data">
        <input class="default" type="file" name="file" multiple>
        <input class="default" type="submit" value="Carica">
    </form>
    <button onclick="window.open('index.php','_self')">Aggiorna pagina</button>
    <?php
        if($_SERVER['REQUEST_METHOD']=="POST"){
            $upload_path = "./";
            $filename = basename($_FILES['file']['name']);
            $target_file = $upload_path.$filename;
            $check = true;
            $output = "";

            if(file_exists($target_file) && $_FILES['file']['name']!=null){
                $output = "Il file esiste già! <br> Ho provveduto a sostituirlo";
                unlink($target_file);
            }
        

            if($_FILES['file']['name']==null){
                $output = "<p class='adv'>Campo di caricamento vuoto</p>";
            }

            if($check){
                if(!move_uploaded_file($_FILES['file']['tmp_name'],$target_file)){
                    echo "upload fallito";
                }else{
                    echo $output."<br>file caricato!";
                }
            }else{
                echo $output;
            }
        }
    ?>
    </div>
    <div class="file">
    <?php
        foreach(glob("*") as $file){
            if($file!="index.php"){
                echo "<li>".$file."<a href='".$file."' download><img src='http://domoticplace.sytes.net/ricloud/ricloud/download.png'></img></a></li>";
            }
        }
    ?>
    </div>
</body>
</html>