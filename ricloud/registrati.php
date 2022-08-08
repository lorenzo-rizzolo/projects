<html lang="it">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Registrati</title>
</head>
<body>
    <header>
        <span class="title">RiCloud</span><span class="web">.sytes.net</span>
        <hr>
    </header>
    
    <div class="menu">
        <a href="index.php">Home</a>
        <a href="accedi.php">Accedi</a>
    </div>
    <div class="accedi">
        <span>Registrati su RiCloud</span>
        <form method="POST">
            <input type="text" name="nome" placeholder="nome utente"><br>
            <input type="password" name="pass" placeholder="password"><br>
            <input type="password" name="twopass" placeholder="password"><br>
            <button>Registrati</button>
        </form>
        <span>
        <?php
            $nome = $_POST["nome"];
            $pass = $_POST["pass"];
            $twopass = $_POST["twopass"];
            if($nome!="" && $pass!="" && $twopass!=""){
                if($pass==$twopass){
                    $stato = 0;
                    $cartella = "utenti/".$nome."-".$pass;
                    foreach(glob("utenti/*") as $file){
                        if(is_dir($file)){
                            if($file==$cartella){
                                echo "Utente già esistente";
                            }else{
                                $stato=1;
                            }
                        }
                    }
                    if($stato==1){
                        if(mkdir($cartella)){
                            $source_path = "start_file/index.php";
                            $destination_path = $cartella."/index.php" ;
                            copy($source_path, $destination_path);
                            echo "<script>window.open('accedi.php','_self');</script>"; 
                        }
                    }
                }else{
                    echo "Le due password non sono uguali";
                }
            }else{
                echo "Compila tutti i campi";
            }
        ?>
        </span>
    </div>
</body>
</html>