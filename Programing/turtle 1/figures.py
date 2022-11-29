import turtle
import numpy as np


def phi(n):
    turtle.left(180 - 90 * (n - 2) / n)


def figure(n, rho):
    alpha = np.pi / n
    a = abs(2 * rho * np.sin(alpha))
    turtle.penup()
    turtle.home()
    turtle.goto(rho, 0)
    turtle.pendown()
    phi(n)
    for j in range(n):
        turtle.forward(a)
        turtle.left(360 / n)
    turtle.penup()


r = 20
for i in range(3, 13):
    r = r + 20
    figure(i, r)
turtle.goto(0, 0)
turtle.mainloop()
