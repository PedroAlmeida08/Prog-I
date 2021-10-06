#include <stdio.h>

#define DIM 5

void LerMatriz(char *Arte);
void Imprimir(char VetArte[DIM]);

int main()
{
	char Arte[DIM][DIM];
	LerMatriz(*Arte);
	
	char VetArte[DIM];	
	Imprimir(VetArte);
	
	return 0;
}

void LerMatriz(char *Arte)
{
	for (int i = 0; i < DIM; i++)
		for (int j = 0; j < DIM; j++)
		{
			scanf("%s", &Arte[i * DIM + j]);
			printf("Digite o caractere da linha %i, coluna %i: ", i+1, j+1);
		}
			
}

void Imprimir(char VetArte[DIM])
{
	for (int i = 0; i < DIM; i++)
		printf("%s ", VetArte[i]);
	printf("\n");
}
