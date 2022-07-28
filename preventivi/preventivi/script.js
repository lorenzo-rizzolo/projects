function two(){
    totale();
    pezzi();
}

function totale(){
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
    document.getElementById("totale").innerHTML = tot;
}

function pezzi(){
    var pezzi=0;
    for (let i = 0; i < 20; i++) {
        var tot = document.getElementById(i+50).value;
        var num = document.getElementById(i).value;
        if(num!="" && tot!=""){
            pezzi = parseInt(parseInt(pezzi)+parseInt(num));;
        }
    }
    pezzi = parseInt(pezzi);
    document.getElementById("pezzi").innerHTML = pezzi;
}