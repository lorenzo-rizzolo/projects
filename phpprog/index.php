<body>
    <div class="all">
    <h1>Puoi caricare uno o più file fino a 500Mb</h1>
    <p class="adv">Per selezionare più files tieni premuto <span style="text-decoration: underline;">Ctrl</span> durante la selezione. <br>
    Se il file esiste già vi uscir&agrave; la scritta "il file esiste gi&agrave;! <br>
Altri errori possono essere generati dal fatto che il file è troppo grande!</p>
    <link rel="stylesheet" href="css/style.css">
    <form method="post" enctype="multipart/form-data">
        <input type="file" name="file" multiple><br>
        <input type="submit" value="Carica">
    </form>
    <?php
        if($_SERVER['REQUEST_METHOD']=="POST"){
            $upload_path = "uploads/";
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
        <p class="scan">La cartella contiene:</p>
        <?php
        foreach (glob("uploads/*") as $nomefile) {
            echo  "<br>".$nomefile."<a style='float:right; color:gold; text-decoration:none; text-transform:uppercase;' href='".$nomefile."' download>Scarica</a>";
        }
        ?>
        </div>
        
    </div>
</body>