

import os
import numpy as np
import matplotlib.pyplot as plt

a = os.system("g++ NathaliaCalderon_Ejercicio28.cpp -o ej.x")
a = os.system("./ej.x > ej.dat")

data = np.loadtxt("ej.dat")

x=data[:1]
T=data[:0]

plt.figure()
plt.plot(x,T)
plt.savefig("fig")