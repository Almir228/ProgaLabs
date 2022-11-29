import turtle
turtle.shape('turtle 1')
turtle.speed(10000)
for i in range(10000):
    turtle.forward(i/1000)
    turtle.left(1)

turtle.mainloop()