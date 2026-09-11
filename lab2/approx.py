"""Estimate log-log timing slopes from the supplied sorting measurements."""
from pathlib import Path

import numpy as np
import pandas as pd

DATA_DIR = Path(__file__).resolve().parent / "data"

data1 = pd.read_csv(DATA_DIR / "data3.csv", delimiter=';', names=['N', 'Search'])
a = np.polyfit(np.log(data1["N"]), np.log(data1["Search"]), 1)[0]
data2 = pd.read_csv(DATA_DIR / "data4.csv", delimiter=';', names=['N', 'Search'])
b = data2['Search'].mean()
print(a, b)

data1 = pd.read_csv(DATA_DIR / "data5.csv", delimiter=';', names=['N', 'Search'])
a = np.polyfit(np.log(data1["N"]), np.log(data1["Search"]), 1)[0]
data2 = pd.read_csv(DATA_DIR / "data6.csv", delimiter=';', names=['N', 'Search'])
b = data2['Search'].mean()
print(a, b)

data1 = pd.read_csv(DATA_DIR / "data7.csv", delimiter=';', names=['N', 'Search'])
a = np.polyfit(np.log(data1["N"]), np.log(data1["Search"]), 1)[0]
data2 = pd.read_csv(DATA_DIR / "data8.csv", delimiter=';', names=['N', 'Search'])
b = data2['Search'].mean()
print(a, b)

