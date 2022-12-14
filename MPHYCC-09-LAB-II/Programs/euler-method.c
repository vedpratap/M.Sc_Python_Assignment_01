// C-Program for solving a differential equation using Euler's Method.

#include<stdio.h>
#include<math.h>

//Definition of a function. dy/dx = f(x,y) = x^2 - y
float f(float x, float y){
	float result = (x*x) - y;
	return result;
}

//Program
int main(){
	//Variables
	float x0, y0, slope, h, xn, yn;
	int n, i;
	
	//Inputs
	printf("Enter the initial conditions.\n");
	printf("Initial point x0 : ");
	scanf("%f", &x0);
	printf("Initial value of y[x = %.2f] : ", x0);
	scanf("%f", &y0);
	printf("Final value xn : ");
	scanf("%f", &xn);
	printf("Enter the value of no. of steps n : ");
	scanf("%d", &n);
	
	//Calculation of width of intervals.
	h = (xn-x0)/n;
	
	//Output
	printf("\nx\t\ty\n");
	printf("----------------------\n");
	for(i=0; i<=n; i++){
		yn = y0+h*f(x0,y0);
		y0 = yn;
		x0 = x0+h;
		printf("x(%d) = %.2f y(x=%.2f) = %.2f\n",i,x0,x0,yn);
	}
}
