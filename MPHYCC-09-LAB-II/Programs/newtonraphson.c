// C-Program for finding the Zero's of a function using Newton-Raphson method.

#include <stdio.h>
#include <math.h>

int main(){
	//Variables
	int n, i; float x1, y1, dy1, x2, y2, dy2, e, er, eder;
	
	//Inputs
	printf("Enter the maximum number of iterations : ");
	scanf("%d", &n);
	printf("Enter Initial guess(x1) : ");
	scanf("%f", &x1);
	printf("Enter allowed in the solution(e) : ");
	scanf("%f", &e);
	printf("Enter minimum limit to the derivative : ");
	scanf("%f", &eder);
	
	//Calculation using for loop.
	for(i=1;i<=n;i++){
		y1 = x1*x1-2;
		dy1 = 2*x1;
		
		x2 = x1-(y1/dy1);
		er = (x2-x1)*(x2-x1);
		
		y2 = x2*x2-2;
		dy2 = 2*x2;
		
		//Output-1
		printf("\ni = %d\nx1 = %f, x2 = %f\nf'(x1) = %f, f'(x2) = %f\n",i,x1,x2,y1,y2);
		
		x1 = x2;
		dy2 = dy2*dy2;
		dy2 = sqrt(dy2);
		
		if (dy2 <= eder){
			//Output-2
			printf("\nDerivative is small, x = %f, f(x) = %f, f'(x) = %f", x2, y2, dy2);
			goto out;
		}
		
		if (sqrt(er) <= e){
			//Output-3
			printf("\nThe solution is : x = %f, f(x) = %f\n",x2, y2);
			printf("The number of iteration is : i = %d", i);
			goto out;
		}
	}
	//Output-4
	printf("Solution does not found in n iterations.");
	out:
	return 0;
}
