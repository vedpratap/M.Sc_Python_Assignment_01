// C-Program for calculationg Zero's of a function using Bisection Method.

#include <stdio.h>
#include <math.h>

int main(){
	//Variables
	int i; float x1, x2, x3, y1, y2, y3, e, er;
	
	//Inputs
	printf("Enter the initial guess solutions and allowed error (Sep. by space) : ");
	scanf("%f %f %f", &x1, &x2, &e);
	
	//Value of a function at x1 & x2.
	y1 = 3*x1 + sin(x1) - exp(x1);
	y2 = 3*x2 + sin(x2) - exp(x2);
	
	//At both points, Function value should be of different sign.
	if (y1*y2 > 0){
		printf("Initial guess solutions are not appropriate.");
		goto out;
	}
	
	//For Calculationg the number of iterations.
	i = 0;
	er = (x2-x1)*(x2-x1);
	
	//Calculation using while loop.
	while(sqrt(er) >= e){
		x3 = (x1+x2)/2;
		y3 = 3*x3 + sin(x3) - exp(x3);
		
		//Output
		printf("\ni = %d\nx1 = %f, x2 = %f,x3 = %f\ny1 = %f, y2 = %f, y3 = %f\n",i,x1,x2,x3,y1,y2,y3);
		
		if (y1*y3 > 0){
			x1 = x3;
		}
		else{
			x2 = x3;
		}
		
		y1 = 3*x1 + sin(x1) - exp(x1);
		y2 = 3*x2 + sin(x2) - exp(x2);
		
		i += 1;
		er = (x2-x1)*(x2-x1);
	}
	out:
	return 0;
}
