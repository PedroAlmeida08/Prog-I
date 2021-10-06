#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
// Orlando Nascimento Ferreira Junior - Questão 3

void Dobra(int Vetor[100]);
void ImprimirMatriz(int Matriz[10][10]);
int main() 
{
	system("color 02");
	int Vetor[100];
	setlocale (LC_ALL, "");
	printf("\nDigite os valores do vetor: ");
	for (int i = 0; i<100; i++)
	{
		scanf("%d", &Vetor[i]);
	}

	Dobra(Vetor);
	return 0;
}

void Dobra (int Vetor[100])
{
	int Matriz[10][10], k=0, i=0, j=0;
	while(k<100)
	{
	if(i%2==0)
	{
		for (int j=0;j<10;j++,k++)
			Matriz[i][j] = Vetor[k];
		i++;
	}
	if(i%2==1)
	{
		for (int j=9;j>=0;j--,k++)
			Matriz[i][j] = Vetor[k];
		i++;
	}	
	}
	ImprimirMatriz(Matriz);
}

void ImprimirMatriz(int Matriz [10][10])
{
	for(int i=0; i<10;i++)
	{
		for (int j=0;j<10;j++)
			printf("%3d ",Matriz[i][j]);
		printf("\n");
	}
	exit(0);
}
