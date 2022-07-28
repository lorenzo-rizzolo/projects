<!DOCTYPE html>
<html lang="it">
<head>
    <link rel="stylesheet" href="style.css">
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <title>Conto</title>
</head>
<body>
    <hr>
    <div id="info">Soldi in cassaforte</div>
    <form method="POST">
    <input class="num" name="soldi" type="number" placeholder="euro">
    <span>,</span>  
    <input class="num" name="cente" type="number" placeholder="cent">
    <button>Invia</button><br>
    <input class="arg" name="arg" type="text" placeholder="argomento">
    </form>
    <hr>
    <?php
        $file = fopen("totale.txt","r") or die("Impossibile aprire il conto.");
        $text = fread($file, filesize("totale.txt"));
        fclose($file);
        echo "<span class='rim'>Soldi rimanenti:  <span class='soldi'>".$text."  &euro;</span></span>";

        $conto = $_POST['soldi'];
        $cent = $_POST['cente'];
        if($cent==""){
            $cent=0;
        }else{
            $cent = $cent/100;
        }
        if($conto==""){
            $conto=0;
        }
        $arg = $_POST['arg'];
        if(($conto!=0 || $cent!=0) && $arg!=""){
            if($conto<0){
                $cent = $cent*-1;
            }
            $conto = $conto+$cent;
            echo $conto;
            $file = fopen("totale.txt","r") or die("Impossibile leggere il conto.");
            $text = fread($file, filesize("totale.txt"));
            $agg = $text+$conto;
            fclose($file);

            $file = fopen("totale.txt","w") or die("Impossibile scrivere.");
            fwrite($file, $agg);
            fclose($file);

            $file = fopen("elenco.txt","r") or die("Impossibile leggere il conto.");
            $elenco = fread($file, filesize("elenco.txt"));
            fclose($file);

            $file = fopen("elenco.txt","w") or die("Impossibile scrivere.");
            fwrite($file, $conto." ".$arg." -- ".date('d-m-y')."--\n".$elenco);
            fclose($file);

            echo "<script>window.open('index.php','_self');</script>";
        }else{
            if($conto=="" && $arg==""){
                echo "<script>document.getElementById('info').innerHTML = 'soldi in cassaforte';</script>";
            }elseif($arg=="" && $conto!=""){
                echo "<script>document.getElementById('info').innerHTML = 'inserisci argomento';</script>";
            }elseif($arg!="" && $conto==""){
                echo "<script>document.getElementById('info').innerHTML = 'inserisci denaro';</script>";
            }
        }
    ?>
    <br>
    <hr>
    <div class="elenco">
    <?php
        foreach(file("elenco.txt") as $line){
            echo "<li>".$line."</li><br>";
        }
    ?>
    </div>
</body>
</html>