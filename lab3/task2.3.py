from matplotlib import pyplot as plt
import numpy as np
am_of_ells = [100 ,228 ,400 ,1337 ,1600 ,3200 ,5000 ,7000 ,10000 ,15000 ,20000 ,25000 ,35000 ,45000 ,60000 ,75000 ,95000 ,115000 ,140000 ,165000 ,195000 ,225000 ,250000 ,295000 ,335000 ,375000 ,420000 ,465000 ,499999 ,510000 ,]
time = [4 ,4 ,4 ,13 ,10 ,25 ,42 ,49 ,97 ,90 ,162 ,169 ,330 ,430 ,460 ,656 ,582 ,651 ,1174 ,1099 ,1205 ,1322 ,1363 ,3535 ,3080 ,2329 ,4033 ,4003 ,3763 ,4533 ,]
plt.grid()
plt.plot(am_of_ells, time, '.')
plt.savefig('task2.3.pdf')
plt.show()