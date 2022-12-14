#Python-Script for estimating the pi value using Monte Carlo Method.

# importing the random module
import random

#More the generated points more accurate the value of pi
Total_points = eval(input('Enter the total points:')) 
circle_points = 0
square_points = 0
circle_not_points = 0

# Total Random numbers generated points
for i in range(Total_points): 
# Randomly generated x and y values from a uniform distribution
# Rannge of x and y values is -1 to 1
 rand_x= random.uniform(-1, 1)
 rand_y= random.uniform(-1, 1) 
# Distance between (x, y) from the origin
 origin_dist= rand_x**2 + rand_y**2 
# Checking if (x, y) lies inside the circle
 if (origin_dist<= 1):
    circle_points+= 1
 else:
    circle_not_points+= 1
square_points+= 1
# Estimating value of pi, pi= 4*(no. of points generated inside the 
#circle)/ (no. of points generated inside the square)
pi = 4* circle_points/ square_points

# printing the value of points inside the circle (circle_points)
print('circle_points:', circle_points)

# points not inside the circle (circle_not_points) 
print('circle_not_points:', circle_not_points)

# points inside the square (square_points) 
print('square_points:', square_points)

# printing the value of pi
print('Final Estimation of pi:', pi)