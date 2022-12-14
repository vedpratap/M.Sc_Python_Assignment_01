// C - Program for calculation of roots of a quadratic equation.

#include<stdio.h>
#include<math.h>
main()
{
	//Variables
	float a,b,c,d,r1,r2,e,f;
	
	//Inputs
	printf("Enter the values of a,b,c (Separated by space) : ");
	scanf("%f %f %f",&a,&b,&c);
	
	//Calculation of discriminant.
	d=pow(b,2)-(4*a*c);
	
	//Calculation of roots bases on nature of discriminant.
	// if d > 0 => Roots will be real & Unequal.
	// if d = 0 => Roots will be real & equal.
	// if d < 0 => Roots will not be real.
	
	if(d>=0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("First Root= %f\nSecond Root= %f",r1,r2);
	}
	else
	{
		e=-b/(2*a);
		f=sqrt(-d)/(2*a);
		printf("First Root= %f+i%f\nSecond Root= %f+i%f",e,f,e,f);
	}	
}
