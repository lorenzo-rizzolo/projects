#calcola il seno
import matplotlib.pyplot as plt
import math

num = input("Quante volte vuoi ripetere il grafico?: ")
num = int(num)
for i in range(361*num):
    angolo = i
    an = float(float(angolo)* (math.pi/180))
    y = math.sin(an)
    if angolo == 180 or angolo==360:
        y=0.0
    plt.plot(angolo,y,marker="o", color="m")
    y = str(y)
    angolo = str(angolo)
plt.show()