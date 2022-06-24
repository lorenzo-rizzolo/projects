<?php
echo "<a style='font-size:150%;' href='index.php'>&#8592;Back</a>";
?>
<div class='title'><p>inserisci il nome della cartella o del file che vuoi eliminare.<br> gli elementi presenti nella directory sono elencati qui sotto.</p></div>
<form method="POST">
  <link  rel="stylesheet" href="https://lorenzo-rizzolo.github.io/projects/phpprog/css/style.css">
<div class="increadir">
<input class="cartella" type="text" name="cartella" placeholder="file o cartella da eliminare">
</div>
</form>
<div id="inserisci"></div>
<div class='filetodelete'>
<?php
    foreach (glob("*") as $nomefile) {
        if($nomefile!="deletefolder.php"&&$nomefile!="newfolder.php"&&$nomefile!="https___26f4-37-103-135-64.eu.ngrok.io_phpprog_ - Google Chrome 2022-06-19 23-39-12.mp4" && $nomefile!="css" && $nomefile!="favicon.ico"&& $nomefile!="index.php"&& $nomefile!="info server.txt"&& $nomefile!="upload.php"&& $nomefile!="prove"){
            if(is_file($nomefile)){
                echo  "<br><img src='https://lorenzo-rizzolo.github.io/projects/phpprog/css/file.png'><span name='".$n."'>".$nomefile."</span>";
            }else{
                echo "<br><img src='https://lorenzo-rizzolo.github.io/projects/phpprog/css/cartella.png'><a href='".$nomefile."/index.php'>".$nomefile."</a>";
            }
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
        foreach (glob("*") as $nomefile) {
            if($file==$nomefile&&$file!="deletefolder.php"&&$file!="newfolder.php"&&$file!="https___26f4-37-103-135-64.eu.ngrok.io_phpprog_ - Google Chrome 2022-06-19 23-39-12.mp4" && $file!="css" && $file!="favicon.ico"&& $file!="index.php"&& $file!="info server.txt"&& $file!="upload.php"&& $file!="prove"){
                $check=true;
            }
        }
        if($check==true){
            rmdir($file);
            echo "<script>window.location.reload();</script>";
        }else{
            echo "<script>window.location.reload();</script>";
        }
    }
?>
</div>