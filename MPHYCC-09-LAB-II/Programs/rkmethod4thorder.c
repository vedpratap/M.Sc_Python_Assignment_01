//C-Program for solving a Differential equation using Runge-Kutta 4th order method.

int main(){
	//Variables
	int n, i; float x0, xm, y0, x1, y1, l, h, k1, k2, k3, k4;
	
	//Inputs
	printf("Enter the number of iteration (n) : ");
	scanf("%d", &n); 
	printf("Enter the initial point (x0) : ");
	scanf("%f", &x0); 
	printf("Enter the last point (l) : ");
	scanf("%f", &l); 
	printf("Enter the initial condition (y0) : ");
	scanf("%f", &y0); 
	
	//Calculation of no. of sub intervals.
	h = (l-x0)/n;
	
	//Calculation using for loop.
	for(i=1; i<=n; i++){
		x1 = x0+h;
		xm = x0+h/2;
		k1 = -h*y0;
		k2 = -h*(y0+k1/2);
		k3 = -h*(y0+k2/2);
		k4 = -h*(y0+k3);
		y1 = y0+(1.0/6.0)*(k1+2*k2+2*k3+k4);
		//Output
		printf("x[%d] and y[%d] : %.6f %.6f\n",i,i,x1,y1);
		x0 = x1;
		y0 = y1;
	}
}
