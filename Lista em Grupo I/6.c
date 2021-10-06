#include <stdio.h>
 
int main() 
{
	double X, litros_agua, litros_suco;
	
	printf("Digite a quantidade de refresco desejada (em litros):");
	scanf("%lf", &X);
	
	litros_agua = X * 0.8;
	litros_suco = X * 0.2;
	
	printf("\nO volume de agua a ser adicionado eh: %.2lf litros\nO volume de suco a ser adicionado eh: %.2lf litros.\n", litros_agua, litros_suco);
	
	return 0;
}
