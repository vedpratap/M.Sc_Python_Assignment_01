// C - Program to calculate integral using Simpson 1/8 rule.

#include <stdio.h>
#include <math.h>

//Definition of a function => f(x^3).
double f(double x){
    double s = x*x*x;
    return s;
}

void main(){
	//Variables and their initialization.
    double a, b; int n, i;
    double s1sum = 0.0;

    //Inputs
    printf("Enter Lower Limit (a): ");
    scanf("%lf", &a);
    printf("Enter Upper Limit (b): ");
    scanf("%lf", &b);
    printf("Enter No. of strips in even (n): ");
    scanf("%d", &n);
    
    //Calculation of width of rectangular strips.
    double h = fabs(b - a)/n;
    
    //Calculation using for loop.
    for (i = 1; i < n; i++){
        if (i % 2 == 0){
            s1sum += 2*f(a+(i*h));
        }
        else{
            s1sum += 4*f(a+(i*h));
        }
    }
    
    //Final value.
    double integral = (h/3)*(f(a)+f(b)+s1sum);
    
    //Output
    printf("Required integral using Simpson 1/3 rule  = %lf", integral);
}
