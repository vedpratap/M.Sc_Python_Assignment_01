# Simple Plotting - Example 01

# importing the required module 
import matplotlib.pyplot as plt 
    
# x axis values 
x = [1,2,3,4,5,6,7,8,9,10] 
# corresponding y axis values 
y = [2,4,1,3,5,4,7,8,9,2] 
    
# plotting the points  
plt.plot(x, y) 
    
# naming the x axis 
plt.xlabel('x - axis') 
# naming the y axis 
plt.ylabel('y - axis') 
    
# giving a title to my graph 
plt.title('Simple Plotting') 
    
# function to show the plot 
plt.show() 