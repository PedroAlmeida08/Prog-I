#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int total, maiorAnual;
	int mensal[12];
	int vendas[12][10];
	
	for(int i=0;i<12;i++) // define uma matriz randômica
	{
		for(int j=0;j<10;j++)
		{
			vendas[i][j] = rand() % 1000;
			printf("%d \t", vendas[i][j]); 
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i=0;i<12;i++) // soma a matriz por completo
	{
		for(int j=0;j<10;j++)
		{
			total = total + vendas[i][j]; 
		}
	}
	printf("Total de vendas anuais: %d\n", total);
	printf("\n");
	
	for(int i=1;i<=12;i++) //soma as linhas
	{
	mensal[i] = 0;	
		for(int j=1;j<=10;j++)
		{
			mensal[i] = mensal[i] + vendas[i][j]; 
		}
		printf("Total do mes %d: %d\n", i, mensal[i]);
	}
	printf("\n");
	
	int anual[10];
	for(int j=1;j<=10;j++) // soma as colunas
	{
		anual[j] = 0;
		for(int i=1;i<=10;i++)
		{
			anual[j] = anual[j] + vendas[i][j]; 
		}
		printf("Total do ano %d: %d\n", j, anual[j]);
	}
	printf("\n");
	
	int maiorMensal[10];
	for(int j=0;j<10;j++) // vê qual é o maior número da coluna
	{
		maiorMensal[j];
		for(int j=0;j<12;j++)
		{
		if(vendas[i][j]>mensal[j])
			maiorMensal[j] = i; 
		}
		printf("Mês de maior venda do produto %d: %d\n", j, i);
	}
	printf("\n");
		
	return 0;
}
