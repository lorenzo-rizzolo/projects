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