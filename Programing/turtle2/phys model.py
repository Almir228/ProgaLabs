import turtle as t

dt = 0.1
g = 10
Vx = 20
Vy = 40
V = Vy
x = 0
y = 0
t.speed(10)

for i in range(10):
    while y >= 0:
        x += Vx * dt
        y += Vy * dt - g * dt ** 2 / 2
        Vy += -g * dt
        if y == 0:
            break
        t.goto(x, y)

    y = 0
    t.goto(x, y)
    Vx = 0.66 * Vx
    V = 0.66*V
    Vy = V

t.exitonclick()
