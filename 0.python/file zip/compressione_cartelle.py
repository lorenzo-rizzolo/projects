import shutil, os
def spazio():
    print("------------------------")
status = 'abc'
new_percorso = ""
i=0
while status != 'y':
    percorso = os.path.dirname(os.path.abspath(__file__))+new_percorso
    print(f"\t-----cartella: '{percorso}'-----")
    spazio()
    for cartella in os.listdir():
        if os.path.isdir(cartella):
            print(cartella)
    spazio()
    status = input("La cartella che vuoi zippare e qui?\n se è qui inserisci [y] altrimenti inserisci \nil nome della cartella nella quale entrare: ")
    if status != 'y':
        new_percorso = new_percorso +"\\"+status
        os.chdir(f"{percorso}\\{status}")
    spazio()
    i+=1
cartella = input("Inserisci il nome della cartella che vuoi convertire:")

spazio()
print("cartella zippata presente in '"+percorso+"'\n")
shutil.make_archive(cartella, 'zip', root_dir=cartella)
furori = input("premere invio per uscire.....")