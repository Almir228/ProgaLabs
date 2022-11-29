import turtle as t


def flower(n):
    for i in range(n):
        t.circle(70)
        t.left(360 / n)


t.speed(10)
flower(10)
t.mainloop()