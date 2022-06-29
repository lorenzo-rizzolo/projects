<?php
echo "<a style='font-size:150%;' href='index.php'>&#8592;Back</a>";
?>
<div class='title'><p>inserisci il nome della cartella o del file che vuoi eliminare.<br> gli elementi presenti nella directory sono elencati qui sotto. <br><hr><br> <span style=" text-decoration:underline;">Se la cartella ha delle altre sottocartelle è opportuno andare a cancellare ogni singola cartella alla volta, mentre se contiene dei file essi si elimineranno automaticamente.  </span></p></div>
<form method="POST">
  <link  rel="stylesheet" href="https://lorenzo-rizzolo.github.io/projects/phpprog/css/style.css">
<div class="increadir">
<input class="cartella" type="text" name="cartella" placeholder="file o cartella da eliminare">
</div>
</form>
<div id="inserisci"></div>
<div class='filetodelete'>
    <span>File in:   '<?php echo basename(getcwd());?>'</span>
<?php
    foreach (glob("*") as $nomefile) {
        if(is_file($nomefile)){
            $n = $count+1000000;
            $ext = strtoupper(pathinfo($nomefile,PATHINFO_EXTENSION));
            //echo $ext;
            if($ext == "DOCX"){
                $image = "https://lorenzo-rizzolo.github.io/projects/phpprog/css/word.png";
            }elseif ($ext == "PPTX") {
                $image = "https://lorenzo-rizzolo.github.io/projects/phpprog/css/pptx.png";
            }elseif($ext == "XLSX" || $ext == "XLS"){
                $image = "https://lorenzo-rizzolo.github.io/projects/phpprog/css/exel.png";
            }else{
                $image = "https://lorenzo-rizzolo.github.io/projects/phpprog/css/file.png";
            }
            echo  "<br><img src='".$image."'><span name='".$n."'>".$nomefile."</span><a class='opt' href='".$nomefile."' download><img src='https://lorenzo-rizzolo.github.io/projects/phpprog/css/download.png'></a>";
            $count += 1;
        }else{
            echo "<br><img src='https://lorenzo-rizzolo.github.io/projects/phpprog/css/cartella.png'><a href='".$nomefile."/index.php'>".$nomefile."</a>";
        }
    }
    $file = $_POST['cartella'];
    $check = false;
    if(is_file($file)){
        foreach (glob("*") as $nomefile) {
            if($file==$nomefile&&$file!="deletefolder.php"&&$file!="newfolder.php"&&$file!="https___26f4-37-103-135-64.eu.ngrok.io_phpprog_ - Google Chrome 2022-06-19 23-39-12.mp4" && $file!="css" && $file!="favicon.ico"&& $file!="index.php"&& $file!="info server.txt"&& $file!="upload.php"&& $file!="prove"){
                $check=true;
            }
        }
        if($check==true){
            unlink($file);
            echo "<script>window.location.reload();</script>";
        }else{
            echo "<script>window.location.reload();</script>";
        }
    }elseif(is_dir($file)){
        $check=false;
        foreach (glob("*") as $nomefile) {
            if($file==$nomefile&&$file!="deletefolder.php"&&$file!="newfolder.php"&&$file!="https___26f4-37-103-135-64.eu.ngrok.io_phpprog_ - Google Chrome 2022-06-19 23-39-12.mp4" && $file!="css" && $file!="favicon.ico"&& $file!="index.php"&& $file!="info server.txt"&& $file!="upload.php"&& $file!="prove"){
                $check=true;
            }
        }
        if($check==true){
            foreach (glob($file."/*") as $f){
                if(is_file($f)){
                    unlink($f);
                }
            }
              if(rmdir($file)){
                echo "<script>window.open('index.php','_self');</script>";
              }else{
                echo "<script>window.open('index.php','_self'); alert('cartella non eliminata');</script>";
              }
        }else{
            echo "<script>window.location.reload();</script>";
        }
    }
?>
</div>