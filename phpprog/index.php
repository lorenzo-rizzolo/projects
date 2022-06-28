<body>
    <title>Home</title>
    <div class="all">
    <link rel="icon" type="image/x-icon" href="https://lorenzo-rizzolo.github.io/projects/phpprog/favicon.ico">
    <h1>Puoi caricare uno o più file fino a 500Mb</h1>
    <p class="adv">Per selezionare più files tieni premuto <span style="text-decoration: underline;">Ctrl</span> durante la selezione. <br>
    Se il file esiste già vi uscir&agrave; la scritta "il file esiste gi&agrave;! <br>
Altri errori possono essere generati dal fatto che il file è troppo grande!</p>
    <link rel="stylesheet" href="css/style.css">
    <form method="post" enctype="multipart/form-data">
        <input class="default" type="file" name="file" multiple>
        <input class="default" type="submit" value="Carica">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD']=="POST"){
            $upload_path = "";
            $filename = basename($_FILES['file']['name']);
            $target_file = $upload_path.$filename;
            $check = true;
            $output = "";

            if(file_exists($target_file) && $_FILES['file']['name']!=null){
                $output = "Il file esiste già! <br> Ho provveduto a sostituirlo";
                unlink($target_file);
            }
            $ext = strtoupper(pathinfo($target_file,PATHINFO_EXTENSION));
            
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
        
        <div class="files">
        
        <?php
        echo "<p class='scan'>La cartella<span class='percorso'> Home </span>contiene:</p>";
        $count = 0;
        echo "<button onclick=window.open('newfolder.php','_self')>Crea Cartella</button><button onclick=window.open('deletefolder.php','_self')>Elimina file/cartelle</button>";
        echo "<form method='post'>";
        //echo "<br><input type='submit' class='check' name='submit' value='Elimina File\nSelezionati'>";
        foreach (glob("*") as $nomefile) {
            if($nomefile!="deletefolder.php"&&$nomefile!="cartelle_imp" && $nomefile!="newfolder.php"&& $nomefile!="https___26f4-37-103-135-64.eu.ngrok.io_phpprog_ - Google Chrome 2022-06-19 23-39-12.mp4" && $nomefile!="css" && $nomefile!="favicon.ico"&& $nomefile!="index.php"&& $nomefile!="info server.txt"&& $nomefile!="upload.php"&& $nomefile!="prove" && $nomefile!="uploads"){
                
                if(is_file($nomefile)){
                    $n = $count+1000000;
                    echo  "<br><img src='https://lorenzo-rizzolo.github.io/projects/phpprog/css/file.png'><span name='".$n."'>".$nomefile."</span><a class='opt' href='".$nomefile."' download><img src='https://lorenzo-rizzolo.github.io/projects/phpprog/css/download.png'></a>";
                    $count += 1;
                }else{
                    echo "<br><img src='https://lorenzo-rizzolo.github.io/projects/phpprog/css/cartella.png'><a href='".$nomefile."/index.php'>".$nomefile."</a>";
                }
               
            }
            
        }
        //echo "<br><input class='check' type='submit' name='submit' value='Elimina File\nSelezionati'>";
        echo "</form>";
        ?>
        </div>
        
    </div>
</body>