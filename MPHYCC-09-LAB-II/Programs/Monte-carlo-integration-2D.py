# Python-Program for solving 2 Dimensional definite integral using Monte carlo method.

#----------Imports----------
from numpy import random
import numpy as np
import matplotlib.pyplot as plt

#------Variables------------
a = 1; b = 2; c = 2; d = 3; N = 1000

def f(x,y):
 return x**2 + y**2

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

print("The required integral is","%0.6f"%ans)