<link rel="stylesheet" href="style.css" >
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<form method="POST">
    <input type="number" name="soldi" placeholder="Denaro da aggiungere/togliere"><br>
    <button>Aggiungi / togli</button>
</form>
<?php
$conto = $_POST['soldi'];
if($conto!=""){
    $file = fopen("conto.txt","r") or die("Impossibile aprire il conto.");
    $text = fread($file, filesize("conto.txt"));
    $agg = $text+$conto;
    fclose($file);
    $file = fopen("conto.txt","w") or die("Impossibile aprire il conto.");
    fwrite($file, $agg);
    fclose($file);
    $file = fopen("conto.txt","r") or die("Impossibile aprire il conto.");
    echo "<script>window.open('index.php','_self');</script>";
    echo "Soldi rimanenti: ".fread($file, filesize("conto.txt"))."€";
    fclose($file);
    
}else{
    $file = fopen("conto.txt","r") or die("Impossibile aprire il conto.");
    echo "Soldi rimanenti: ".fread($file, filesize("conto.txt"))."€";
    fclose($file);
}
?>