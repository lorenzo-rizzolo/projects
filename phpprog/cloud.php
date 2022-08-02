
<html>
    <head>
    
        <style>
            body{
                background-color: grey;
                border:10px solid rgb(118,0,0);
            }
            input{
                width:300px;
                height:50px;
                font-size:130%;
                border-radius:10px;
                border:2px solid rgb(118,0,0);
                color:rgb(118,0,0);
            }
            form{
                width:300px;
                margin:auto;
                margin-top:80px;
                text-align:center;
            }
            div{
                text-align:center;
                font-size:180%;
                margin-bottom:40px;
                text-transform:uppercase;
                color:lightyellow;
            }
        </style>
    </head>
    <body>
        <form method="POST">
            <div id="inserisci"></div>
            <input type="password" name="parola" placeholder="inserisci password del cloud">
        </form>
        <?php
            $parola = $_POST['parola'];
            if($parola=="lrsbf"){
                echo "<script>window.open('cloud/','_self');</script>";
            }else{
                if($parola!=""){
                    echo "<script>document.getElementById('inserisci').innerHTML = 'Password errata';</script>";
                }else{
                    echo "<script>document.getElementById('inserisci').innerHTML = 'Inserisci una Password';</script>";
                }
            }
        ?>
    </body>
</html>