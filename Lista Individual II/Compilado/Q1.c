//Aluno: João Pedro de Almeida dos Santos
// Questão 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 50

void lerVet1(int *vet1);
void lerVet2(int *vet2);
void checarVet(int *vet1, int *vet2, int *vetInter);
void printVet(int *vet1, int *vet2, int *vetInter);

int main() 
{
	setlocale (LC_ALL, "");
	system("color 02");
	
	int vet1[tam];
	int vet2[tam];
	int vetInter[tam];
		
	lerVet1(vet1);
	lerVet2(vet2);
	for(int i=0; i<tam; i++)
	{
		printf("%2d ", vet1[i]);
	}		
	printf("\n");
	for(int i=0; i<tam; i++)
	{
		printf("%2d ", vet2[i]);
	}		
	printf("\n");
	checarVet(vet1, vet2, vetInter);
	printVet(vet1, vet2, vetInter);
	
	return 0;
}

void lerVet1(int *vet1)
{	
	printf("Digite sempre valores diferentes para cada posição do vetor!\n");
		
	for(int j=0; j<tam; j++)
	{
		printf("\nDigite o valor do vetor 1 na posição %d: ", j+1);
		scanf("%d", &vet1[j]);
	}
	printf("\n");
	system("cls");
}

void lerVet2(int *vet2)
{	
	printf("Digite sempre valores diferentes para cada posição do vetor!\n");
		
	for(int j=0; j<tam; j++)
	{
		printf("\nDigite o valor do vetor 2 na posição %d: ", j+1);
		scanf("%d", &vet2[j]);
	
	}
	printf("\n");
	system("cls");
}

void checarVet(int *vet1, int *vet2, int *vetInter)
{
	int k = 0;
	for(int i=0; i<tam; i++)
		for(int j=0; j<tam; j++)
		{
			if(vet1[i] == vet2[j])
			{
				vetInter[k] = vet1[i];
				k++;
			}
		}
				
}

void printVet(int *vet1, int *vet2, int *vetInter)
{
	int tamVetInter = 0;
	
	for(int i=0; i<tam; i++)
	{
		for(int j=0; j<tam; j++)
		{
			if(vet2[j] == vet1[i])
				tamVetInter++;
		}
	}
	
	for(int i=0; i<tamVetInter; i++)
	{
		printf("%2d ", vetInter[i]);
	}		
	printf("\n");
}
