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
    <script src="https://www.gstatic.com/firebasejs/9.8.2/firebase-app-compat.js"></script>
    <script src="https://www.gstatic.com/firebasejs/9.8.2/firebase-firestore-compat.js"></script>
    <script src="https://www.gstatic.com/firebasejs/9.8.2/firebase-auth-compat.js"></script>
    <script src="firebase.js"></script>
    <script>totale()</script>
    <button style="float:right;" onclick="window.open('preve.html','_self');">Preventivi</button>
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
    <div id="inserisci"></div>
    <input type="text" id="name" placeholder="nome preventivo"><button class="invia" onclick="invia()">Invia</button>
    
    <script>totale()</script>
    <script>pezzi()</script>
    </div>
    
</body>
</html>