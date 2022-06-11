<Page>

    <Navbar backLink="back">
        <NavTitle><span class="title">Menu</span></NavTitle>
    </Navbar>

    <List accordionList>
        <div class="title">
            <ListItem accordionItem title="Servizi">
                <AccordionContent>
                    <Block></Block>
                </AccordionContent>
            </ListItem>
        </div>
        <hr>
        <div class="title">
            <ListItem accordionItem title="Progetti già realizzati">
                <AccordionContent>
                    <Block></Block>
                </AccordionContent>
            </ListItem>
        </div>
        <hr>
        <div class="title">
            <ListItem accordionItem title="Prodotti">
                <AccordionContent>
                    <Link href="/prodotti/"><span class="pro">Clicca per vedere i nostri prodotti</span></Link> 
                </AccordionContent>
            </ListItem>
        </div>
        <hr>
        <div class="title">
            <ListItem accordionItem title="Ordina">
                <AccordionContent>
                    <Link href="/ordina/"><span class="pro">Vai alla pagina delle ordinazioni</span></Link>
                </AccordionContent>
            </ListItem>
        </div>
    </List>
</Page>
<script>
    import {
    Page,
    Panel,
    View,
    Navbar,
    NavLeft,
    AccordionContent,
    NavTitle,
    NavTitleLarge,
    NavRight,
    Link,
    List,
    Toolbar,
    Block,
    BlockTitle,
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
        font-size: 130%;
        margin-top: 20px;
    }
    
    .pro{
        font-size: 120%;
        margin: 20px;
        background-color: blueviolet;
        border-radius: 50px;
        box-shadow: 0px 0px 15px 0px black;
        color: white;
        border: 2px solid blueviolet;
        padding: 20px;
    }
</style>