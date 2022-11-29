import turtle as t


t.begin_fill()
t.circle(100)
t.color('yellow')
t.end_fill()

t.penup()
t.goto(40, 120)
t.color('black')
t.pendown()

t.begin_fill()
t.circle(20)
t.color('blue')
t.end_fill()

t.penup()
t.goto(-40, 120)
t.color('black')
t.pendown()

t.begin_fill()
t.circle(20)
t.color('blue')
t.end_fill()

t.penup()
t.goto(0, 100)
t.color('black')
t.pendown()
t.pensize(5)
t.seth(-90)
t.forward(30)


t.penup()
t.goto(-70, 80)
t.color('red')
t.pendown()

t.circle(70, 180)

t.exitonclick()
t.mainloop()
