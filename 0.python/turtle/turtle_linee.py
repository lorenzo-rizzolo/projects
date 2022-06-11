import turtle

dis = 200
dis2 = 50
spicchio = 30
vel = 100

linea = turtle.Turtle()
linea.speed(vel)
turtle.bgcolor("black")
colori = ["red","green","blue","white","yellow","violet","pink","orange", "lightblue","lightgreen", "purple","grey"]

for j in range(len(colori)):
    for i in range(int(360/spicchio)):
        linea.color(colori[j])
        linea.forward(dis)
        linea.left(30)
        linea.forward(dis2)
        linea.forward(-dis2)
        linea.right(30)
        linea.forward(-dis)
        linea.left(spicchio)