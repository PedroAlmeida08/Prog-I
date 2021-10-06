//Aluno: João Pedro de Almeida dos Santos
// Questão 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define tam 100

void printMatriz(int *vet);

int main() 
{
	setlocale (LC_ALL, "");
	system("color 02");
	
	int vet[tam];
	for(int i=0; i<tam; i++)
	{
		vet[i] = i + 1;
	}
	
	printMatriz(vet);
	
	return 0;
}

void printMatriz(int *vet)
{
	int j = 0;
	int tamMatriz = sqrt(tam);
	
	for(int i=0; i<tam; i++)
	{
		if(j<tamMatriz-1)
		{
			printf("%3d ", vet[i]);
			j++;
		}
		else if(j=tamMatriz)
		{
			printf("%3d\n", vet[i]);
			j = 0;
		}
	}
}

