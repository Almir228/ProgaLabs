import pandas as pd
from matplotlib import pyplot as plt
import numpy as np
from scipy.optimize import curve_fit


def polinom(x, a, b, c):
    return a*x**2 + b*x + c





fig, plot = plt.subplots()
data = pd.read_csv("data/data8.csv", delimiter=";", names=["N", "Search"])

a, b, c = np.polyfit(data["N"], data["Search"], 2)
N = pd.DataFrame(np.linspace(100, max(data["N"])))
y = polinom(N, a, b, c)

plot.scatter(data["N"], data["Search"], s=7, color='red')
plot.plot(N, y)

plot.set_title("Сортировка Шелла, перестановки от числа элементов")
plot.set_xlabel("Число элементов в массиве")
plot.set_ylabel("Перестановки")
plot.grid()

fig.savefig("ShellSort3.1.pdf")