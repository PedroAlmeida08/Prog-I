#include <stdio.h>
 
int main() {
	float capacidade,pgasolina,palcool;
	printf("Digite a capacidade do tanque em litros: ");
	scanf("%f", &capacidade);
	printf("Digite o preco da gasolina em R$: ");
	scanf("%f", &pgasolina);
	printf("Digite o preco da alcool em R$: ");
	scanf("%f", &palcool);

	float vgasolina = capacidade*0.8*pgasolina;
	float valcool = capacidade*0.2*palcool;
	float vtotal = vgasolina+valcool;
	printf("O valor total gasto eh de R$%.3f sendo destes R$%.3f de gasolina e R$%.3f de alcool.\n",vtotal,vgasolina,valcool);
	return 0;
}

