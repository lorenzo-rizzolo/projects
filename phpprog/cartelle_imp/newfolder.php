<?php
echo "<a style='font-size:150%;' href='index.php'>&#8592;Back</a>";
?>
<div class='title'><p>inserisci il nome della nuova cartella</p></div>
<form method="POST">
  <link  rel="stylesheet" href="https://lorenzo-rizzolo.github.io/projects/phpprog/css/style.css">
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
        echo "la cartella esiste gi&agrave;";
      }
      if($check==true) {
        if(mkdir($cartella)){
          echo "<p style='color:lightgoldenrodyellow'>La cartella ed i file di configurazione sono stati creati. Aggiorna la pagina precedente per renderla visibile.</p>";
          $source_path = "cartelle_imp\index.php";
          $destination_path = $cartella."/index.php" ;
          copy($source_path, $destination_path);
          $source_path = "cartelle_imp/newfolder.php";
          $destination_path = $cartella."/newfolder.php" ;
          copy($source_path, $destination_path);
        }
        
      }else{
        echo 'La cartella non è stata creata';
      }

    }
?>