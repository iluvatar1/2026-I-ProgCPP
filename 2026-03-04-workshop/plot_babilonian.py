import numpy as np # para leer los datos y guardarlos en arreglos
import matplotlib.pyplot as plt

# leer los datos
ii, root, diff = np.genfromtxt("datosb.txt", unpack=True)

# dibujar y guardar a un pdf
fig, ax = plt.subplots()
ax.plot(ii, diff, '-*', label="Data")
# TODO labels
ax.set_ylabel(rf"$\Delta$ rel")


# TODO : Escala log en x y en y 
ax.set_yscale("log")
#ax.set_xscale("log")

# Imprimir la figura
fig.savefig("plot.pdf")