//Aluno: João Pedro de Almeida dos Santos
//Questão 2

#include <stdio.h>

int main()
{
	int a, b, maior, menor, div = 0;
		
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	if(a>b)
	{
		maior = a;
		menor = b;
	}
	else if (b>a)
	{
		maior = b;
		menor = a; 
	}
	
	for(int i=1;i<=maior;i++)
	{
		if(maior%i==0 && menor%i==0)
		{
			div++;
		}
	}
	
	printf("\n");
	
	if(div == 1)
	{
		printf("%d e %d sao primos entre si!\n", a, b);
	}
	else
	{
		printf("%d e %d nao sao primos entre si!\n", a, b);
	}
	return 0;
}
