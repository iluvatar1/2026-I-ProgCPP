# include needed modules
import numpy as np # para leer los datos y guardarlos en arreglos
import matplotlib.pyplot as plt
import sys

# leer los datos: python plot.py datos.txt -> argv[1] : datos.txt
ii, root, diff = np.genfromtxt(sys.argv[1], unpack=True)

# dibujar y guardar a un pdf
fig, ax = plt.subplots()
ax.plot(ii, diff, '-*', label="Data")
# TODO labels
ax.set_ylabel(rf"$\Delta$ rel")


# TODO : Escala log en x y en y 
ax.set_yscale("log")
#ax.set_xscale("log")

# Imprimir la figura
plt.show()
fig.savefig("plot.pdf")