import pandas as pd
from matplotlib import pyplot as plt
import numpy as np
from scipy.optimize import curve_fit


def logarifm(x, a, b, c):
    return a * np.log(b + x) + c


def line(x, a, b):
    return a * x + b


def polinom(x, a, b, c):
    return a*x**2 + b*x + c





fig, plot = plt.subplots()
data = pd.read_csv("data.csv", delimiter=";", names=["N", "Search"])

popt, _ = curve_fit(line, data["N"].tolist(), data["Search"].tolist())

a, b = popt

y = line(data['N'], a, b)

plot.scatter(data["N"], data["Search"], s=7, color='red')
plot.plot(data["N"], y)

plot.set_title("Стратегия А (поиск случайного элемента)")
plot.set_xlabel("Число элементов в массиве")
plot.set_ylabel("Время")


fig.savefig("Strategy_A.pdf")
