#include<stdio.h>

int main ()
{
	double raio, area, pi;
	
	pi = 3.14159;
	
	scanf("%lf", &raio);
	area = (raio*raio)*pi;
	
	printf("A=%.4f\n", area);
	
	return 0;
}
