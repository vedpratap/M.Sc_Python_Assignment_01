# Python-Script for Random Walk Implementation - 2D

import numpy as np
import matplotlib.pyplot as plt
import random 

n = eval(input('Enter the number of steps:'))

# x and y are arrays which store the coordinates of the position 
y = np.zeros(n)
x = np.zeros(n)

# Assuming the four directions of movement.
direction=['NORTH','SOUTH','EAST','WEST'] 

for i in range(1, n): 
 step = random.choice(direction) #Randomly choosing the direction of movement. 
 if step == "EAST":              #updating the direction 
     x[i] = x[i - 1] + 1
     y[i] = y[i - 1] 
 elif step == "WEST": 
     x[i] = x[i - 1] - 1
     y[i] = y[i - 1] 
 elif step == "NORTH": 
     x[i] = x[i - 1] 
     y[i] = y[i - 1] + 1
 else: 
     x[i] = x[i - 1] 
     y[i] = y[i - 1] - 1

#plotting the walk.
plt.title("Random Walk 2-D")
plt.xlabel('x-position')
plt.ylabel('y-position')
plt.plot(x, y, "g-") 
plt.show()