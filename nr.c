#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double f(double x);
double g(double x);

int main() {
	
	double x0, x1, e = 0.001;
	double abs = 0;
	check:
	printf("Enter initial approximation of x :\n");
	scanf("%d",&x0);
	if(g(x0) == 0) {
		goto check;
	}
	else {
		do {
			x1 = (x0 - (f(x0)/g(x1)));
			x0 = x1;
			abs = fabs(f(x1));
		
		} while(abs > e);
	}
	
	printf("Root is : %lf",x1);
	return 0;
}

double f(double x) {
	
	return (pow(x,3)-3*x-5);
	
}

double g(double x) {
	
	return (3*(pow(x,2))-3);

}
