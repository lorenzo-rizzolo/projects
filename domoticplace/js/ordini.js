// LINK PER LE API DI FIRESTORE v8
// https://firebase.google.com/docs/reference/js/v8/firebase.firestore

const firebaseConfig = {
    apiKey: "AIzaSyAtCdvWEc0vu1J8IAFcDeFF1xioR7S77jc",
    authDomain: "domoticplace-2f3ec.firebaseapp.com",
    projectId: "domoticplace-2f3ec",
    storageBucket: "domoticplace-2f3ec.appspot.com",
    messagingSenderId: "830259830944",
    appId: "1:830259830944:web:b702c3092caa999f29a9c5"
};

const firebaseApp = firebase.initializeApp(firebaseConfig);
const db = firebaseApp.firestore();

function insert_doc(coll, docname, record) {
    var collection = db.collection(coll);
    collection.doc(docname).set(record);
}

function del_doc(coll, docname) {
    var collection = db.collection(coll);
    collection.doc(docname).delete();
}

function query_coll(coll) {
    var collection = db.collection(coll);

    collection
        .where("id", "==", 99)
        .get()
        .then(function(querySnapshot) {
            querySnapshot.forEach(function(doc) {
                console.log(doc.id, " => ", doc.data());
        });
    });
}

function get_coll(coll) {
    var collection = db.collection(coll);

    collection
        .get()
        .then(function(querySnapshot) {
            querySnapshot.forEach(function(doc) 
            {
                data=JSON.stringify(doc.data());
                document.getElementById('ordini').innerHTML += "<div class='box'><strong>"+doc.id+"</strong>  =>  "+ data+"<br><input id='"+doc.id+"' type='checkbox'/>Clicca a lavoro finito</div>";
                /*if(document.getElementById(doc.id).checked==1){
                    insert_doc('ordini passati', doc.id , doc.data());
                }*/
                //console.log(doc.id, " => ", doc.data());
        });
    });
}

function change(){
    var coll='ordini';
    var collection = db.collection(coll);

    collection
        .get()
        .then(function(querySnapshot) {
            querySnapshot.forEach(function(doc) 
            {
                //var id=JSON.stringify(doc.id);
                //console.log(doc.id);
                if(document.getElementById(doc.id).checked==1){
                    insert_doc('ordini_passati', doc.id , doc.data());
                    del_doc('ordini', doc.id);
                   
                }
                //console.log(doc.id, " => ", doc.data());
        });
    });
    alert("Fatto, ora aggiorna la pagina.");
    
}

function run_mail(){
    console.log("mail");
}

//console.log("SCRIVO NEL DB");
//funzioni database
function write(){
    insert_doc('ordini', 'ordine102', {id:11, name: "pippo1"});
}

function elimina(){
    var el = document.getElementById('delete').value;
    console.log(el)
    if(el==""){
        alert("vuoto");
    }else{
        alert("eliminato");
        del_doc('ordini', el)
    }
    
}

function see(){
    get_coll('ordini');
}

function invia(){
    var nome = document.getElementById('nome').value;
    var cognome = document.getElementById('cognome').value;
    var email = document.getElementById('email').value;
    var numero = document.getElementById('numero').value;
    var indirizzo = document.getElementById('indirizzo').value; 
    var mode = document.getElementById('mode').value; 
    var count = 0;
    //nome
    if(nome == ""){
        document.getElementById('nome').style.borderColor = 'red';
    }else{
        document.getElementById('nome').style.borderColor = 'green';
        count+=1;
    }
    //cognome
    if(cognome == ""){
        document.getElementById('cognome').style.borderColor = 'red';
    }else{
        document.getElementById('cognome').style.borderColor = 'green';
        count+=1;
    }
    //email
    if(email == "" || /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/.test(email)==false){
        document.getElementById('email').style.borderColor = 'red';
    }else{
        document.getElementById('email').style.borderColor = 'green';
        count+=1;
    }
    //numero
    if(numero == ""){
        document.getElementById('numero').style.borderColor = 'red';
    }else{
        document.getElementById('numero').style.borderColor = 'green';
        count+=1;
    }
    //indirizzo
    if(indirizzo == ""){
        document.getElementById('indirizzo').style.borderColor = 'red';
    }else{
        document.getElementById('indirizzo').style.borderColor = 'green';
        count+=1;
    }
    //modalità
    if(mode == ""){
        document.getElementById('mode').style.borderColor = 'red';
    }else{
        document.getElementById('mode').style.borderColor = 'green';
        count+=1;
    }
    
    
    if(count==6){
        var rand = Math.random()*10;
        rand=String(rand);
        var ordine = "ordine"+rand;
        var nome2 = "<li>"+nome+"</li>";
        var cognome2 = "<li>"+cognome+"</li>";
        var email2 = "<li>"+email+"</li>";
        var numero2 = "<li>"+numero+"</li>";
        var indirizzo2= "<li>"+indirizzo+"</li>"
        var mode2 = "<li>"+mode+"</li>"
        text = nome2+cognome2+email2+numero2+indirizzo2+mode2;
        insert_doc('ordini', ordine, {text});
        document.getElementById('mail').innerHTML = "<a href='mailto:lolloriz36@gmail.com,"+email+"?subject="+ordine+"&body=Salve%20Rizzolo.%0AMi%20chiamo%20"+nome+"%20"+cognome+",%20abito%20in%20"+indirizzo+"%20e%20ti%20scrivo%20per%20un%20servizio%20di%20"+mode+".%0AAttendo una mail di conferma. %0APuò contattarmi al numero: "+numero+"'><button>Invia Email</button></a>";
    }else{
        document.getElementById('inserisci').innerHTML = "<p style='color: #ffd1dc; font-size:180%;'>Compila tutti i campi in rosso</p>" ;
    }
}

function buildemail(){
    
}