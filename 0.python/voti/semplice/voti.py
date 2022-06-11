import os
def stampa():
    vo = ["ita.txt","mate.txt","info.txt","tpsi.txt","reti.txt","ing.txt","gin.txt","sto.txt","tele.txt"]
    for i in range(9):
        stamp = open(vo[i],"r").read()
        print(stamp)

def ripristina():
    vo = ["ita.txt","mate.txt","info.txt","tpsi.txt","reti.txt","ing.txt","gin.txt","sto.txt","tele.txt"]
    ma = ["ITALIANO","MATEMATICA", "INFORMATICA","TPSI","RETI","INGLESE","GINNASTICA","STORIA","TELECOMUNICAZIONI"]
    spazio()
    for i in range(9):
        v = vo[i]
        materia = open(v,"w")
        materia.write(ma[i])
        materia.close()
        stamp = open(v,"r").read()
        print(stamp)
    spazio()
    
def spazio():
    print("----------------------------------------------------------------------------")
status = 'y'
status_voto = 'y'
a = input("Vuoi inserire voti o stampare? inserire[y]-stampare[n]-> ")
if a == 'y':    
    print("\n| ITALIANO-> ita | MATEMATICA-> mate | INFORMATICA-> info | TPSI-> tpsi") 
    print("| RETI-> reti      | INGLESE-> ing     | GINNASTICA-> gin   | STORIA-> sto")
    print("| TELECOMUNICAZIONI-> tele  \n")
    spazio()
    while status == 'y':
        mat = input("inserisci la materia:  ") + ".txt"
        spazio()
        to_read = open(mat,"r").read()
        print(to_read)
        while status_voto == 'y':
            open_file = open(mat,"a")
            voto = input("Inserisci voto:  ")
            open_file.write(" | "+voto)
            open_file.close()
            status_voto = input("Devi ancora inserire voti di "+mat+" ? yes[y]-no[n]:  ")
        status = input("Devi inserire un'altra materia? yes[y]-no[n]:  ")
        if status == 'y':
            status_voto = 'y'
        spazio()
else:
    spazio()
stampa()
spazio()
rip = input("Vuoi ripristinare le materie? yes[y]-no[n]:  ")
if rip == 'y':
    ripristina()
spazio()
delete = input("Vuoi eliminare una materia? yes[y]-no[n]:  ")
while delete =='y':
    spazio()
    mat = input("che materia vuoi eliminare? :") + ".txt"
    dele_file = os.remove(mat)
    spazio()
    delete = input("Vuoi ancora eliminarne? yes[y]-no[n]:")
spazio()
esci = input("Premi invio per uscire...")