#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double f(float x);

int main() {

	float a, b, e = 0.001;
	double abs;
	printf("Enter start and end points (a,b) :\n");
	scanf("%f %f",&a,&b);
	double x1;
	do {
	
		x1 = (a * f(b) - b * f(a))/(f(b) - f(a));
		if(f(a) * f(b) < 0)
			b = x1;
		else 
			a = x1;
		abs = fabs(f(x1));
	} while(abs > e);
	
	printf("Root is : %lf",x1);
	return 0;
}

double f(float x) {
	
	 return (pow(x,3)-2*x-5);
	
}
