from random import *
import turtle as t


x = 300
dt = 0.1
t.penup()
t.goto(x, x)
t.pendown()
t.goto(-x, x)
t.goto(-x, -x)
t.goto(x, -x)
t.goto(x, x)
t.speed(100)

number_of_turtles = 10
steps_of_time_number = 100


pool = [t.Turtle(shape='circle') for i in range(number_of_turtles)]
for unit in pool:
    unit.speed(1)
    unit.penup()
    unit.speed(50)
    unit.goto(randint(-200, 200), randint(-200, 200))
    unit.seth(randint(-180, 180))

for l in range(10000):
    for unit in pool:
        if unit.ycor() >= 300 or unit.ycor() <= -300:
            unit.seth(360 - unit.heading())
        if unit.xcor() >= 300 or unit.xcor() <= -300:
            unit.seth(180 - unit.heading())
        unit.forward(2)


# x = random.randint(-300, 300)
# y = random.randint(-300, 300)
#
# t.goto(x, y)
# t.seth(random.randint(-180, 180))
# for i in range(100):
#     if t.ycor() >= 300 or t.ycor() <= -300:
#         t.seth(360 - t.heading())
#     if t.xcor() >= 300 or t.xcor() <= -300:
#         t.seth(180 - t.heading())
#     t.forward(2)
#     while -300 <= t.xcor() <= 300 and -300 <= t.ycor() <= 300:
#         t.forward(2)



t.exitonclick()