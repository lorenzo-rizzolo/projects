<html lang="it">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Accedi</title>
</head>
<body>
    <header>
        <span class="title">RiCloud</span><span class="web">.sytes.net</span>
        <hr>
    </header>
    
    <div class="menu">
        <a href="index.php">Home</a>
        <a href="registrati.php">Registrati</a>
    </div>
    <div class="accedi">
        <span>Accedi al tuo spazio su RiCloud</span>
        <form method="POST">
            <input type="text" name="nome" placeholder="nome utente"><br>
            <input type="password" name="pass" placeholder="password"><br>
            <button>Accedi</button>
        </form>
        <span>
        <?php
            $nome = $_POST["nome"];
            $pass = $_POST["pass"];
            if($nome!="" && $pass!=""){
                $cartella = "utenti/".$nome."-".$pass;
                if(is_dir($cartella)){
                    echo "<script>window.open('".$cartella."','_self');</script>";
                }else{
                    echo "Utente non registrato o dati di accesso sbagliati<br><a href='registrati.php'>-Registrati-</a>";
                }
            }
        ?>
        </span>
    </div>
</body>
</html>