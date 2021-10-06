#include <stdio.h>

int main ()
{
	int matricula;
	
	printf("Digite o seu numero de matricula: ");
	scanf("%d", &matricula);
	
	switch (matricula % 10)
	{
		case 0: printf("\nPagamento em Janeiro\n");   break;
		case 1: printf("\nPagamento em Fevereiro\n"); break;
		case 2: printf("\nPagamento em Marco\n");     break;
		case 3: printf("\nPagamento em Abril\n");     break;
		default: printf("\nPagamento em Maio\n");
	}
	
	return 0;
}
