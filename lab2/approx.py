import numpy as np
import pandas as pd

data1 = pd.read_csv("data/data3.csv", delimiter=';', names=['N', 'Search'])
a = np.polyfit(np.log(data1["N"]), np.log(data1["Search"]), 1)[0]
data2 = pd.read_csv("data/data4.csv", delimiter=';', names=['N', 'Search'])
b = data2['Search'].mean()
print(a, b)

data1 = pd.read_csv("data/data5.csv", delimiter=';', names=['N', 'Search'])
a = np.polyfit(np.log(data1["N"]), np.log(data1["Search"]), 1)[0]
data2 = pd.read_csv("data/data6.csv", delimiter=';', names=['N', 'Search'])
b = data2['Search'].mean()
print(a, b)

data1 = pd.read_csv("data/data7.csv", delimiter=';', names=['N', 'Search'])
a = np.polyfit(np.log(data1["N"]), np.log(data1["Search"]), 1)[0]
data2 = pd.read_csv("data/data8.csv", delimiter=';', names=['N', 'Search'])
b = data2['Search'].mean()
print(a, b)

