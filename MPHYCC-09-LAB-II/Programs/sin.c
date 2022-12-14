// C - Program for calculation of sin(x).

#include <stdio.h>
#include <math.h>

//Function for factorial.
int fac(int n)
{
if (n==0){
    return 1;   
}
else{
    return n*fac(n-1);	
}		
}

//Expansion of sin(x)

int main(){
	//Variables and their initialization.
    float d, x, sum = 0.0; int n,i;
    
    //Inputs
    printf("Enter the value of x in degree : ");
    scanf("%f", &d);
    printf("Enter the no. of terms : ");
    scanf("%d", &n);
    
    //degree to radian conversion.
    x = (3.14*d)/180;
    
    //Calculation using for loop.
    for (i=0; i<=n; i++){
         sum += (pow(-1, i)*pow(x, 2*i+1))/fac(2*i+1);
    }
    
    //Output
    printf("Value of sin(%f) using above defined program = %f\n", d, sum);
    printf("Value of sin(%f) using pre-defined function = %f", d, sin(x));
}

