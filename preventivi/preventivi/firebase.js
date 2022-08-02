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

function del_doc(){
    /*var coll = "preventivi";
    var collection = db.collection(coll);
    collection.doc(docname).delete();*/
    for(let i=0 ; i<50 ; i++){
        if(document.getElementById(i).checked==1){
            var coll = "preventivi";
            var nuovo = i+50;
            var docname = document.getElementById(nuovo).textContent;
            var collection = db.collection(coll);
            collection.doc(docname).delete();
        }
    }
    
    //window.open("index.php","_self");
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
    var i=0;

    collection
        .get()
        .then(function(querySnapshot) {
            querySnapshot.forEach(function(doc) {
                //console.log(doc.id, " => ", doc.data());
                
                if(doc.id!="pernoneliminare"){
                    data=JSON.stringify(doc.data());
                    var nuovo = i+50;
                    document.getElementById("text").innerHTML += "<div id='"+nuovo+"'>"+doc.id+"</div><br>"+data+"<br><input id='"+i+"' type='checkbox'></input style='margin-right:50px; height:70px; width:70px;'><button onclick='if(document.getElementById("+i+").checked==1){del_doc();}'>elimina</button><br><hr>" ;
                    i+=1;
                }
        });
    });
}

function invia(){
    var text = "<br><span style='color:red;'>nome - quantità - prezzo ad unità</span><br>";
    for (let i = 0; i < 20; i++) {
        var qua = document.getElementById(i).value;
        var pre = document.getElementById(i+50).value;
        var name = document.getElementById(i+100).value;
        if(name!=""&&pre!=""){
            if(qua==""){
                qua=1;
            }
            text = text + name+" - "+qua+" - "+pre+"<br>";
        }
    }
    var pezzi=0;
    for (let i = 0; i < 20; i++) {
        var costo = document.getElementById(i+50).value;
        var pex = document.getElementById(i).value;
        if(pex!="" && costo!=""){
            pezzi = parseInt(parseInt(pezzi)+parseInt(pex));;
        }
    }
    pezzi = parseInt(pezzi);
    var tot=0;
    for (let i = 50; i < 70; i++) {
        var num = document.getElementById(i).value;
        var pez = document.getElementById(i-50).value;
        if(pez=="" && num!=""){
            pez=1;
        }
        num = num*pez;
        if(num!=""){
            tot = parseInt(parseInt(tot)+parseInt(num));
        }
    }
    tot = parseInt(tot);

    var nomepre = document.getElementById("name").value;
    //testo per firebase
    text = text+"<span style='color:green;'>totale spesa: "+tot+" &euro;<br>pezzi totali: "+pezzi+"</span><br>";

    
    if(nomepre!=""){
        document.getElementById("inserisci").innerHTML = "";
        insert_doc('preventivi', nomepre, {text}) ;
        //window.open("index.php","_self");
    }else{
        document.getElementById("inserisci").innerHTML = "inserisci nome preventivo";
    }
    
}



//console.log("SCRIVO NEL DB");
//insert_doc('ordini', 'ordine103', {id:10, name: "pippo"}) ;
//del_doc('ordini', 'ordine101')

//get_coll('ordini');
