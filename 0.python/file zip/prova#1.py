import os, zipfile
def spazio():
    print("---------------------------------")
def new():
    new = perco + input("inserisci nome del file in "+ percorso +"\nche devi mettere nel file zip: ")
    return new
#crea cartella zip
perco = os.path.dirname(os.path.abspath(__file__)) +"/"
nome = perco + input("inserisci il nome della nuova cartella zip: ") + ".zip"
spazio()
#percorso cartella
percorso = "'"+os.path.dirname(os.path.abspath(__file__))+"'"
print("cartella presente in "+ percorso)
archivio = zipfile.ZipFile(nome, "a")
spazio()
nuova = new()
archivio.write(nuova, compress_type=zipfile.ZIP_DEFLATED)
spazio()
ancora = input("ne devi ancora mettere? yes[y]-no[n]:  ")
if ancora == 'y':
    spazio()
    nuova = new() 
    archivio.write(nuova, compress_type=zipfile.ZIP_DEFLATED)
    ancora = input("ne devi ancora mettere? yes[y]-no[n]:  ")
#stampa tutti i file all'interno della cartella zip
print(nome + ":  ")
print(archivio.namelist())
archivio.close()