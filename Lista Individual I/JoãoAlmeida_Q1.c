//Aluno: João Pedro de Almeida dos Santos
//Questão 1

#include <stdio.h>

int main()
{
	int n, divisores = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	printf("\n");
	
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
		{
			divisores = divisores + i; 
		}
	}
	
	if(divisores == n)
	{
		printf("%d eh um numero perfeito\n", n);
	}
	else
	{
		printf("%d nao eh um numero perfeito!\n", n);
	}
		
	return 0;
}
