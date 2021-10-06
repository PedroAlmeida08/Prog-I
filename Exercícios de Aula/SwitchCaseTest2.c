#include <stdio.h>

int main ()
{
	int comida, bebida;
	float conta = 0;
	
	printf("Digite o codigo do lanche: ");
	scanf("%d", &comida);
	printf("Digite o codigo da bebida: ");
	scanf("%d", &bebida);
	
	switch (comida)
	{
		case 100: conta = conta + 3.00; break;
		case 101: conta = conta + 1.50; break;
		case 102: conta = conta + 2.70; break;
		case 103: conta = conta + 3.20; break;
		default: printf("\nSanduiche nao cadastrado!\n");
	}
	switch (bebida)
	{
		case 201: conta = conta + 1.00; break;
		case 202: conta = conta + 2.80; break;
		default: printf("\nBebida nao cadastrada!\n");
	}
	
	printf("\nTotal a pagar: R$%.2f\n", conta);
	
	return 0;
}
