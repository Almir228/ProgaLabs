import turtle as t
from random import *

for i in range(100):
    t.forward(100*random())
    t.left(randint(-180, 180))

t.exitonclick()
t.mainloop()