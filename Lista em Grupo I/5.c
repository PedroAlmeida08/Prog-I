#include <stdio.h>

int main ()
{
	double cap_tan, prec_gas, prec_alc, total_gas, total_alc, resultado;
	
	printf("Digite a capacidade do tanque (em litros): ");
	scanf("%lf", &cap_tan);
	printf("Digite o preco da gasolina (em reais): ");
	scanf("%lf", &prec_gas);
	printf("Digite o preco do alcool (em reais): ");
	scanf("%lf", &prec_alc);

	total_gas = (prec_gas * (cap_tan * 0.8));
	total_alc = (prec_alc * (cap_tan * 0.2));
	resultado = total_gas + total_alc; 
	
	printf("\nValor total: %.2lf", resultado);
	printf("\nDeste valor, %.2lf reais sao de alcool e %.2lf sao de gasolina.\n ", total_alc, total_gas);

	return 0;
}
