// C - Program to calculate integral using Riemann sum (Left, Right & Mid-Riemann sum).

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
    double lsum = 0.0, msum = 0.0, rsum = 0.0;
    
    //Inputs
    printf("Enter Lower Limit (a): ");
    scanf("%lf", &a);
    printf("Enter Upper Limit (b): ");
    scanf("%lf", &b);
    printf("Enter No. of strips (n): ");
    scanf("%d", &n);
    
    //Calculation of width of rectangular strips.
    double h = fabs(b - a)/n;
    msum += (h/2)*(f(a)+f(b));
    
    //Left-Riemann Sum
    for ( i = 0; i < n; i++){
        lsum += h*(f(a + (i*h)));
    }
    
    //Right-Riemann Sum
    for (i = 1; i < n+1; i++){
        rsum += h*(f(a + (i*h)));
    }
    
    //Mid-Riemann Sum
    for (i = 1; i < n; i++){
        msum += (h/2)*(2*f(a + (i*h)));
    }
    
    //Output
    printf("Required integral using Left-Riemann Sum = %lf\n",lsum);
	printf("Required integral using Mid-Riemann Sum = %lf\n", msum);
	printf("Required integral using Right-Riemann Sum = %lf", rsum);
}
