#include <stdio.h>

int main ()
{
	double litros, l_alc, l_gasol, prop_alc, prop_gasol;
	
	printf("Digite o volume de combustivel (em litros): ");
	scanf("%lf", &litros);
	printf("Digite a porcentagem de alcool no combustivel: ");
	scanf("%lf", &prop_alc);
	
	prop_gasol = 100 - prop_alc;
	
	l_alc = litros * (prop_alc / 100);
	l_gasol = litros * (prop_gasol / 100);
	
	printf("\nEm %.2lf litros de combustivel, existem %.2lf litros de alcool e %.2lf litros de gasolina.\n", litros, l_alc, l_gasol);
		
	return 0;
}
