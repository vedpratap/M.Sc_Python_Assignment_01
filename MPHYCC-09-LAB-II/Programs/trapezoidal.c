// C - Programm to calculate the integral using Trapezoidal Method.

#include <stdio.h>
#include <math.h>

//Definition of a function => f(x^3)
double f(double x){
    double s = x*x*x;
    return s;
}

void main(){
	//Variables and their initialization.
    double a, b; int n, i;
    double tsum = 0.0;

    //Inputs
    printf("Enter Lower Limit (a): ");
    scanf("%lf", &a);
    printf("Enter Upper Limit (b): ");
    scanf("%lf", &b);
    printf("Enter No. of strips (n): ");
    scanf("%d", &n);
    
    //Calculation of width of rectangular strips.
    double h = fabs(b - a)/n;
    tsum += (h/2)*(f(a)+f(b));
    
    //Calculation using for loop.
    for (i = 1; i < n; i++){
        tsum += (h/2)*(2*f(a + (i*h)));
    }
    
    //Output
    printf("Required integral using Trapezoidal rule  = %lf", tsum);
}
