from datetime import datetime
def spazio():
    print("-------")
somma = 0
status = input("Devi aggiungere? yes[y]-no[n]: ")

if status == 'y':
    file = open("ricariche.txt","a")
    agg = input("inserisci denaro da aggiungere:\n")
    data = datetime.today().strftime('%d-%m-%Y')
    file.write("\n"+str(agg)+"   |  "+str(data))
    file.close()

file = open("ricariche.txt", "r")
spazio()
lines = file.readlines()
file.close()
print("\n"+lines[0], end="")
for i in range(1,len(lines)):
    print(str(lines[i]),end="")
    somma = somma + int(lines[i][0:4])
print("\n")
spazio()
print(str(somma)+"\n\n")
fine = input("Premi invio per uscire.....")