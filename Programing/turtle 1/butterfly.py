import turtle as t
t.speed(10)
x = 20
for i in range(10):
    t.seth(90)
    t.circle(x)
    t.circle(-x)
    x = x + 10

t.exitonclick()
