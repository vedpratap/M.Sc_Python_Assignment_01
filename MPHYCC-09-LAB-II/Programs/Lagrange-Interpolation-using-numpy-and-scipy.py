#Lagrange Interpolation: python script using numpy and scipy

import numpy as np
from scipy.interpolate import lagrange

#Enter the x values 
x=eval(input('Enter the x values:'))

#Enter the corresponding y values
y=eval(input('Enter the y values:'))

#Enter the xp value where corresponding yp required to calculate
xp=eval(input('Enter the xp values:'))

#Interpolating as f using the function lagrange
f = lagrange(x, y)

#Output
print('The interpolated values of yp:\n', f(xp))