from matplotlib import pyplot as plt
import numpy as np
am_of_ells = [100 ,228 ,400 ,1337 ,1600 ,3200 ,5000 ,7000 ,10000 ,15000 ,20000 ,25000 ,35000 ,45000 ,60000 ,75000 ,95000 ,]
time = [9 ,4 ,4 ,12 ,9 ,25 ,41 ,49 ,112 ,131 ,160 ,150 ,299 ,277 ,333 ,679 ,589 ,]
plt.grid()
plt.plot(am_of_ells, time, '.')
plt.savefig('task2.2.pdf')
plt.show()