import turtle

pina = turtle.Turtle()
turtle.bgcolor("black")
pina.speed(1000)
colori = ["red","green","blue","white","yellow","violet"]
while True:
    for i in range(len(colori)):
        for j in range(12):
            pina.color(colori[i],"blue")
            pina.left(30)
            pina.circle(100)
