# Python-Script for Random Walk Implementation in 1D.

import numpy as np
import matplotlib.pyplot as plt

x = 0
y = 0
xposition = [0] #starting from origin (0,0)
yposition = [0]

n = eval(input('Enter the number of steps:'))

for i in range (1,n+1):
 step_value = 2*np.random.randint(0,2)-1
 if step_value == 1: # if step value is 1 we move up
    x += 1
    y += 1 #moving up in u direction
 if step_value == -1: # if step is 0 we move down 
    x += 1
    y += -1 #moving down in y direction
 xposition.append(x)
 yposition.append(y)
plt.plot(xposition,yposition,'r-', label = 'Randwalk1D')
plt.xlabel('stpes')
plt.ylabel('position')
plt.title('1-D Random Walks')
plt.show()