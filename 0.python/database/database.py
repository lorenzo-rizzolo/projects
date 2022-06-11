status = input("vuoi inserire qualcosa? yes[y]-no(stampa)[n]: ")
if status == 'y':
    testo = input("Inserisci testo da aggiungere:\n")
    file = open("c://Users/lollo/Desktop/pytohn/database/database.txt","a")
    file.write(testo+"\n")
    file.close()
fil = open("c://Users/lollo/Desktop/pytohn/database/database.txt","r").read()
print(fil)
pulizia = input("Vuoi pulire il file? yes[y]-no[n]:")
if pulizia == 'y':
    fi = open("c://Users/lollo/Desktop/pytohn/database/database.txt","w")
    fi.write("")
    fi.close()
exit = input("Premi invio per uscire...")
