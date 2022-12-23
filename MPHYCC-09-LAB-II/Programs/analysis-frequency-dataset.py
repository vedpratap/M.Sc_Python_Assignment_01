#----Data Analysis-Statistical Parameters Calculation (Frequency Dataset)----

import numpy as np

class_mark = np.array([5, 15, 25, 35, 45])
freq = np.array([3, 11, 14, 14, 8])
cum_freq = np.array([3, 14, 28, 42, 50])
xi_fi = np.array([15, 165, 350, 490, 360])

avg = np.sum(xi_fi)/np.sum(freq)
print("Average/Mean : ", avg)

n = 50
l = 20
h = 10
c_f = 14
f = 14
med = l+(((n/2)-c_f)/f)*h
print("Median : ", med)

l_1 = 30
f_1 = 14
f_0 = 14
f_2 = 8
mod = l+((f_1-f_0)/(2*f_1-f_0-f_2))*h
print("Mode : ", mod)

'''
Data Source : google.com
IDE : Visual Studio Code
'''