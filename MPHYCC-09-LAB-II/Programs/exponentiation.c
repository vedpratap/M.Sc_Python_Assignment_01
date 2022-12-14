// C - Program for expansion of e^x.

#include <stdio.h>
#include <math.h>

//Function for factorial => fac(n).
int fac(int n)
{
if (n==0){
    return 1;   
}
else{
    return n*fac(n-1);	
}		
}

//Expansion of e^x.

int main(){
   //Variables and their initialization.
   float x, sum = 0.0; int n, i;
   
   //Inputs
   printf("Enter the value of x : ");
   scanf("%f", &x);
   printf("Enter the number of terms : ");
   scanf("%d", &n);	
   
   //Calculation using for loop.
   for (i = 0; i <= n; i++){
        sum += pow(x, i)/fac(i);
   }
   
   //Output
   printf("Value of e^%f using above defined program = %f\n", x, sum);
   printf("Value of e^%f using pre-defined function = %f\n", x, exp(x));
   
}

