// C - Program for calculating the value of log(1+x).

#include <stdio.h>
#include <math.h>

//Expansion of log(1+x)

int main(){
	//Variables and their initialization.
    float x, sum = 0.0; int n,i;
    
    //Inputs
    printf("Enter the value of x : ");
    scanf("%f", &x);
    printf("Enter the no. of terms : ");
    scanf("%d", &n);
    
    //Calculation using for loop.
    for (i=0; i<=n+1; i++){
         sum += (pow(-1, i)*pow(x, i+1))/(i+1);
    }
    
    //Output
    printf("Value of log(1 + %f) using above defined program = %f\n", x, sum);
    printf("Value of log(1 + %f) using pre-defined function = %f", x, log(1+x));
}

