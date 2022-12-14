#Lagrange Interpolation: python script using numpy and scipy with visualization.

import numpy as np
from scipy.interpolate import lagrange
import matplotlib.pyplot as plt
#Enter the x values 
x=eval(input('Enter the x values:'))
#Enter the corresponding y values
y=eval(input('Enter the y values:'))
#Enter the xp value where corresponding yp required to calculate
xp=eval(input('Enter the xp values:'))
#Interpolating as f using the function lagrange
f = lagrange(x, y)
print('The interpolated values of yp:\n', f(xp))
#visualizing the data points and interpolated polynomial
fig = plt.figure(figsize = (10,8))
#Plotting the interpolated data as continuous blue line and x, y data as red filled circle
plt.plot(xp, f(xp), 'b', x, y, 'ro')
plt.title('Lagrange Polynomial')
plt.grid()
plt.xlabel('x')
plt.ylabel('y')
plt.show()
