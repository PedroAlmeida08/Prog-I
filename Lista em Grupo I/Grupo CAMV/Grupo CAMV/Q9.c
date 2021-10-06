#include <stdio.h>
 
int main() {
	float total,alcool,gasolina;
	printf("Digite a quantidade total de litros: ");
	scanf("%f", &total);
	printf("Digite a proporcao de alcool em %%: ");
	scanf("%f", &alcool);
	gasolina = 100-alcool; // a soma das proporções tem que ser igual a 100%
	float talcool = total*alcool/100;
	float tgasolina = total*gasolina/100;
	printf("Em %.2f litros de combustivel existem %.2f litros de alcool e %.2f litros de gasolina.\n",total,talcool,tgasolina);
	return 0;
}
