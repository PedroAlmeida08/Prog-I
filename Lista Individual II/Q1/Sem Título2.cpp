//Aluno: João Pedro de Almeida dos Santos
//Questão 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 3

void lerVet(int *vetA, int *vetB);
void checkVet(int *vetA, int *vetB);

int main() 
{
	setlocale (LC_ALL, "");
	system("color 02");
	
	int vetA[tam], vetB[tam];
	
	lerVet(vetA, vetB);
	checkVet(vetA, vetB);

	
	return 0;
}

void lerVet(int *vetA, int *vetB)
{
	printf("Digite sempre valores diferentes para cada posição do vetor!\n");
	
	for(int i=0; i<tam; i++)
	{
		printf("\nDigite o valor do vetor 1 na posição %d: ", i+1);
		scanf("%d", &vetA[i]);
	}
	
	for(int i=0; i<tam; i++)
	{
		printf("\nDigite o valor do vetor 2 na posição %d: ", i+1);
		scanf("%d", &vetB[i]);
	}
}

void checkVet(int *vetA, int *vetB)
{
	int vetInter[tam];
	
	for(int i=0; i<tam; i++)
		for(int j=0; j<tam; j++)
		{
			if(vetA[i] == vetB[j])
				vetInter = VetA[i];		
		}
		
	for(int i=0; i<tam; i++)
		printf("%d ", vetInter);
	printf("\n");
}
