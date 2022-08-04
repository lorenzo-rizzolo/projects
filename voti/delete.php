<html lang="it">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <link href="https://fonts.googleapis.com/css?family=Anton" rel="stylesheet">
    <title>Elimina Materia</title>
</head>
<body>
    <div class="title">Inserisci il nome della materia da eliminare</div>
    <div class="pag-pre">
        <button class="agg-voto" onclick="window.open('index.php','_self')">Pagina precedente</button>
    </div>
    <hr>
    <form method="POST" class="delete">
        <input type="text" name="text" placeholder="materia da eliminare">
        <br>
        <button>Elimina</button><br>
        <button class="agg-voto" onclick="history.go(0)">Aggiorna pagina</button><br>
        <?php
        $materia = $_POST['text'];
        $old=$materia;
        $materia = $materia.".txt";
        if($materia!="" && file_exists($materia)){
            unlink($materia);
            echo "Materia ".$old." eliminata";
            echo "<script>window.open('index.php','_self');</script>";
        }else{
            echo "inserisci una materia valida";
        }
    ?>
    </form>
    <hr>
    <div class="pag-pre">
        <p class="title">Materie:</p>
    <?php
        foreach(glob("*.txt") as $file){
            echo $file."<br>";
        }
    ?>
    </div>
    <hr>  

</body>
</html>