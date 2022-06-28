<?php
    if($_SERVER['REQUEST_METHOD']=="POST"){
        $upload_path = "uploads/";
        $filename = basename($_FILES['file']['name']);
        $target_file = $upload_path.$filename;
        $check = true;
        $output = "";

        if(file_exists($target_file)){
            $check = false;
            $output = "Il file esiste già!";
        }

        if($check){
            if(!move_uploaded_file($_FILES['file']['tmp_name'],$target_file)){
                echo "upload fallito";
            }else{
                echo "file caricato!";
            }
        }else{
            echo $output;
        }
    }

?>