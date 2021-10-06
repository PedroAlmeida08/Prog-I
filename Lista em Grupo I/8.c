#include <stdio.h>

int main ()
{
	int idade, anos_bis, dias_bis, anos, dias, total;
	
	printf("Digite uma idade: ");
	scanf("%d", &idade);
	
	anos_bis = idade / 4;
	dias_bis = anos_bis * 366;
	anos = idade - anos_bis;
	dias = anos * 365;
	total = dias + dias_bis;
	
	printf("\nEsta pessoa viveu %d dias.\n", total);
	
	return 0;
}
