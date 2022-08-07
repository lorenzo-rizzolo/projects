function blackmode(){
    document.getElementById("body").style.color = "white";
    document.getElementById("body").style.background = "black";
    document.getElementById("soldi").style.background = "black";
    document.getElementById("soldi").style.color = "white";
    document.getElementById("soldi").style.border = "1px solid lightblue";
    document.getElementById("cente").style.background = "black";
    document.getElementById("cente").style.color = "white";
    document.getElementById("cente").style.border = "1px solid lightblue";
    document.getElementById("arg").style.background = "black";
    document.getElementById("arg").style.color = "white";
    document.getElementById("arg").style.border = "1px solid lightblue";
    document.getElementById("color").innerHTML = "<button class='mode' onclick='whitemode()''>White Mode</button>" ;
}
function whitemode(){
    document.getElementById("body").style.color = "black";
    document.getElementById("body").style.background = "white";
    document.getElementById("soldi").style.background = "white";
    document.getElementById("soldi").style.color = "color";
    document.getElementById("soldi").style.border = "1px solid blue";
    document.getElementById("cente").style.background = "white";
    document.getElementById("cente").style.color = "color";
    document.getElementById("cente").style.border = "1px solid blue";
    document.getElementById("arg").style.background = "white";
    document.getElementById("arg").style.color = "color";
    document.getElementById("arg").style.border = "1px solid blue";
    document.getElementById("color").innerHTML = "<button class='mode' onclick='blackmode()''>Black Mode</button>" ;
}