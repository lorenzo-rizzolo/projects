<Page name="home">
    <Navbar>
      <NavLeft><h1 class="title">DomoticPlace</h1></NavLeft>
      <NavRight>
         <Link href="/menu/"><span class="menu">Menu</span></Link>
      </NavRight>
    </Navbar>
    
      <Card>
        <div class="card">
          <span>Per ordinare uno o più prodotti schiaccia su `ORDINA` nella sezione menù  .
            Altrimenti se vuoi farti installare l`impianto da un tecnico chiama al numero nella senzione `INFO` in alto a destra.
            Ricordiamo che agiamo in ogni tipo di edificio, dalla casa al capannone.
          </span>
        </div>
      </Card>
      <Card>
        <div class="card">
          <span>
            Nella sezione `PRODOTTI` nel menù trovate molti dei dispositivi che usiamo, ovviamente cambiano a seconda della necessità e se alcuni dispositivi che volete usare non sono nelle liste non preoccupatevi.
          </span>
        </div>
      </Card>
      
    
</Page>
<script>
  import {
    Page,
    Navbar,
    NavLeft,
    NavTitle,
    NavTitleLarge,
    NavRight,
    Link,
    Toolbar,
    Block,
    BlockTitle,
    List,
    ListItem,
    Row,
    Col,
    Card,
    Button
  } from 'framework7-svelte';
</script>

<style>
  .title{
    color: blueviolet;
    font-size: 180%;
    margin: 10px;
  }
  .menu{
    color: blueviolet;
    margin-right: 20px;
  }
  .card{
    background-color: blueviolet;
    margin: 0px;
    padding: 15px;
    color: white;
    box-shadow: 0px 0px 10px 0px black;
  }
</style>