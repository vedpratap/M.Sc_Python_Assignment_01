# Python-Program for Solving 1 Dimensional Integral using Monte Carlo Method. 

# importing the modules
from numpy import random
import numpy as np

# limits of integration
a = 0
b = np.pi # gets the value of pi
N = 10000
ar = np.zeros(N) # array of zeros of length N

# iterating over each Value of ar and filling it with a random value between the limits a and b
for i in range (len(ar)):
 ar[i] = random.uniform(a,b)

# variable to store sum of the functions of different values of x
integral = 0.0

# function to calculate the sin of a particular value of x
def f(x):
 return np.sin(x)

# iterates and sums up values of different functions of x
for i in ar:
 integral += f(i)

# we get the answer by the formula derived adobe
ans = (b-a)/float(N)*integral

# prints the solution
print ("The value calculated by monte carlo integration is","%0.6f"%ans)
