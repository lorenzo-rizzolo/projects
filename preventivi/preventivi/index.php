<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <script src="script.js"></script>
    <title>Preventivi</title>
</head>
<body>
    <script>totale()</script>
    <span id="line">Inserisci il prodotto, la quantit&agrave; e il prezzo unitario</span>
    <hr>
    <div id="preve">
        totale costo: <span id="totale"></span><br>
        pezzi totali: <span id="pezzi"></span><br>
        <button onclick="two()">calcola</button>
        <hr>
    <?php
        for ($i=0; $i < 20; $i++) { 
            $n=$i+50;
            $t=$i+100;
            echo "<input id='".$t."' type='text' placeholder='prodotto'></input><input id='".$i."' type='number' placeholder='quan.'></input><input id='".$n."' type='number' placeholder='p. unit.'></input><br>";
        }
    ?>
    <button class="invia" onclick="invia()">Invia</button>
    
    <script>totale()</script>
    <script>pezzi()</script>
    </div>
    
</body>
</html>