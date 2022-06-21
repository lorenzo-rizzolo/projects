<form method="post">
  <h3>Quali sono i tuoi interessi?</h3>
  <input type="checkbox" name="interessi[]" value="cinema"/> Cinema<br/><br/>
  <input type="checkbox" name="interessi[]" value="musica"/> Musica<br/><br/>
  <input type="checkbox" name="interessi[]" value="sport"/> Sport<br/><br/>
  <input type="submit" value="Invia il modulo"/>
    </form>
<?php
    $interessi = isset($_POST['interessi']) ? $_POST['interessi'] : array();
    foreach($interessi as $interesse) {
    echo $interesse . '<br/>';  
    }
?>