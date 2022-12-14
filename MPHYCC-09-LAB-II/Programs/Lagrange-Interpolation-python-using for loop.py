#Lagrange Interpolation : python script using for loop

#Defining the Lagrange Interpolation as LagIntp
def LagIntp(x, y, xp):     #xp the x value where yp has to calculated 
 m = len(x)
 n = len(y)
 assert m==n
 L = 0
 l = [1]*n
 for i in range(n):
    for j in range(n):
        if j != i:
            l[i]*=(xp-x[j])/(x[i]-x[j])
    L = L + y[i]*l[i]
 return L 
 
#Enter the x values 
x=eval(input('Enter the x values:'))
#Enter the corresponding y values
y=eval(input('Enter the y values:'))
#Enter the xp value where corresponding yp required to calculate
xp=eval(input('Enter the xp value:'))
print('Value of yp at xp from interpolation:', LagIntp(x, y, xp))
