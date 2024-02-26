#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double func(float x);

int main() {
	int i = 1;
	float a, b;
	printf("Enter starting and end points (a,b) :\n");
	scanf("%f %f",&a,&b);
	float c , f , e = 0.001;
	
	do {
	
	printf("\nIteration number : %d", i++);	
		
		c = (a+b)/2;
		if(func(a) * func(c) < 0) 
			b = c;
		else
			a = c;
			
	f = fabs(func(c));
	printf("\nRoot : %f", c);	
	
	} while(f > e);
	
	printf("\nFinal Root : %f", c);
	return 0;
}

double func(float x) {

	return (pow(x,3) + 4 * pow(x,2) - 10);
	
}	
