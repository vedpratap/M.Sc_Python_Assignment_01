// C - Program to calculate the integral using Simpson 3/8 Method.

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
    double s3sum = 0.0;
    
    //Inputs
    printf("Enter Lower Limit (a): ");
    scanf("%lf", &a);
    printf("Enter Upper Limit (b): ");
    scanf("%lf", &b);
    printf("Enter No. of strips in multiple of 3 i.e (n): ");
    scanf("%d", &n);
    
    //Calculation of width of rectangular strips.
    double h = fabs(b - a)/n;
    
    //Calculation using for loop.
    for (i = 1; i < n; i++){
        if (i % 3 == 0){
            s3sum += 2*f(a+(i*h));
        }
        else{
            s3sum += 3*f(a+(i*h));
        }
    }
    
    //Final value.
    double integral = (3*h/8)*(f(a)+f(b)+s3sum);
    
    //Output
    printf("Required integral using Simpson 3/8 rule  = %lf", integral);
}
