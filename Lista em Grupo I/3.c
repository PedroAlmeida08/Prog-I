#include <stdio.h>

int main() 
{
	double n1, n2;
	
	printf("Escreva um numero: ");
	scanf("%lf", &n1);
	printf("Escreva outro numero:");
	scanf("%lf", &n2);

	n1 = n1 * 1.3;
	n2 = n2 * 0.75;
	
	printf("\nPrimeiro numero com acrescimo de 30%%: %.2lf\nSegundo numero com decrescimo de 25%%: %.2lf\n", n1, n2);
	
	return 0;
}
