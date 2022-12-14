# Python-Program for 2D Visualization (Monte-Carlo-Integration).

from numpy import random
import numpy as np
import matplotlib.pyplot as plt

a = 1; b = 2; c = 2; d = 3; N = 300

def f(x,y):
 return x**2 + y**2

plt_vals = []

for i in range(N):
 ar = np.zeros(N)
 br = np.zeros(N)
 for i in range (len(ar)):
    ar[i] = random.uniform(a,b)
    br[i] = random.uniform(c,d)
 integral = 0.0
 for i in ar:
    for j in br:
        integral += f(i,j)
 ans = (((b-a)*(d-c))/((float(N))*float(N)))*integral
 plt_vals.append(ans)

plt.title("Distributions of areas calculated")
plt.hist (plt_vals, bins=25, color='green',ec="orange")
plt.xlabel("Areas")
plt.show()
