#include <stdio.h>

float media(float n1, float n2, float n3);

int main()
{
	float a, b, c;
	
	scanf("%f %f %f", &a, &b, &c);
	
	printf("Media: %.2f\n", media(a,b,c));
	
	return 0;	
}

float media(float n1, float n2, float n3)
{
	float soma = (n1*3)+(n2*4)+(n3*5);
	return soma/12;
}
