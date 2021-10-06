//Aluno: Jo�o Pedro de Almeida dos Santos
//Quest�o 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 3

void lerVet1(int *vet1);
void lerVet2(int *vet2);
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
	printVet(vet1, vet2, vetInter);
	
	return 0;
}

void lerVet1(int *vet1)
{	
	printf("Digite sempre valores diferentes para cada posi��o do vetor!\n");
		
	for(int j=0; j<tam; j++)
	{
		printf("\nDigite o valor do vetor 1 na posi��o %d: ", j+1);
		scanf("%d", &vet1[j]);
	}
	printf("\n");
	system("cls");
}

void lerVet2(int *vet2)
{	
	printf("Digite sempre valores diferentes para cada posi��o do vetor!\n");
		
	for(int j=0; j<tam; j++)
	{
		printf("\nDigite o valor do vetor 2 na posi��o %d: ", j+1);
		scanf("%d", &vet2[j]);
	
	}
	printf("\n");
	system("cls");
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
	
	for(int j=0; j<tamVetInter; j++)
	{
		printf("%2d ", vetInter[j]);
	}		
	printf("\n");
}
