<?php
echo "<a href='javascript:history.go(-1)' onMouseOver='self.status=document.referrer;return true'>&#8592;Back</a>";?>
<form method="POST">
  <link rel="stylesheet" href="https://lorenzo-rizzolo.github.io/projects/phpprog/css/style.css">
  <div class="increadir">
<input class="cartella" type="text" name="cartella" placeholder="Nome della nuova cartella">
</div>
</form>
<?php
    $cartella = $_POST['cartella'];
    foreach (glob("*") as $cart){
      $check=true;
      if($cartella == $cart){
        $check=false;
      }
      if($check==true) {
        if(mkdir($cartella)){
          echo 'La cartella ed i file di configurazione sono stati creati è stata creata';
          $source_path = "C:\Users\lollo\Desktop\server php\cartelle_imp\index.php";
          $destination_path = $cartella."/index.php" ;
          copy($source_path, $destination_path);
          $source_path = "C:\Users\lollo\Desktop\server php\cartelle_imp/newfolder.php";
          $destination_path = $cartella."/newfolder.php" ;
          copy($source_path, $destination_path);
        }
        
      }else{
        echo 'La cartella non è stata creata';
      }

    }
?>