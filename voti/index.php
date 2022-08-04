<html lang="it">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <script src="script.js"></script>
    <link href="https://fonts.googleapis.com/css?family=Anton" rel="stylesheet">
    <title>Voti scuola</title>
</head>
<body>
    <div class="title">Voti Scuola</div>
    <hr>
    <div class="box-input">
        <form method="POST">
            <input type="text" name="materia" placeholder="materia">
            <input type="number" name="voto" placeholder="voto"><br>
            <button class="agg-voto">Aggiungi Voto</button>
        </form>
        <button class="agg-voto" onclick="window.open('index.php','_self');">Aggiorna pagina</button><br>
        
        <?php
        $materia = $_POST['materia'];
        $voto = $_POST['voto'];
        if($materia!="" && $voto!=""){
            $materia = $materia.".txt";

            if(!file_exists($materia)){
                fopen($materia,"w");
            }
            
            $file = fopen($materia,"r");
            $oldtext = fread($file, 1024);
            fclose($file);

            $file = fopen($materia,"w");
            $voto = $voto."\n";
            $text = $voto.$oldtext;
            fwrite($file, $text);
        }
        
        ?>
    </div>
    <hr>
    <div class="materie">
        <?php
            foreach(glob("*.txt") as $materia){
                $file = fopen($materia, "r");
                $size = 1024;
                $sum = 0;

                echo "<details><summary>".$materia."<span id='".$materia."' class='media'></span></summary>";
                $i=0;
                foreach(file($materia) as $voto) {
                    $sum = $sum+$voto;
                    echo $voto."<br>";
                    $i+=1;
                }
                if($sum!=0){
                    $sum = $sum/$i;
                    $sum = round($sum, 2);
                }
                
                echo "</details><hr>";
                echo "<script>document.getElementById('".$materia."').innerHTML = 'Media: ".$sum."';</script>";
            }
        ?>
    </div>
    <div class="box-buttons">
        <div class="title">Impostazioni materie</div>
        <div id="but">
            <button style="margin-right:10px;" onclick="elimina()">Elimina Materia</button>
        </div>
    </div>
    
    
</body>
</html>